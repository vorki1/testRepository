#pragma once
#include <iostream>
#include "NodoUser.hpp"
using namespace std;

class ListaUsers
{
    private:
        NodoUser * first,*last;
        int size;

    public:
        ListaUsers();
        void add(Usuario*);
        bool remove(Usuario*);
        Usuario* searchUser(string);
        int getSize();

};

ListaUsers::ListaUsers()
{
    first= nullptr;
    last=nullptr;
    size = 0;
}

void ListaUsers:: add(Usuario* user)
{
    NodoUser * current = new NodoUser(user);
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
bool ListaUsers:: remove(Usuario* user)
{
    NodoUser* current = first;

    if(first->getUserN()->getUser().compare(user->getUser())==0)
    {
        first=first->getNext();
        first->setPrevious(nullptr);
        size--;
        return true;
    }

    if(last->getUserN()->getUser().compare(user->getUser())==0)
    {
        last = last->getPrevious();
        last->setNext(nullptr);
        size--;
        return true;
    }

    while(current != nullptr)
    {
        if(current->getUserN()->getUser().compare(user->getUser())==0)
        {
            current->getPrevious()->setNext(current->getNext());
            current->getNext()->setPrevious(current->getPrevious());
            size--;
            return true;
        }
    }
    
}
Usuario* ListaUsers::searchUser(string user)
{
    NodoUser *current = first;
    while(current!=nullptr)
    {
        if(current->getUserN()->getUser().compare(user) == 0)
        {
            return current->getUserN();
        }
        current = current->getNext();
    }
    return nullptr;
}

int ListaUsers::getSize()
{
    return size;
}