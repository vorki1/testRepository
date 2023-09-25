#pragma once
#include <iostream>
#include "Usuario.hpp"
using namespace std;

class Administrador: public Usuario
{
    private:
        string email,log;
    public:
    Administrador(string,string,int,string,string);
    string getEmail(); 
    string getLog();
    void setEmail(string);
    void setLog(string);
    ~Administrador();
};

Administrador::Administrador(string user,string pass,int age,string email,string log):Usuario(user,pass,age)
{
    this->email=email;
    this->log=log;
};

string Administrador::getEmail()
{
    return email;
}
string Administrador::getLog()
{
    return log;
}
void Administrador::setEmail(string email)
{
    this->email=email;
}
void Administrador::setLog(string log)
{
    this->log=log;
}
Administrador::~Administrador()
{
    delete(this);
}