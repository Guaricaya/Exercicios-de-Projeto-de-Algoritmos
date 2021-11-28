//Leia um vetor de 40 posições. Contar e escrever quantos valores pares ele possui.
#include <iostream>
using namespace std;
int i = 1, count;
int * vec = new int [40];
int main(){
  cout<<"insira 40 valores e veja quantos pares tem:"<<endl;
 for(int aux = 0;aux <40 ;aux ++){
  cout<<aux+1;
  cin>>vec[aux];
  
 }
 for(int aux = 0;aux <40 ;aux ++){
   int y = vec[aux]%2;
   
    if(y == 0){
      count++;
    }else{

    }
 }
 cout<<"no vetor tem "<<count<<" valores par(es).";
 delete[] vec;
  return 0;
}