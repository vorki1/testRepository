#pragma once
#include <iostream>
#include "NodoSoftware.hpp"
using namespace std;

class ListaSoftware
{
    private:
        NodoSoftware * first,*last;
        int size;

    public:
        ListaSoftware();
        void add(Software*);
        bool remove(Software*);
        Software* searchUser(string);
        int getSize();

};

ListaSoftware::ListaSoftware()
{
    first= nullptr;
    last=nullptr;
    size = 0;
}

void ListaSoftware:: add(Software* software)
{
    NodoSoftware * current = new NodoSoftware(software);
    if(first ==nullptr)
    {
        first = current;
        last = current;
    }
    else
    {
        first->setPrevious(current);
        current->setNext(first);
        first = current;
    }
    size++;
}
bool ListaSoftware:: remove(Software* software)
{
    NodoSoftware* current = first;
    
    if(first->getSoftwareN()->getName().compare(software->getName())==0)
    {
        first=first->getNext();
        first->setPrevious(nullptr);
        size--;
        return true;
    }

    if(last->getSoftwareN()->getName().compare(software->getName())==0)
    {
        last = last->getPrevious();
        last->setNext(nullptr);
        size--;
        return true;
    }

    while(current != nullptr)
    {
        if(current->getSoftwareN()->getName().compare(software->getName())==0)
        {
            current->getPrevious()->setNext(current->getNext());
            current->getNext()->setPrevious(current->getPrevious());
            size--;
            return true;
        }
    }
    
}
Software* ListaSoftware::searchUser(string software)
{
    NodoSoftware *current = first;
    while(current!=nullptr)
    {
        if(current->getSoftwareN()->getName().compare(software) == 0)
        {
            return current->getSoftwareN();
        }
        current = current->getNext();
    }
    return nullptr;
}

int ListaSoftware::getSize()
{
    return size;
}