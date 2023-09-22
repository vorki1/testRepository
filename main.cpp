#include <iostream>
#include "Usuario.hpp"
#include "Administrador.hpp"
using namespace std;

int main()
{
    cout<<"Hola mundo"<<endl;

    

    Usuario *user = new Administrador("Pedro","olmos123",12,"jaja@gmail.com","12-12");
    Administrador *admin = static_cast<Administrador*>(user); 
    

    cout<<admin->getLog()<<endl;
    cout<<endl;
    
    delete admin;
    return 0;
}