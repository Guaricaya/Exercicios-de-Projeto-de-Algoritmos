#include <iostream>
using namespace std;

int main(){
 cout<<"insira dois intervalos de numeros reais e veja a interseção."<<endl;
 double a,b,c,d;
 cin>>a>>b;
 cin>>c>>d;
  if( b<a || d<c ){
    cout<<"intervalo invalido"<<endl;
  }else if(b<c){
    cout<<"Não há intersseção."<<endl;
  }else if(a<c && b>d){
    cout<<"a interseção é ["<<c<<","<<d<<"]"<<endl;
  }else if(a>c && b<d){
    cout<<"a interseção é ["<<a<<","<<b<<"]"<<endl;
  }else{
    cout<<"a interseção é ["<<c<<","<<b<<"]"<<endl;
  }
  return 0;
}