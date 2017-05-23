#include <iostream>
#include <string>
#include <vector>
using namespace std;



class CAlumno
{
   private:
    string nombre;
    string apellido;
    int edad;
    string id;
  
  public:
  //constructor
  CAlumno(string pnombre, string papellido, int pedad, string pid)
  {
      nombre=pnombre;
      apellido=papellido;
      edad=pedad;
      id=pid;
  }
  
  //constructor sin parametros
  CAlumno()
  {
      nombre = "";
      apellido = "";
      edad = 0;
      id = "";
  }
  
  //destructor
  
  ~CAlumno()
  {
      edad = 0;
  }
  //metodo de acceso
    string getNombre()    {return nombre;}
    string getApellido()    {return apellido;}
    int getEdad() {return edad;}
    string getId() {return id;}
    
    //metodos de modificacion
    void setNombre(string value) {nombre = value;}
    void setApellido(string value) {apellido = value;}
    void setEdad (int value) { edad = value;}
    void setId (string value) {id = value;}
    
};

int main()
{
    CAlumno pepito {"Pepe","Quevedo",65,"2"};
    /*
    pepito.setNombre("Pepe");
    pepito.setApellido("Quevedo");
    pepito.setEdad(65);
    pepito.setId("2");
    */
    cout << pepito.getNombre() << " " << pepito.getApellido() << endl;
    
    return 0;
}