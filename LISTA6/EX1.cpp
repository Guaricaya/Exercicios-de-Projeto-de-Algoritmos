//Leia um vetor de 12 posições e em seguida ler também dois valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa deverá escrever a soma dos valores encontrados nas respectivas posições X e Y.
#include <iostream>
using namespace std;
int x, y, aux, resul;
int *vec = new int[12];

int main(){
  cout<<"insira os valores x e y."<<endl;
 cin>>x>>y;
 cout<<"insira os 12 valores."<<endl;
  for(int i = 0; i < 12; i++){
    cin>>aux;
    vec[i] = aux;
  }
  resul = vec[x] + vec[y];
  cout<<resul<<endl;
  delete[]  vec;
  return 0;
}


