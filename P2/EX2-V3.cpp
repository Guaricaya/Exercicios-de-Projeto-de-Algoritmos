#include <iostream>
using namespace std;
int fibonacci (int n);

int main(){
	int posicao;
	
	cout << "Digite um numero maior ou igual a 0 e veja o valor de sua posicao na sequencia de Fibonacci: ";
	cin >> posicao;
	
	if (posicao >= 0){cout << "\n O valor na posicao " << posicao << " e " << fibonacci (posicao)<<endl;}
	else {cout << "Valor invalido";}
}

int fibonacci (int n){
		if (n == 0){ return 0;}
		
		else if (n < 2){
		return 1;
		}
		
	return fibonacci (n - 1) + fibonacci (n - 2);
	}