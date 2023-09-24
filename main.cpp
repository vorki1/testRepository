#include <iostream>
#include "Usuario.hpp"
#include "Administrador.hpp"
#include "UsuarioNiño.hpp"
#include "UsuarioNormal.hpp"
#include "Software.hpp"
#include "Juego.hpp"
#include "Ofimatica.hpp"
#include "Produccion.hpp"
#include "Navegador.hpp"
using namespace std;




int main()
{
    //Base de datos:
    //Se crea un puntero apuntando a un objeto de tipo Administrador de padre Usuario
    Usuario *admin = new Administrador("vorki1","17042000",23,"javier.saldano@alumnos.ucn.cl","alp");
    //Se crean punteros apuntando a objetos de tipo UsuarioNiño de padre Usuario
    Usuario*n1 = new UsuarioNiño("Jaime","1234",12);
    Usuario*n2 = new UsuarioNiño("Marco","abcd",13);
    Usuario*n3 = new UsuarioNiño("Pedro","efgh",12);
    Usuario*n4 = new UsuarioNiño("Javier","5678",11);
    //Se crean punteros apuntando a objetos de tipo UsuarioNormal de padre Usuario
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
    //Se crean punteros apuntando a objetos de tipo Juego de padre Software
    string categorys[15]={"acción","aventura","arcade","deportes","estrategia","simulación","terror","musicales","rpg","moba"};
    int cantCategory = 10;
    Software *j1 = new Juego("God of war","Pepito pelado",18,40000,categorys[0]);//
    Software *j2 = new Juego("Just dance 3","Maria antonieta",7,2000,categorys[7]);//
    Software *j3 = new Juego("The legend of zelda ocarina of time","Wili wili",7,1000,categorys[1]);//
    Software *j4 = new Juego("League of legends","Miyamoto",7,23000,categorys[9]);//
    Software *j5 = new Juego("Final fantasy","XxKiritoxX",13,32000,categorys[8]);//
    Software *j6 = new Juego("Diablo 4","Don barriga",7,4000,categorys[8]);//
    Software *j7 = new Juego("Mario party 3","Kayles",7,5000,categorys[4]);//
    Software *j8 = new Juego("Just dance","Mona Rojas",5,12000,categorys[7]);//
    Software *j9 = new Juego("Wii sport","Leonidas de esparta",7,7000,categorys[3]);//
    Software *j10 = new Juego("Yandere simulator","Terminator secret",14,7000,categorys[5]);//
    Software *j11 = new Juego("Fifa street","Amporeo Del Lago",8,2000,categorys[3]);//
    Software *j12 = new Juego("Teken 5","Comil de Samar",10,1000,categorys[2]);//
    Software *j13 = new Juego("Street figthers","Seira di Son",8,2000,categorys[2]);//
    Software *j14 = new Juego("Tetris","Dartañan",18,12000,categorys[4]);//
    Software *j15 = new Juego("Super smash bros brawl","Sipral Tiniebla",9,20000,categorys[0]);//
    Software *j16 = new Juego("Resident evil 6","Uzumaki san",18,23000,categorys[6]);//
    Software *j17 = new Juego("The last of us","Ang instapick",18,21000,categorys[6]);//
    Software *j18 = new Juego("Brawl stars","Quimero",7,13000,categorys[9]);//
    Software *j19 = new Juego("Shadow of the colosus","King of the kings",18,21000,categorys[1]);//
    Software *j20 = new Juego("Animal Crosing","Pipa Street",8,11000,categorys[5]);//
    //Se crean punteros apuntando a objetos de tipo Ofimatica de padre Software
    Software *o1 = new Ofimatica("Excel","Charlye Microsoft",8,2000,4);
    Software *o2 = new Ofimatica("Power Point","Maite Microsoft",8,3000,6);
    Software *o3 = new Ofimatica("Word","Paula Microsoft",8,2000,3);
    Software *o4 = new Ofimatica("Adobe Acrobat Reader","Pedro Window",4,7000,7);
    Software *o5 = new Ofimatica("Publisher","Valentina Google",4,1000,2);
    //Se crean punteros apuntando a objetos de tipo Producción de padre Software
    Software *p1 = new Produccion("GarageBand","Fabi MacOS",10,3000,"musica");
    Software *p2 = new Produccion("Photoshop","Marcus Marcus",10,5000,"imagenes");
    Software *p3 = new Produccion("ShotCut","Piter Pankeiks",10,4000,"video");
    Software *p4 = new Produccion("Window movie maker","Marilin Madison",10,3500,"video");
    //Se crean punteros apuntando a objetos de tipo Navegador de padre Software
    string ln1[15];
    string ln2[15];
    Software *n1 = new Navegador("Google Chrome","Sergey Brin",5,0,ln1);
    Software *n2 = new Navegador("Opera","Jon S",5,0,ln2);

    int opcion;
    cout<<"Ingrese una opcion: ";
    cout<<"opcion '0': SALIR"<<endl;
    cin>>opcion;
    do
    {
        switch(opcion)
        {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 0:
                cout<<"Ha salido del programa";
                
        }
    }
    while(opcion!=0);
    delete admin;
    return 0;
}