#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
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
        //Usuario* buscarUser(string,vector<Usuario*>);
    public:
        Sistema(vector<Usuario*>,vector<Software*>);
        bool login(string,string);
        bool agregarSoftware(string,string);
        bool eliminarSoftware(string,string);
        bool log(string);//Crear el metodo log


};

Usuario* buscarUser(string user,vector<Usuario*> users)
{
    Usuario* u;
    for (int i = 0; i < users.size(); i++)
    {
        if(users[i]->getUser().compare(user)==0)
        {
            u = users[i];
            return u;
        }
    }
    return nullptr;
}
Software* buscarSoftware(string software, vector<Software*> softwars)
{
    Software* s;
    for (int i = 0; i < softwars.size(); i++)
    {
        if(softwars[i]->getName().compare(software)==0)
        {
            s = softwars[i];
            return s;
        }
    }
    return nullptr;
}

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
    Usuario* u = buscarUser(user,users);
    Software* s= buscarSoftware(software,softwars);
    if(s==nullptr)return false;

    if(s->getAge()<18)
    {
        cout<<"menor18"<<endl;
        u->getLibrary().push_back(s);
        return true;
    }
    else if(s->getAge()>=18 && u->getAge()>=18)
    {
        cout<<"mayor18"<<endl;
        u->getLibrary().push_back(s);
        cout<<u->getLibrary()[0]<<endl;
        return true;
    }
    else
    {
        cout<<"no puedes por menor de edad"<<endl;
        return false;
    }
}
bool Sistema::eliminarSoftware(string user,string software)
    {
        Usuario* u = buscarUser(user,users);
        Software* s = buscarSoftware(software,softwars);
        if(s==nullptr)return false;

        for (int i = 0; i < u->getLibrary().size(); i++)
        {
            cout<<u->getLibrary()[i];
        }
        
        if(s==nullptr)return false;
        cout<<u->getLibrary().size()<<endl;
        for (int i = 0; i < u->getLibrary().size(); i++)
        {
            if(u->getLibrary()[i]->getName().compare(software)==0)
            {
                cout<<"perro"<<endl;
                
                return true;
            }
            cout<<"loro"<<endl;
            
        }
           
        
        cout<<"Gato"<<endl;
        return false;
    }
bool Sistema::log(string user)
{
    //Administrador* u = (cast)buscarUser(user,users);
    //if(! u. instanceof Admin)return false;
    return true;
}
