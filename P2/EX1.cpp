#include <iostream>
#include <stdlib.h>     
#include <time.h>
using namespace std;
int n, count, aux;
int * vec = new int [100];
int * vecsol = new int [100];
int main(){
  srand (time(NULL));
   
//preencho o vetor de consulta com 0 em todos dos espaços
for(int i = 0 ; i < 100; i++){

  vec[i] = 0;
  vecsol[i] = (rand() % 100) + 1;
  //teste para saber se os valores estão sendo alocados
  cout<<vec[i]<<"/"<<vecsol[i]<<endl;
}
//preencho o vetor de solicitação com números aleatorios
/*for(int i = 0 ; i < 20; i++){
  vecsol[i] = n;
} */ 
//acessa a posição n do vec e add 1
for(int i = 0 ; i < 100; i++){
   aux = vecsol[i] - 1;
   vec[aux]= vec[aux] + 1;
}
//verificar os casos que o vec tem mais de uma solicitação
for(int i = 0 ; i < 100; i++){
  if(vec[i]>1){
    count = count + (vec[i] - 1);
  }else{
    count = count;
  }
}
  cout<<"O número de solicitações rejeitadas é de "<<count<<endl;
  delete[] vec;
  delete [] vecsol;
  return 0;
}