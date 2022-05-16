//Asignar valores a dos variables enteras, intercambie estos valores almacenados 
//usando solo punteros a enteros.
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int main(){
	int num1,num2,aux;
	int *ptr_num1,*ptr_num2;
	cout<<"ingresa valor 1: "; cin>>num1;
	cout<<"ingresa valor 2: "; cin>>num2;
	ptr_num1=&num1;
	ptr_num2=&num2;
	aux=*ptr_num1;
	*ptr_num1=*ptr_num2;
	*ptr_num2=aux;
	cout<<"el nuevo valor 1 es: "<<*ptr_num1<<endl;
	cout<<"el nuevo valor 2 es: "<<*ptr_num2<<endl;
	system("PAUSE");
	return 0;
}