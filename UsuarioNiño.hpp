#pragma once
#include <iostream>
#include "Usuario.hpp"
using namespace std;

class UsuarioNiño: public Usuario
{
    public:
        UsuarioNiño(string,string,int);
        ~UsuarioNiño();
};

UsuarioNiño::UsuarioNiño(string user,string pass,int age):Usuario(user,pass,age)
{

}
UsuarioNiño::~UsuarioNiño()
{

}