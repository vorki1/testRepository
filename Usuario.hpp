#pragma once
#include <iostream>
#include <vector>
#include "Software.hpp"
using namespace std;

class Usuario
{
    private:
     string user,pass;
     int age;
     vector<Software*> library;
     int money;

    public:
        Usuario(string,string,int);
        string getUser();
        string getPass();
        int getAge();
        vector<Software*> getLibrary();
        int getDinero();
        void setUser(string);
        void setPass(string);
        void setAge(int);
        virtual ~Usuario();
};

Usuario::Usuario(string user,string pass,int age)
{
    this->user=user;
    this->pass=pass;
    this->age=age;
    this->library;
    this->money = 100000;
}

string Usuario::getUser()
{
    return user;
}
string Usuario:: getPass()
{
    return pass;
}
int Usuario::getAge()
{
    return age;
}
vector<Software*> Usuario::getLibrary()
{
    return library;
}
int Usuario::getDinero()
{
    return money;
}
void Usuario::setUser(string user)
{
    this->user=user;
}
void Usuario::setPass(string pass)
{
    this->pass=pass;
}
void Usuario::setAge(int age)
{
    this->age=age;
}
Usuario::~Usuario()
{
    delete(this);
}