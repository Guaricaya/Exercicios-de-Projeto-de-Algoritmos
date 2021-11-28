//Escreva um programa que calcule a evolução de uma soma de x reais (leia x em tempo de execução e guarde ovalor em uma variável) a cada ano, durante os 10 próximos anos, em um banco com taxa fixa de 5%. Utilize uma estrutura de laço.
#include <iostream>
using namespace std;
double valor;

int main(){
 cout<<"simulador de juros compostos."<<endl;
 cin>>valor;
 cout<<"Início: "<<valor<<" Reais"<<endl;
  for(int i=1; i<11 ; i++){
    valor = valor*1.05;
    cout<<"A soma é "<<valor<<" após o ano "<<i<<"."<<endl;
    }
 return 0;
}

