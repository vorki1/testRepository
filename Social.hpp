#pragma once
#include <iostream>
#include <vector>
#include "Software.hpp"
#include "Usuario.hpp"
using namespace std;

class Social:public Software
{
    private:
    int friends;
    vector<Usuario*> users;//añadir la lista de Users
    public:
        Social(string,string,int,float);
        int getFriends();
        vector<Usuario*> getUsers();
        bool deleteFriend(string);
        bool addFriend(string);
        
        ~Social();
};

Social::Social(string name,string developer,int age,float price):Software(name,developer,age,price)
{
    friends=0;
    users;
}
int Social::getFriends()
{
    return friends;
}
vector<Usuario*> Social::getUsers()
{
    return users;
}
bool Social::addFriend(string name)
{
    return true;
}
bool Social::deleteFriend(string name)
{
    return true;
}
Social::~Social()
{
    delete(this);
}