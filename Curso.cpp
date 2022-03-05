#include "Estudiante.cpp"
#include <iostream>
using namespace std;

class Curso : Estudiante {

	// atributos
	public : string curso;
			  int nota1,nota2,nota3,nota4;
			  double promedio;
				
	// 
	public : Curso(string nombres,string apellidos,int codigo,string c,int n1,int n2,int n3,int n4,double p) : Estudiante(nombres,apellidos,codigo){
					curso = c;
					nota1 = n1;
					nota2 = n2;
					nota3 = n3;
					nota4 = n4;
					promedio = p;
					}
									
	
	void setCodigo(int codigo){cod = codigo;}
	void setNombres(string nombres){nom = nombres;}
	void setApellidos(string apellidos){ape = apellidos;}
	void setCurso(string c){curso = c;}
	void setNota1(int n1){nota1 = n1;}
	void setNota2(int n2){nota2 = n2;}
	void setNota3(int n3){nota3 = n3;}
	void setNota4(int n4){nota4 = n4;}
	void setPromedio (double p){promedio = p;}
	
	int getCodigo(){return cod;}
	string getNombres(){return nom;}
	string getApellidos(){return ape;}
	string getCurso(){return curso;}
	int getNota1(){return nota1;}
	int getNota2(){return nota2;}
	int getNota3(){return nota3;}
	int getNota4(){return nota4;}
	int getPromedio(){return promedio;}
	
	void mostrar(){
	cout<<"\n_______________\n"<<endl;
	cout<<"Codigo:"<<cod<<endl;
	cout<<"Nombres:"<<nom<<endl;
	cout<<"Apellidos:"<<ape<<endl;
	cout<<"Curso:"<<curso<<endl;
	cout<<"Nota 1:"<<nota1<<endl;		
	cout<<"Nota 2:"<<nota2<<endl;
	cout<<"Nota 3:"<<nota3<<endl;
	cout<<"Nota 4:"<<nota4<<endl;
	cout<<"Promedio:"<<promedio<<endl;
	}
	
};

