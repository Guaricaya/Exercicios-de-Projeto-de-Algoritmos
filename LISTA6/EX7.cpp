//Leia dois vetores de 20 posições e calcule um outro vetor contendo, nas posições pares os valores do primeiro e nasposições impares os valores do segundo.
#include <iostream>
using namespace std;

int * vec = new int [20];
int * vecimp = new int [20];
int * vecresult = new int [20];
int main(){
  cout<<"transforma numeros negativos em 0:"<<endl;
 for(int aux = 0;aux <40 ;aux ++){
  cin>>vec[aux];
  
 }
 for(int aux = 0;aux <40 ;aux ++){
  cin>>vecimp[aux];
  
 }
 for(int aux = 0;aux <40 ;aux ++){
   int y = aux%2;
   
    if(y > 0){
      vecresult[aux] = vec[aux];
    }else{
      vecresult[aux] = vecimp[aux];
    }
 }
 for(int aux = 0;aux<20 ;aux ++){
  cout<<vecresult[aux]<<endl; 
 }
 delete[] vec;
 delete [] vecimp;
 delete [] vecresult;
  return 0;
}