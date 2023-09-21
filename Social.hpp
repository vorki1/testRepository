#pragma once
#include <iostream>
#include "Software.hpp"
#include "ListaUsers.hpp"
using namespace std;

class Social:public Software
{
    private:
    int friends;
    ListaUsers* users;//añadir la lista de Users
    public:
        Social(string,string,int,float);
        int getFriends();
        ListaUsers* getUsers();
        bool deleteFriend(string);
        bool addFriend(string);
        
        ~Social();
};

Social::Social(string name,string developer,int age,float price):Software(name,developer,age,price)
{
    friends=0;
}
int Social::getFriends()
{
    return friends;
}
ListaUsers* Social::getUsers()
{
    return users;
}
bool Social::addFriend(string name)
{

}
bool Social::deleteFriend(string name)
{
    
}
Social::~Social()
{
    
}