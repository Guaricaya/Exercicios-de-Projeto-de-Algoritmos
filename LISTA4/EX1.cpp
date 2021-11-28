//Escreva um programa que leia um inteiro em tempo de execução e determine se o número entrado é primo ou não.Se ele não for primo, imprima na tela seu menor divisor (diferente de 1).
#include <iostream>
using namespace std;
int main(){
  int aux, num, div=0, mdiv;
  cout<<"Insira um número e veja se ele é primo ou não."<<endl;
  cin>>num;
  mdiv = num;
    for(aux=1 ; aux<=num ; aux++){
        if(num%aux==0){
          if(mdiv>aux && aux>1){
             mdiv = aux; 
          }
          div++;           
        }
      }
    if(div==2){
        cout<<num<<" é primo"<<endl;
    }else{
        cout<<num<<" não é primo e o menor divisor é "<< mdiv<<"."<<endl;
    }

     return 0;
  }