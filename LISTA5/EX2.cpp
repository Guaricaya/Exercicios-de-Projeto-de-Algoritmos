//Escreva um programa que calcule a interseção de dois intervalos de inteiros [a,b] e [c,d] dados pelo usuário (porexemplo, dados os intervalos [1,6] e [3,11], a interseção é o intervalo [3,6]).
#include <iostream>
using namespace std;

int main(){
 cout<<"insira dois intervalos de numeros inteiros e veja a interseção." ;
 int a,b,c,d;
 cin>>a>>b;
 cin>>c>>d;
  if( b<a || d<c ){
    cout<<"intervalo invalido"<<endl;
  }else if(b<c){
    cout<<"Não há intersseção."<<endl;
  }else{
    cout<<"a interseção é ["<<c<<","<<b<<"]"<<endl;
  }
  return 0;
}