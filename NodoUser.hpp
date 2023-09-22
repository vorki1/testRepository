#pragma once
#include <iostream>
#include "Usuario.hpp"
using namespace std;

class NodoUser
{
    private:
        Usuario* user;
        NodoUser *next,*previous;
    public:
        NodoUser(Usuario*);
        Usuario* getUserN();
        NodoUser* getNext();
        NodoUser* getPrevious();
        void setUser(Usuario*);
        void setNext(NodoUser*);
        void setPrevious(NodoUser*);
        ~NodoUser();
};
NodoUser::NodoUser(Usuario* user)
{
    this->user=user;
    this->next =nullptr;
    this->previous=nullptr;
}
Usuario* NodoUser::getUserN()
{
    return user;
}
NodoUser* NodoUser:: getNext()
{
    return next;
}
NodoUser* NodoUser::getPrevious()
{
    return previous;
}
void NodoUser::setUser(Usuario* user)
{
    this->user=user;
}
void NodoUser::setNext(NodoUser* next)
{
    this->next=next;
}
void NodoUser::setPrevious(NodoUser* previous)
{
    this->previous=previous;
}
