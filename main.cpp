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
#include "Seguridad.hpp"
#include "Social.hpp"
#include "ListaSoftware.hpp"
using namespace std;




int main()
{
    ListaUsers *usuarios = new ListaUsers();
    //Base de datos:
    //Se crea un puntero apuntando a un objeto de tipo Administrador de padre Usuario
    Usuario *admin = new Administrador("vorki1","17042000",23,"javier.saldano@alumnos.ucn.cl","alp");
    usuarios->add(admin);
    //Se crean punteros apuntando a objetos de tipo UsuarioNiño de padre Usuario
    Usuario*n1 = new UsuarioNiño("Jaime","1234",12);
    Usuario*n2 = new UsuarioNiño("Marco","abcd",13);
    Usuario*n3 = new UsuarioNiño("Pedro","efgh",12);
    Usuario*n4 = new UsuarioNiño("Javier","5678",11);
    usuarios->add(n1);
    usuarios->add(n2);
    usuarios->add(n3);
    usuarios->add(n4);
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
    usuarios->add(user1);
    usuarios->add(user2);
    usuarios->add(user3);
    usuarios->add(user4);
    usuarios->add(user5);
    usuarios->add(user6);
    usuarios->add(user7);
    usuarios->add(user8);
    usuarios->add(user9);
    usuarios->add(user10);

    ListaSoftware *softwars = new ListaSoftware();
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
    softwars->add(j1);
    softwars->add(j2);
    softwars->add(j3);
    softwars->add(j4);
    softwars->add(j5);
    softwars->add(j6);
    softwars->add(j7);
    softwars->add(j8);
    softwars->add(j9);
    softwars->add(j10);
    softwars->add(j11);
    softwars->add(j12);
    softwars->add(j13);
    softwars->add(j14);
    softwars->add(j15);
    softwars->add(j16);
    softwars->add(j17);
    softwars->add(j18);
    softwars->add(j19);
    softwars->add(j20);
    //Se crean punteros apuntando a objetos de tipo Ofimatica de padre Software
    Software *o1 = new Ofimatica("Excel","Charlye Microsoft",8,2000,4);
    Software *o2 = new Ofimatica("Power Point","Maite Microsoft",8,3000,6);
    Software *o3 = new Ofimatica("Word","Paula Microsoft",8,2000,3);
    Software *o4 = new Ofimatica("Adobe Acrobat Reader","Pedro Window",4,7000,7);
    Software *o5 = new Ofimatica("Publisher","Valentina Google",4,1000,2);
    softwars->add(o1);
    softwars->add(o2);
    softwars->add(o3);
    softwars->add(o4);
    softwars->add(o5);
    //Se crean punteros apuntando a objetos de tipo Producción de padre Software
    Software *p1 = new Produccion("GarageBand","Fabi MacOS",10,3000,"musica");
    Software *p2 = new Produccion("Photoshop","Marcus Marcus",10,5000,"imagenes");
    Software *p3 = new Produccion("ShotCut","Piter Pankeiks",10,4000,"video");
    Software *p4 = new Produccion("Window movie maker","Marilin Madison",10,3500,"video");
    softwars->add(p1);
    softwars->add(p2);
    softwars->add(p3);
    softwars->add(p4);
    //Se crean punteros apuntando a objetos de tipo Navegador de padre Software
    string ln1[15];//Crear listas
    string ln2[15];
    Software *na1 = new Navegador("Google Chrome","Sergey Brin",5,2300,"");
    Software *na2 = new Navegador("Opera","Jon S",5,1200,"");
    softwars->add(na1);
    softwars->add(na2);
    //Se crean punteros apuntando a objetos de tipo Seguridad de padre Software
    Software *s1 = new Seguridad("Ransomkick","Rash",0,2000,"Ransomware");
    Software *s2 = new Seguridad("Spykick","Mantra",0,3000,"Spyware");
    Software *s3 = new Seguridad("Botnetskick","Balash",0,5000,"Botnets");
    Software *s4 = new Seguridad("Rootkick","Warsap",0,7000,"Rootkits");
    Software *s5 = new Seguridad("Gusankick","Altraz",0,30000,"Gusanos");
    Software *s6 = new Seguridad("Troyankick","Pertan",0,40000,"Troyanos");
    softwars->add(s1);
    softwars->add(s2);
    softwars->add(s3);
    softwars->add(s4);
    softwars->add(s5);
    softwars->add(s6);
    //Se crean punteros apuntando a objetos de tipo Social de padre Software
    Software *so1 = new Social("Instacram","Tom Morelo",15,0);
    Software *so2 = new Social("Feibu","Toni Hocks",15,0);
    softwars->add(so1);
    softwars->add(so2);


    
    string user,pass;
    cout<<"Ingrese el usuario: ";cin>>user;
    cout<<"Ingrese la contraseña: ";cin>>pass;
    //login(user,pass);
    //if(login(user,pass))
    //{

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
    //break;
    //else{
    //    cout<<"Usuario incorrecto";
    //}

    return 0;
    //}
    
}