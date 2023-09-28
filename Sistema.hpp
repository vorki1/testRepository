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