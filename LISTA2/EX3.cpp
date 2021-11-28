//Elabore um programa que permita o calculo do máximo entre 2 números reais e imprima qual o valor máximo.
#include <iostream>
using namespace std;

int main(){
  int x ,y;
  cout<<"Digite 2 valores e veja qual o maior:"<<endl;
  cin>> x >> y;
  
  if(y > x){
    cout<< y <<" é maior" <<endl; 
  }else{
    cout<< x <<" é maior"<<endl;
  }
  return 0;
}