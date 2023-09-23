#pragma once
#include <iostream>
#include "Software.hpp"
using namespace std;

class NodoSoftware
{
    private:
        Software* software;
        NodoSoftware *next,*previous;
    public:
        NodoSoftware(Software*);
        Software* getSoftwareN();
        NodoSoftware* getNext();
        NodoSoftware* getPrevious();
        void setSoftware(Software*);
        void setNext(NodoSoftware*);
        void setPrevious(NodoSoftware*);
        ~NodoSoftware();
};
NodoSoftware::NodoSoftware(Software* software)
{
    this->software=software;
    this->next =nullptr;
    this->previous=nullptr;
}
Software* NodoSoftware::getSoftwareN()
{
    return software;
}
NodoSoftware* NodoSoftware:: getNext()
{
    return next;
}
NodoSoftware* NodoSoftware::getPrevious()
{
    return previous;
}
void NodoSoftware::setSoftware(Software* software)
{
    this->software=software;
}
void NodoSoftware::setNext(NodoSoftware* next)
{
    this->next=next;
}
void NodoSoftware::setPrevious(NodoSoftware* previous)
{
    this->previous=previous;
}
NodoSoftware::~NodoSoftware()
{
    
}