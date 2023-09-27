#pragma once
#include <iostream>
#include <vector>
#include "Software.hpp"
using namespace std;


class Navegador:public Software
{
    private:
    vector<string> browsingHistory;//Hacer una lista de paginas
    public:
        Navegador(string,string,int,float,vector<string>);
        vector<string> getBrowsingHistory();
        ~Navegador();
};

Navegador::Navegador(string name,string developer,int age,float price,vector<string> browsingHistory):Software(name,developer,age,price)
{
    this->browsingHistory=browsingHistory;
}
vector<string> Navegador::getBrowsingHistory()
{
    return browsingHistory;
}
Navegador::~Navegador()
{
    delete(this);
}