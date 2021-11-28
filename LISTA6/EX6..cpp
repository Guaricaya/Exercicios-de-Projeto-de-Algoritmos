//Leia um vetor de 40 posições e atribua valor 0 para todos os elementos que possuírem valores negativos.
#include <iostream>
using namespace std;
int i = 1, count;
int * vec = new int [40];
int main(){
  cout<<"transforma numeros negativos em 0:"<<endl;
 for(int aux = 0;aux <40 ;aux ++){
  cout<<aux+1;
  cin>>vec[aux];
  
 }
 for(int aux = 0;aux <40 ;aux ++){
   int y = vec[aux]%2;
   
    if(y > 0){
      vec[aux] = 0;
    }else{

    }
 }
 for(int aux = 0;aux <40 ;aux ++){
  cout<<vec[aux]<<endl; 
 }
 delete[] vec;
  return 0;
}