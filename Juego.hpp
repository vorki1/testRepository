#pragma once
#include <iostream>
#include "Software.hpp"
using namespace std;

class Juego:public Software
{
    private:
        string category;//hacer una lista de categorias en la clase
    public:
        Juego(string,string,int,float,string);
        string getCategory();
        void setCategory(string);
        ~Juego();
};

Juego::Juego(string name,string developer,int age,float price,string category):Software(name,developer,age,price)
{
    this->category=category;
}
string Juego::getCategory()
{
    return category;
}
void Juego::setCategory(string category)
{
    this->category=category;
}
Juego::~Juego()
{
    delete(this);
}