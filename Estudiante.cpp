#include <iostream>
using namespace std;

class Estudiante{
	// atributos
	public : string nom,ape;
				int cod;
				
	// 
	public : Estudiante(string nombres,string apellidos,int codigo){
					nom = nombres;
					ape = apellidos;
					cod = codigo;
			}

	void mostrar();
	void agregar();
	void modificar();
	void eliminar();
	
	
};
