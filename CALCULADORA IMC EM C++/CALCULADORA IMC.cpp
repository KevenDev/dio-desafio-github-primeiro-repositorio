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
	cout<<"Indice de Massa Corporal = "<<imc<<endl;
	
	if(imc<18.5) {
	
	cout<<"Obs:abaixo do peso";
}

	if (imc>=18.5 && imc<24)  {
	cout<<"Obs:peso normal";
	
	}
	
	if(imc>=24 && imc<29)
    {
      cout<< "Obs:Voce esta acima do peso";
     }
  if(imc>29)
    {
      cout<< "Obs:voce esta obeso";
     }
}
