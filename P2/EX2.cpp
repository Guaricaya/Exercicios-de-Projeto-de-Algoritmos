//Dadas as características da sequência de Fibonacci, escreva um programa que usa uma função que receba um inteiro n e calcule o n-ésimo termo da sequência de Fibonacci.
#include <iostream>
using namespace std;
int n, x, aux, resul;
int fibbo(int n);

int main(){
 cout<<"insira um valor maior ou igual a 1, e veja o valor da posição na sequencia de Fibonacci."<<endl;
 cin>>n;
  if(n<1){  
    cout<< "Valor inválido."<<endl;
  }else{
    cout<<"O valor da posição "<<n<<" é "<<fibbo(n)<<" ."<<endl;
  } 
 return 0;
}

int fibbo(int n){
    x = 1;
    aux = 1;
    for(int i = 0; i < n-1; i++){
      if(i==0){
        resul = 1;
      }else{
        resul = aux + x;
        x = aux;
        aux = resul;
      }
    }
  return resul;
}