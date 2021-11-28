//Elabore um programa para imprimir os pares (x, y) tal que :x e y sejam inteiros ; 0≤x≤5; e 0≤ 0=< y =<10y≤10.
#include <iostream>
using namespace std;

int main(){
  cout<<"Pares de x e y (x,y): "<<endl;
  for(int x=0; x < 6 ;x++){
    for(int y=0; y < 11 ;y++){
      if(y<9){
        cout<<"("<<x<<","<<y<<")";
      }else{
        cout<<"("<<x<<","<<y<<")"<<endl;}
    }
  }
  return 0;
}