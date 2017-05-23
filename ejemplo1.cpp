#include <iostream>
#include <string>
#include <vector>
using namespace std;
//definicion de clase
struct TAlumno //definicion de estructura
{
    string nombre;
    string apellido;
    int edad;
    string id;

     void hablar()
    {
         cout << "Mi nombre es " << nombre<<" " << apellido<< endl;
    }
};


int main()
{
    //declarar e inicializar
    int x =0;
    int y; // declarar
    y=10; //inicializar
    //declarar e inicializar
    TAlumno luan = {"Luan","Danino",19,"9999999"};
    TAlumno jaimito; //declarar
    
    //inicializar
    jaimito.nombre="Jaimito";
    jaimito.apellido ="Quevedo";
    jaimito.edad = 70;
    jaimito.id = "1";
    
    luan.hablar();
   jaimito.hablar(); 
    
    
    return 0;
}