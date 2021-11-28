// Elabore um programa que leia caracteres entrados em tempo de execução e para somente quando o usuário adicionaro caractere ’s’.
#include <iostream>
using namespace std;

int main(){
  char z;
  cout<<"Quando quiser para o programa insira o valor s: "<<endl;
  cin>>z;
  while(z != 's' ){
    cin>>z;
  }
  
  cout<<"você saiu!!"<<endl;
  return 0;
}