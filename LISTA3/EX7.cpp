//Elabore um programa para escrever a tabuada de 0 a 10, como no exemplo abaixo :
#include <iostream>
using namespace std;
int result;
int main(){
  cout<<"Tabuada."<<endl;
  cout<<"X*Y   "<<"I   ";
    for(int i=0; i < 11 ;i++){
      if(i<10){
        cout<<i<<"   ";
      }else{
      cout<<i<<"  ";
      }
    } 
    cout<<endl;
    //cout<<"_____________________________________________________"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    for(int l=0; l < 11 ;l++){
      if(l<10){
        cout<<l<<"     "<<"I   ";
      }else{
        cout<<l<<"    "<<"I   ";
      }
      
      for(int col = 0 ; col < 11;col++){
      result = col*l;
        if(result<10){
          cout<< result <<"   ";
        }else if( 10 < result || result < 100 ){
          cout<< result <<"  ";
        }else{
          cout<< result <<" ";
        }
      
      }
      cout<<endl;
      
    }
    
  return 0;
}