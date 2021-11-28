//Leia um vetor de 16 posições e troque os 8 primeiros valores pelos 8 últimos e vice-e-versa. Escreva ao final o vetorobtido.
#include <iostream>
using namespace std;
int  x, aux, posmax, y;
int *vec = new int[16];
int *vec2 = new int [8];
int main(){
  x=15;
  posmax=15;
  y=7;
 cout<<"insira os 16 valores."<<endl;
 //preencho o vetor 1
  for(int i = 0; i < 16; i++){
    cout<<i<<". ";
    cin>>aux;
    vec[i] = aux;
  }
//preencho o vetor 2 com a segunda metade do vetor 1 na ordem decescrente
 
  for(int v = 0; v < 8; v++){
    vec2[v] = vec[posmax];
    posmax--;
  }
//preencho a segunda metade do vetor 1 com os valores da primeira metade.

  for(int z = 0;z < 8; z++){
    vec[x]=vec[z];
    x--;
  }

  //a primeira metade do vetor 1 recebe os valores da segunda metade
  for(int i = 0; i < 8; i++){
   vec[i]=vec2[y];
   y--;
  }

  for(int i = 0; i < 16; i++){
    cout<<i<<". "<<vec[i]<<endl;
  }
delete[] vec;
delete[] vec2;
  return 0;
}
