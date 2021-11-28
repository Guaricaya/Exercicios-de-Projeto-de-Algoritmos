// Elabore um programa que leia um inteiro n e calcule o máximo entre n números reais entra dos em tempo de execução.

#include <iostream>
using namespace std;

int main(){
  int i;
  double x,y,z;
  cout<<"Comparador de números, insira quantos números você quer comparar e veja qual o maior. "<<endl;
  cin>>i;
  
  if(i < 2){
    cout<<"valor invalido"<<endl;

  }else{
    cin>> x >> y;
    while((i--) != 0){
      
      if(y > x){
        if(y > z){
         z = y;
        }else{
          z = z;
        }
        if(i > 1){
          cout<<"insira o proximo valor." <<endl;
          cin>>x;
        }else{
          break;
        }
      }else{
        if(x > z){
          z = x;
        }else{
          z = z;
        }
        if(i > 1){
          cout<<"insira o proximo valor"<<endl;
          cin>>y;
        }else{
          break;
        }
      
      }
    }
  }
  cout<< z <<" é o maior"<<endl;
  return 0;
}