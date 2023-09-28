#pragma once
#include <iostream>
#include <vector>
#include "Usuario.hpp"//Dependencia circular
using namespace std;

class Software
{
    private:
        string name,developer;
        int age;
        float price;
        vector<Usuario*> users;
    public:
        Software(string,string,int,float);
        string getName();
        string getDeveloper();
        int getAge();
        vector<Usuario*> getusers();
        float getPrice();
        void setName(string);
        void setDeveloper(string);
        void setAge(int);
        void setPrice(float);
        ~Software();
};

Software::Software(string name,string developer,int age,float price)
{
    this->name=name;
    this->developer=developer;
    this->age=age;
    this->price=price;
}

string Software::getName()
{
    return name;
}
string Software::getDeveloper()
{
    return developer;
}
int Software::getAge()
{
    return age;
}

vector<Usuario*> Software::getusers()
{
    return users;
}
float Software::getPrice()
{
    return price;
}
void Software::setName(string name)
{
    this->name=name;
}
void Software::setDeveloper(string developer)
{
    this->developer=developer;
}
void Software::setAge(int age)
{
    this->age=age;
}
void Software::setPrice(float price)
{
    this->price=price;
}
Software::~Software()
{
    delete(this);
}