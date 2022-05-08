#include <iostream>

using namespace std;
main() 	{
	
	float altura;
	float peso;
	float imc;
	
	cout<<"Digite sua altura :";
	cin>>altura;
	cout<<"Digite seu peso :";
	cin>>peso;
	imc = peso/(altura*altura);
	cout<<"imc = "<<imc<<endl;
}
