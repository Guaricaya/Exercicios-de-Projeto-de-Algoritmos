//Leia um vetor de 20 posições e em seguida um valor X qualquer. Seu programa devera fazer uma busca do valor de X no vetor lido e informar a posição em que foi encontrado ou se não foi encontrado.
/* Leia um vetor de 20 posições e em seguida um valor X qualquer. Seu programa devera fazer uma busca do valor de X no vetor lido 
e informar a posição em que foi encontrado ou se não foi encontrado. */
#include <iostream>
using namespace std;
int main() {
    int * vet = new int [20];
    int * aux = new int [20];
    int x, cont = 0; 
    
    for(int i = 0; i < 20; i++){
        cout << "\n Entre com o valor da posição " << i+1 << " : \n";
        cin >> vet[i];
    }
    
    cout << "\n Qual o valor do numero que vc deseja encontrar? \n";
    cin >> x;
    
    for(int i = 0; i < 20; i++ ) {
        if(x == vet[i]){ 
            aux[cont] = i + 1;
            cont = cont + 1; 
        }
    }
    
    if(cont == 0) {
        cout << "\n O valor não foi encontrado! \n";
    } else {
        cout << "O valor " << x << " foi encontrado nas posicoes ";
        for (int i = 0; i < cont; i++) {
        cout << aux[i] << " ";
        }
        cout << " ! \n";
    }
    
    delete[] vet;
    delete[] aux;
    return 0;
}