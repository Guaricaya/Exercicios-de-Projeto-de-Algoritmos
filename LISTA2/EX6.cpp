//Elabore um programa que pergunte o valor de três resistênciasr1,r2er3e retorne o valor da resistência equivalenteem serie ou em paralelo. O programa deve perguntar ao utilizador que informe como as resistências estão ligadas(série ou paralela).
#include <iostream>
using namespace std;

int main(){
int x;
double r1,r2,r3,y,z ;
  cout<<"Digite o valor das 3 resistências do sistema elétrico:"<<endl;
  cin>> r1 >> r2 >> r3; 
  cout<<"Digite um dos valor para começar o calculo da resistencia equivalete:"<<endl<<"1- em serie"<<endl<<"2- em paralelo"<<endl;
  cin>> x;
  
  switch(x) 
  {
    case 1:
      y = r1 + r2 + r3 ;
      cout<< y <<" é a resistencia equivalente" <<endl;
      break;
    
    case 2:
      z = (r1*r2*r3)/((r1*r2)+(r2*r3)+(r1*r3));
      cout<< z << " é a resistencia equivalente"<<endl;
      break;
    
  }
  return 0;
}