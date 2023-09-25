#pragma once
#include <iostream>
#include "Software.hpp"
using namespace std;

class Seguridad:public Software
{
    private:
    string malware;//Hacer una lista de malware en la clase
    public:
        Seguridad(string,string,int,float,string);
        string getMalware();
        void setMalware(string);
        ~Seguridad();
};

Seguridad::Seguridad(string name,string developer,int age,float price,string malware):Software(name,developer,age,price)
{
    this->malware=malware;
}
string Seguridad::getMalware()
{
    return malware;
}
void Seguridad::setMalware(string malware)
{
    this->malware=malware;
}
Seguridad::~Seguridad()
{
    delete(this);
}