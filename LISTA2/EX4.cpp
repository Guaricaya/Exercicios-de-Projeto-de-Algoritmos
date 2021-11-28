//Elabore um programa que calcule o valor absoluto de um número real.
#include <iostream>
using namespace std;

int main(){
double x;
  cout<<"Digite valor e veja qual o valor aboluto:"<<endl;
  cin>> x;
  
  if(x<0){
    x = x*(-1);
    cout<< x <<" é o valor absoluto" <<endl; 
  }else{
    cout<< x <<" é o valor absoluto"<<endl;
  }
  return 0;
}