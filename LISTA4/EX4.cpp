//incompleto

#include <iostream>

using namespace std;


int main(){
  int valor, id_n, count;
  int Notas[7] = {1,2,5,10,20,50,100};

  cout<<"insira um valor em reais e veja esse valor em cedulas e moedas."<<endl;
  cin>>valor;
  id_n = 6;
  while(valor>0){
    count = valor/Notas[id_n];
    valor = valor%Notas[id_n];
    cout<<count<<" nota(s) de "<<Notas[id_n]<<endl;
    id_n--;

  }

  return 0;
}