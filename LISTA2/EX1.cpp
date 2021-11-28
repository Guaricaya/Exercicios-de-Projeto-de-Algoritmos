//Escreva um programa para ler o valor de x e calcular y:y=10x+x2 se x >0;y=x2 se x≤0.
#include <iostream>
using namespace std;

int main(){

  int x, y;

  cout<<"Digite o valor de x:"<<endl;
  cin>>x;
  
  if(x>0){
    y = (10/x)+x*x;

  }else{
    y = x*x;
  }
  cout<<"o valor de y é: "<<y<<endl;
  return 0;
}