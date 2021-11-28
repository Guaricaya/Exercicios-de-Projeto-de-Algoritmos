//Escreva um programa que leia um inteiro e imprima se ele é par ou impar.

#include <iostream>
using namespace std;

int main(){
  int x ,y;
  cout<<"Digite o valor de x:"<<endl;
  cin>>x;
  y=x%2;
  if(y == 0){
    cout<< x <<" é par";
  }else{
    cout<< x <<" é impar"<< endl;
  }
  return 0;
}