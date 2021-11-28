//Declare um vetor de 10 posições e o preencha com os 10 primeiros números impares e o escreva.
#include <iostream>
using namespace std;
int main(){
 int i = 1;
 int * vec = new int [10];
 for(int aux = 0;aux <10 ;aux ++){
  vec[aux] = i;
  cout<<vec[aux]<<endl;
  i = i+2;
 }
 delete[] vec;
  return 0;
}