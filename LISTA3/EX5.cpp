//Elabore um programa para calcular o fatorialn! = 123...(n−1)n de um inteiro não negativo, respeitando o fato de que 0! = 1
#include <iostream>
using namespace std;
#define fat0 1;
int main(){
  int qnt, n, fat;
  cout<<"inisira o valor e veja seu fatorial: "<<endl;
  cin>>qnt;
  fat=1;
  n=qnt;
  for(int x = 0 ; qnt > x ;x++){
      if((qnt-x) == 0){
        fat= fat*fat0;
      }else if(n>0){
        fat= (qnt-x) * fat;
      }else{
        cout<<"Valor invalido"<<endl;
      }
  }
  cout<<"o resultado de "<<n<<"! é "<<fat<<"."<<endl;
  return 0;
}