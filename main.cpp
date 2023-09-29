#include <iostream>
#include <vector>
//#include "Usuario.hpp"
#include "Administrador.hpp"
#include "UsuarioKid.hpp"
#include "UsuarioNormal.hpp"
#include "Software.hpp"
#include "Juego.hpp"
#include "Ofimatica.hpp"
#include "Produccion.hpp"
#include "Navegador.hpp"
#include "Seguridad.hpp"
#include "Social.hpp"
//#include "ListaSoftware.hpp"
#include "Sistema.hpp"
using namespace std;




int main()
{
    
    //ListaUsers *usuarios = new ListaUsers();
    vector<Usuario*> usuarios;
     
    //Base de datos:
    //Se crea un puntero apuntando a un objeto de tipo Administrador de padre Usuario
    Usuario *admin = new Administrador("vorki1","17042000",23,"javier.saldano@alumnos.ucn.cl","alp");
    usuarios.push_back(admin);
    //Se crean punteros apuntando a objetos de tipo UsuarioKid de padre Usuario
    Usuario*n1 = new UsuarioKid("jaime","1234",12);
    Usuario*n2 = new UsuarioKid("Marco","abcd",13);
    Usuario*n3 = new UsuarioKid("Pedro","efgh",12);
    Usuario*n4 = new UsuarioKid("Javier","5678",11);
    usuarios.push_back(n1);
    usuarios.push_back(n2);
    usuarios.push_back(n3);
    usuarios.push_back(n4);
    //Se crean punteros apuntando a objetos de tipo UsuarioNormal de padre Usuario
    Usuario*user1= new UsuarioNormal("Gemi","2023",24,"gemi123@gmail.com");
    Usuario*user2= new UsuarioNormal("Juan","2123",21,"paco23@gmail.com");
    Usuario*user3= new UsuarioNormal("Gomez","2223",25,"perla3@gmail.com");
    Usuario*user4= new UsuarioNormal("Hadott","2323",26,"hameon23@gmail.com");
    Usuario*user5= new UsuarioNormal("Break","2423",19,"brikini123@gmail.com");
    Usuario*user6= new UsuarioNormal("Pinki","2523",18,"pakito@gmail.com");
    Usuario*user7= new UsuarioNormal("Monita","2623",25,"mijitak@gmail.com");
    Usuario*user8= new UsuarioNormal("Pokefabi","2723",21,"pakit3@gmail.com");
    Usuario*user9= new UsuarioNormal("Baxvun","2823",22,"boltron3@gmail.com");
    Usuario*user10= new UsuarioNormal("bato","2923",24,"loco23@gmail.com");
    usuarios.push_back(user1);
    usuarios.push_back(user2);
    usuarios.push_back(user3);
    usuarios.push_back(user4);
    usuarios.push_back(user5);
    usuarios.push_back(user6);
    usuarios.push_back(user7);
    usuarios.push_back(user8);
    usuarios.push_back(user9);
    usuarios.push_back(user10);

    //ListaSoftware *softwars = new ListaSoftware();
    vector<Software*>softwars;
    //Se crean punteros apuntando a objetos de tipo Juego de padre Software
    vector<string> categorys = {"acción","aventura","arcade","deportes","estrategia","simulación","terror","musicales","rpg","moba"};
    Software *j1 = new Juego("kratos","Pepito pelado",18,40000,categorys[0]);//
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
    softwars.push_back(j1);
    softwars.push_back(j2);
    softwars.push_back(j3);
    softwars.push_back(j4);
    softwars.push_back(j5);
    softwars.push_back(j6);
    softwars.push_back(j7);
    softwars.push_back(j8);
    softwars.push_back(j9);
    softwars.push_back(j10);
    softwars.push_back(j11);
    softwars.push_back(j12);
    softwars.push_back(j13);
    softwars.push_back(j14);
    softwars.push_back(j15);
    softwars.push_back(j16);
    softwars.push_back(j17);
    softwars.push_back(j18);
    softwars.push_back(j19);
    softwars.push_back(j20);
    //Se crean punteros apuntando a objetos de tipo Ofimatica de padre Software
    Software *o1 = new Ofimatica("Excel","Charlye Microsoft",8,2000,4);
    Software *o2 = new Ofimatica("Power Point","Maite Microsoft",8,3000,6);
    Software *o3 = new Ofimatica("Word","Paula Microsoft",8,2000,3);
    Software *o4 = new Ofimatica("Adobe Acrobat Reader","Pedro Window",4,7000,7);
    Software *o5 = new Ofimatica("Publisher","Valentina Google",4,1000,2);
    softwars.push_back(o1);
    softwars.push_back(o2);
    softwars.push_back(o3);
    softwars.push_back(o4);
    softwars.push_back(o5);
    //Se crean punteros apuntando a objetos de tipo Producción de padre Software
    Software *p1 = new Produccion("GarageBand","Fabi MacOS",10,3000,"musica");
    Software *p2 = new Produccion("Photoshop","Marcus Marcus",10,5000,"imagenes");
    Software *p3 = new Produccion("ShotCut","Piter Pankeiks",10,4000,"video");
    Software *p4 = new Produccion("Window movie maker","Marilin Madison",10,3500,"video");
    softwars.push_back(p1);
    softwars.push_back(p2);
    softwars.push_back(p3);
    softwars.push_back(p4);
    //Se crean punteros apuntando a objetos de tipo Navegador de padre Software
    vector<string> ln1 = {"gogle.com","gato.com","perro.com","chile.cl","junaeb.cl","paris.com","hites.com","hunterX.com","perla.com","arigato.com"};
    vector<string> ln2 = {"terry.com","asilo.com","marco.com","seiya.cl","gon.cl","lapolar.com","gogle.com","azucar.com","dodoria.com","tadakimas.com"};
    Software *na1 = new Navegador("Google Chrome","Sergey Brin",5,2300,ln1);
    Software *na2 = new Navegador("Opera","Jon S",5,1200,ln2);
    softwars.push_back(na1);
    softwars.push_back(na2);
    //Se crean punteros apuntando a objetos de tipo Seguridad de padre Software
    Software *s1 = new Seguridad("Ransomkick","Rash",0,2000,"Ransomware");
    Software *s2 = new Seguridad("Spykick","Mantra",0,3000,"Spyware");
    Software *s3 = new Seguridad("Botnetskick","Balash",0,5000,"Botnets");
    Software *s4 = new Seguridad("Rootkick","Warsap",0,7000,"Rootkits");
    Software *s5 = new Seguridad("Gusankick","Altraz",0,30000,"Gusanos");
    Software *s6 = new Seguridad("Troyankick","Pertan",0,40000,"Troyanos");
    softwars.push_back(s1);
    softwars.push_back(s2);
    softwars.push_back(s3);
    softwars.push_back(s4);
    softwars.push_back(s5);
    softwars.push_back(s6);
    //Se crean punteros apuntando a objetos de tipo Social de padre Software
    Software *so1 = new Social("Instacram","Tom Morelo",15,0);
    Software *so2 = new Social("Feibu","Toni Hocks",15,0);
    softwars.push_back(so1);
    softwars.push_back(so2);

    Sistema* sistem = new Sistema(usuarios,softwars);
    
    string user,pass;
    cout<<"Ingrese su usuario: ";cin>>user;
    cout<<"Ingrese la contraseña: ";cin>>pass;
    bool loginC =sistem->login(user,pass);
    int opcion;
    string software;
    bool banderaExt = true;
    do
    {
        if(loginC)
        {
            cout<<"Acceso correcto"<<endl;
            do
            {
                cout<<"Ingrese una opción: "<<endl;
                cout<<"1) Desea agregar un Software?"<<endl;
                cout<<"2) Desea eliminar un Software?"<<endl;
                cout<<"0 para salir: ";cin>>opcion;
                switch(opcion)
                {
                    case 1:
                        cout<<"Ingrese el nombre del software: ";cin>>software;
                        if(sistem->agregarSoftware(user,software))
                        {
                            cout<<"Se ha añadido correctamente el Software!"<<endl;
                        }
                        else
                        {
                            cout<<"No se ha encontrado la edad requerida o no es mayor de edad"<<endl;
                        }
                        break;

                    case 2:
                        cout<<"Ingrese el nombre del software: ";cin>>software;
                        if(sistem->eliminarSoftware(user,software))
                        {
                            cout<<"Se ha eliminado correctamente el Software!"<<endl;
                        }
                        else
                        {
                            cout<<"No se ha encontrado el Software"<<endl;
                        }
                        break;

                    case 3:
                        //Revisar el estado del software (log)
                        break;

                    case 0:
                        
                        cout<<"Ha salido del programa"<<endl;
                        break;
                    default:
                        cout<<"Ingrese una opción valida"<<endl;
                        break;
                }
            }
            while(opcion!=0);
        }
        else cout<<"Usuario incorrecto"<<endl;
        
        cout<<"¿Quiere salir del sistema?:(0 para salir) "<<endl;
        cout<<"Cualquier otro numero para seguir: ";cin>>opcion;
        if(opcion ==0)banderaExt=false;
        else
        {
            cout<<"Ingrese su usuario: ";cin>>user;
            cout<<"Ingrese la contraseña: ";cin>>pass;
        }

    } while (banderaExt);
    
    
    return 0;
}