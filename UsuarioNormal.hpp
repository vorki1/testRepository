#pragma once
#include <iostream>
#include "Usuario.hpp"
using namespace std;

class UsuarioNormal: public Usuario
{
    private:
        string email;
    public:
        UsuarioNormal(string,string,int,string);
        string getEmail();
        void setEmail(string);
        ~UsuarioNormal();
};

UsuarioNormal::UsuarioNormal(string user,string pass,int age,string email):Usuario(user,pass,age)
{
    this->email=email;
}

string UsuarioNormal::getEmail()
{
    return email;
}
void UsuarioNormal::setEmail(string email)
{
    this->email=email;
}
UsuarioNormal::~UsuarioNormal()
{
    
}