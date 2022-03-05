#include "Curso.cpp"
#include <iostream>
using namespace std;

int main(){

	string nombres,apellidos,direccion,c;
	int cod,n1,n2,n3,n4,num,i;
	double p;
	
	cout<<"Ingrese la cantidad de estudiantes a evaluar: ";
	cin>>num;
	
	for(int i=1; i<=num; i++){
	
	cout<<"\nIngrese Codigo:";
	cin>>cod;
	cout<<"Ingrese Nombres:";
	cin>>nombres;
	cout<<"Ingrese Apellidos:";
	cin>>apellidos;
	cout<<"Ingrese Curso:";
	cin>>c;
	cout<<"Ingrese Nota 1:";
	cin>>n1;
	cout<<"Ingrese Nota 2:";
	cin>>n2;
	cout<<"Ingrese Nota 3:";
	cin>>n3;
	cout<<"Ingrese Nota 4:";
	cin>>n4;
	
	p=(n1+n2+n3+n4)/4;
	
	Curso obj = Curso(nombres,apellidos,cod,c,n1,n2,n3,n4,p);
	obj.mostrar();
	
	if (p>=60){
		cout<<"El estudiante aprobo la materia\n";
		cout<<"_______________\n"<<endl;
	}else{
		cout<<"El estudiante no aprobo la materia\n";
		cout<<"_______________\n"<<endl;
	} 
	}
}

