#include <iostream>
using namespace std;
int nquadrados(int n);
int main(void) {
    int n;
    cout << "Escolha um numero: ";
    cin >> n;
    if(n < 0){
        cout << "A funcao nao e definida em n < 0";
        return 0;
    }
    cout << "A soma dos quadrados vai ser " << nquadrados(n) << endl;

}
int nquadrados(int n){

if(n <= 0){
    return 0;
}
return (n * n) + nquadrados(n - 1);
}