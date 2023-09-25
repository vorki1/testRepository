#pragma once
#include <iostream>
#include "Software.hpp"
using namespace std;

class Ofimatica:public Software
{
    private:
        int createdFiles;
    public:
        Ofimatica(string,string,int,float,int);
        int getCreatedFiles();
        void addFiles(int);
        void deleteFiles(int);
        ~Ofimatica();
};

Ofimatica::Ofimatica(string name,string developer,int age,float price,int createdFiles):Software(name,developer,age,price)
{
    this->createdFiles=createdFiles;
}
int Ofimatica::getCreatedFiles()
{
    return createdFiles;
}
void Ofimatica::addFiles(int files)
{
    this->createdFiles+=files;
}
void Ofimatica::deleteFiles(int files)
{
    this->createdFiles-=files;
    if(this->createdFiles<0)
    {
        this->createdFiles=0;
    }
}
Ofimatica::~Ofimatica()
{
    delete(this);
}