#pragma once
#include <iostream>
//#include <ListaSoftware.hpp>
using namespace std;

class Usuario
{
    private:
     string user,pass;
     int age;
     //ListaSoftware library;

    protected:
        Usuario(string,string,int);
        string getUser();
        string getPass();
        int getAge();
        //ListaSoftware getLibrary();
        void setUser(string);
        void setPass(string);
        void setAge(int);
        ~Usuario();
};

Usuario::Usuario(string user,string pass,int age)
{
    this->user=user;
    this->pass=pass;
    this->age=age;
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
//ListaSoftware Usuario::getLibrary()
//{
    //return library;
//}
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
    
}