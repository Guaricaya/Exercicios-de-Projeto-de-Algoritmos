#include <iostream>
using namespace std;
int main(){
double capitalinicial, taxa;
int ano;
    cout << "Entre com o seu capital inicial: ";
    cin >> capitalinicial;
      cout << "Inicio: " << capitalinicial << endl;
        for(int i = 1; i <= 10; i++){
            capitalinicial *= (1 + 0.05);
            cout << "A soma vai ser: " << capitalinicial << " reais apos o ano " << i <<"."<< endl;
        }
    cout << "Ao fim: " << capitalinicial << " reais." << endl;
    return 0;
}

