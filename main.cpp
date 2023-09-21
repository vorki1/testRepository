#include <iostream>
#include "Usuario.hpp"
#include "Administrador.hpp"
using namespace std;

int main()
{
    cout<<"Hola mundo"<<endl;

    Usuario *us = new Usuario("Javier","Saldaño123",23);

    Usuario *user = new Administrador("Pedro","olmos123",12,"jaja@gmail.com","12-12");
    Administrador *admin = static_cast<Administrador*>(user); 
    cout<<us->getUser()<<endl;

    cout<<admin->getLog()<<endl;
    cout<<endl;
    return 0;
}