//Modifique o Exercicio 4 para que o tempo de rendimento de 10 anos possa ser substituído por qualquer outro valorno inicio da execução do programa.
#include <iostream>
using namespace std;
double valor;
int main(){
 int time;
 cout<<"simulador de juros compostos,insira o valor que pretende investir e o tempo."<<endl;
 cin>>valor;
 cin>>time;
 cout<<"Início: "<<valor<<" Reais"<<endl;
  for(int i=1; i<time + 1 ; i++){
    valor = valor*1.05;
    cout<<"A soma é "<<valor<<" após o ano "<<i<<"."<<endl;
    }
 return 0;
}