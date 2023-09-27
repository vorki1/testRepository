#pragma once
#include <iostream>
#include <vector>
#include "Software.hpp"
#include "Usuario.hpp"
using namespace std;

class Social:public Software
{
    private:
        vector<Usuario*> friends;//añadir la lista de friends
    public:
        Social(string,string,int,float);
        vector<Usuario*> getfriends();
        bool deleteFriend(Usuario*);
        bool addFriend(Usuario*);
        
        ~Social();
};

Social::Social(string name,string developer,int age,float price):Software(name,developer,age,price)
{
    
}

vector<Usuario*> Social::getfriends()
{
    return friends;
}
bool Social::addFriend(Usuario* guy)
{
    friends.push_back(guy);
    return true;
}
bool Social::deleteFriend(Usuario* guy)
{
    
    return true;
}
Social::~Social()
{
    delete(this);
}