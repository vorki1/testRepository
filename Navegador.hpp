#pragma once
#include <iostream>
#include "Software.hpp"
using namespace std;

class Navegador:public Software
{
    private:
    string browsingHistory;//Hacer una lista de paginas
    public:
        Navegador(string,string,int,float,string);
        string getBrowsingHistory();
        void setBrowsingHistory(string);
        ~Navegador();
};

Navegador::Navegador(string name,string developer,int age,float price,string browsingHistory):Software(name,developer,age,price)
{
    this->browsingHistory=browsingHistory;
}
string Navegador::getBrowsingHistory()
{
    return browsingHistory;
}
void Navegador::setBrowsingHistory(string browsingHistory)
{
    this->browsingHistory=browsingHistory;
}
Navegador::~Navegador()
{
    
}