#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
    int tamanho = 0;
    cout << "Insira o número de solicitaçoes" << endl;
    cin >> tamanho;
    srand (time(NULL));
    int n, count, aux;
    int * vec = new int [100];
    int * vecsol = new int [tamanho];

for(int k = 0; k <=99; k++){
    vec[k] = 0;
}
for(int i = 0 ; i < tamanho; i++){
  vecsol[i] = rand() % 100 + 1;
}

for(int i = 0 ; i < tamanho; i++){
   aux = vecsol[i] - 1;
   vec[aux]= vec[aux] + 1;
}

for(int i = 0 ; i < 100; i++){
  if(vec[i]>1){
    count = count + (vec[i] - 1);
  }else{
    count = count;
  }
}
  cout<<"O número de solicitações rejeitadas é de "<<count<<endl;
  delete[] vec;
  delete[] vecsol;

  return 0;
}