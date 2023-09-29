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

    public:
        Sistema(vector<Usuario*>,vector<Software*>);
        bool login(string,string);
        bool agregarSoftware(string,string);
        bool eliminarSoftware(string,string);
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
                break;
            }
        }
        for (int i = 0; i < u->getLibrary().size(); i++)
        {
            cout<<u->getLibrary()[i];
        }
        
        if(s==nullptr)return false;

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