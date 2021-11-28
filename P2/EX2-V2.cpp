#include <iostream>

using namespace std;
int n;
int fibonacci(int n);
int main(){
 cout<<"insira um valor maior ou igual a 1, e veja o valor da posição na sequencia de Fibonacci."<<endl;
 cin>>n;
 if(n<1){  
   cout<< "Valor inválido."<<endl;
 }else{
   fibonacci(n);
 }    
  return 0;
}

int fibonacci(int n){

    int arr[n];
    arr[0] = 0;
    arr[1] = 1;
for(int i = 0; i < n; i++){
    arr[i + 2] = arr[i + 1] + arr[i];
}
cout << "O Numero " << arr[n - 1] << " e o " << n << "-esimo termo da sequencia de fibonacci"<<endl;
}