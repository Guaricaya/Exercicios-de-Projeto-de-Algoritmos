#include <iostream>
#include <stdlib.h>     
#include <time.h>
using namespace std;
int n, r, tent;


int main(){
  srand (time(NULL));
  n = rand() % 100;
  cout<<"o jogador entra um número : ";
  cin>>tent;
  for(int i = 1; i > 0 ; i++ ){
    r=i;
    if(tent>n){
      cout<<"o computador responde : muito grande"<<endl;
      cout<<"o jogador entra um número : ";
      cin>>tent;
     }else if(tent==n){
      cout<<"Parabéns, voce descobriu o numero em "<< r <<" rodadas"<< endl;
      break;
    }else if(r == 10){
      cout<<"Você perdeu!!"<<endl;
      break;
    }else{
      cout<<"o computador responde : muito pequeno"<<endl;
      cout<<"o jogador entra um número : ";
      cin>>tent;
    }
  }


  return 0;
}