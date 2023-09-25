#pragma once
#include <iostream>
#include "Usuario.hpp"
using namespace std;

class UsuarioKid: public Usuario
{
    public:
        UsuarioKid(string,string,int);
        ~UsuarioKid();
};

UsuarioKid::UsuarioKid(string user,string pass,int age):Usuario(user,pass,age)
{

}

UsuarioKid::~UsuarioKid()
{
    delete(this);
}