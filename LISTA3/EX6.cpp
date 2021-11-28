//Calcule a soma, o produto e a média de números entrados em tempo execução, fazendo com que o programa termine quando o usuário entrar com o número zero.
#include <iostream>
using namespace std;

int main(){
  int qtd,x,y,z,f,pro,soma;
  double med;
  cout<<"Comparador de números, insira quantos números você quer comparar e veja qual o maior. "<<endl;
  cin>>qtd;
  f = qtd;
  if(qtd < 2){
    cout<<"valor invalido"<<endl;
  }else{
    cin>> x >> y;
    pro = x*y;
    soma = x+y;    
    for(int i=2 ; i < qtd ;i++){
      cin>>z;
      if(x == 0 || y == 0 || z ==  0){
        cout<<"você saiu do programa"<<endl;
        break;
      }else{
        pro = pro*z;
        soma = soma + z;  
      }
    }
    med = soma/f;
  }
  cout<< pro <<" é o produto"<<endl;
  cout<< soma <<" é a soma"<<endl;
  cout<< med <<" é a media"<<endl;
  cout<<"o programa acabou"<<endl;
  
  return 0;
 
}