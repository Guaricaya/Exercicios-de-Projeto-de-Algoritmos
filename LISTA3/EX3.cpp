//Escreva um programa que leia n Números inteiros em tempo de execução e que imprima a soma, o produto e a média deles.
#include <iostream>
using namespace std;

int main(){
 
  int qtd,x,y,z,f,pro,soma;
  double med;
  cout<<"Comparador de números, insira quantos números você quer comparar e veja qual o maior. "<<endl;
  cin>>qtd;
  f = qtd;
  if(qtd < 2){
    cout<<"valor invalido"<<endl;
  }else{
    cin>> x >> y;
    pro = x*y;
    soma = x+y;    
    for(int i=2 ; i < qtd ;i++){
      cin>>z;
      pro = pro*z;
      soma = soma + z;  
    }
    med = soma/f;
  }
  
  cout<< pro <<" é o produto"<<endl;
  cout<< soma <<" é a soma"<<endl;
  cout<< med <<" é a media"<<endl;
  return 0;
}