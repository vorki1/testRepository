#pragma once
#include <iostream>
#include "ListaSoftware.hpp"
#include "ListaUsers.hpp"
using namespace std;

class Sistema
{
    private:
        ListaUsers* users;
        ListaSoftware* softwars;

    public:
        Sistema(ListaUsers*,ListaSoftware*);
        bool login(string,string);
        bool log(string);//Crear el metodo log


};

Sistema::Sistema(ListaUsers* users,ListaSoftware *softwars)
{
    this->users=users;
    this->softwars=softwars;
}
bool Sistema::login(string user,string pass)
{
    NodoUser* current = users->getFirst();
    while(current!=nullptr)
    {
        if(current->getUserN()->getUser().compare(user) && current->getUserN()->getPass().compare(pass))
        {
            return true;
        }
    }
    return false;
}