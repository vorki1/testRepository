#include <iostream>
#include "Usuario.hpp"
#include "Administrador.hpp"
#include "UsuarioNiño.hpp"
#include "UsuarioNormal.hpp"
using namespace std;

int main()
{
    //Se crea un puntero apuntando a un objeto de tipo Administrador de padre Usuario
    Usuario *admin = new Administrador("vorki1","17042000",23,"javier.saldano@alumnos.ucn.cl","alp");
    //Se crea un puntero apuntando a un objeto de tipo UsuarioNiño de padre Usuario
    Usuario*n1 = new UsuarioNiño("Jaime","1234",12);
    Usuario*n2 = new UsuarioNiño("Marco","abcd",13);
    Usuario*n3 = new UsuarioNiño("Pedro","efgh",12);
    Usuario*n4 = new UsuarioNiño("Javier","5678",11);

    Usuario*user1= new UsuarioNormal("Gemi","2023",24,"gemi123@gmail.com");
    Usuario*user2= new UsuarioNormal("Juan","2123",24,"gemi123@gmail.com");
    Usuario*user3= new UsuarioNormal("Gomez","2223",24,"gemi123@gmail.com");
    Usuario*user4= new UsuarioNormal("Hadott","2323",24,"gemi123@gmail.com");
    Usuario*user5= new UsuarioNormal("Break","2423",24,"gemi123@gmail.com");
    Usuario*user6= new UsuarioNormal("Pinki","2523",24,"gemi123@gmail.com");
    Usuario*user7= new UsuarioNormal("Monita","2623",24,"gemi123@gmail.com");
    Usuario*user8= new UsuarioNormal("Pokefabi","2723",24,"gemi123@gmail.com");
    Usuario*user9= new UsuarioNormal("Baxvun","2823",24,"gemi123@gmail.com");
    Usuario*user10= new UsuarioNormal("Bato","2923",24,"gemi123@gmail.com");

    do
    {
        switch(1)
        {
            case 1:
                
        }
    }
    while(true);
    delete admin;
    return 0;
}