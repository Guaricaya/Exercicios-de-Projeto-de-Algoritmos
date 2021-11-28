//Escreva um programa que imprima os divisores de um inteiro não negativo em ordem decrescente. O inteiro deverá ser entrado em tempo de execução.
#include <iostream>
using namespace std;

int main(){
 cout<<"insira um número natural e veja os seus divisores."<<endl;
 int n,i;
 cin>>n;
 i = n;
if(n<0){
  cout<<"valor invalido"<<endl;
}else{
  for(int aux = 0; aux < n+1; aux++){
    if(i==0){
      break;
    }else if(n%i == 0){
      cout<<i<<endl;
      i--;
    }else{
      i--;
    }
  }
}  
  return 0;
}