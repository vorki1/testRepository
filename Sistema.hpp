#pragma once
#include <iostream>
#include <vector>
#include "Usuario.hpp"
#include "Software.hpp"
//#include "ListaSoftware.hpp"
//#include "ListaUsers.hpp"
using namespace std;

class Sistema
{
    private:
        vector<Usuario*> users;
        vector<Software*> softwars;

    public:
        Sistema(vector<Usuario*>,vector<Software*>);
        bool login(string,string);
        bool agregarSoftware(string,string);
        bool log(string);//Crear el metodo log


};

Sistema::Sistema(vector<Usuario*> users,vector<Software*>softwars)
{
    this->users=users;
    this->softwars=softwars;
}
bool Sistema::login(string user,string pass)
{
    for (int i = 0; i < users.size(); i++)
    {
        if(users[i]->getUser().compare(user) == 0 && users[i]->getPass().compare(pass) == 0)
        {
            return true;
        }
        
    }
    return false;
}
bool Sistema::agregarSoftware(string user,string software)
{
    Usuario* u;
    for (int i = 0; i < users.size(); i++)
    {
        if(users[i]->getUser().compare(user)==0)
        {
            u = users[i];
            break;
        }
    }

    Software* s;
    for (int i = 0; i < softwars.size(); i++)
    {
        if(softwars[i]->getName().compare(software)==0)
        {
            s = softwars[i];
            cout<<softwars[i]->getName()<<endl;
            break;
        }
    }
    cout<<"Hola"<<endl;
    if(s==nullptr)return false;
    if(s->getAge()<18)
    {
        u->getLibrary().push_back(s);
        return true;
    }
    else if(s->getAge()>=18 && u->getAge()>=18)
    {
        u->getLibrary().push_back(s);
        return true;
    }
    else
    {
        return false;
    }
    
}