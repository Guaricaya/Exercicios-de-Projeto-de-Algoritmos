//Elabore um programa que calcule o máximo entre 3 números reais.
#include <iostream>
using namespace std;

int main(){
double x,y,z ;
  cout<<"Digite 3 valor e veja qual o valor aboluto:"<<endl;
  cin>> x >> y >> z;
  
  if(y > x){
    cout<< x <<" é maior" <<endl;
    if(y > z){
      cout<< y <<" é maior" <<endl;
    }else{
      cout<< z << " é maior"<<endl;
    }
  }else if(z > x){
    cout<< z << " é maior"<<endl;

  }else{
    cout<< x <<" é maior"<<endl;
  }
  return 0;
}