#pragma once
#include <iostream>
#include "Software.hpp"
using namespace std;

class Produccion:public Software
{
    private:
    string kind;
    public:
        Produccion(string,string,int,float,string);
        string getKind();
        void setKind(string);
        ~Produccion();
};

Produccion::Produccion(string name,string developer,int age,float price,string kind):Software(name,developer,age,price)
{
    this->kind=kind;
}
string Produccion::getKind()
{
    return kind;
}
void Produccion::setKind(string kind)
{
    this->kind=kind;
}
Produccion::~Produccion()
{
    delete(this);
}