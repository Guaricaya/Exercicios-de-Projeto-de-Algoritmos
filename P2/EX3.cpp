#include <iostream>
using namespace std;

int retorno(double x, int a, double t, int tipo);
int main()
{
    int a, tipo;
    double t, x;

    cout << "Informe uma quantia para se aplicar: " << endl;
    cin >> x;
    cout << "Informe o tempo(em anos) de aplicacao: " << endl;
    cin >> a;
    cout << "Informe a taxa de juros(entre 0 e 1): " << endl;
    cin >> t;
    cout << "Caso deseje saber o retorno em juros compostos digite 1." << endl << "Se desejar saber o retorno em juros simples digite 0." << endl;
    cin >> tipo;
     retorno(x, a, t, tipo);

}
int retorno(double x, int a, double t, int tipo){
    if(tipo){
        for(int i = 1; i <= a; i++){
            x *= (1 + t);

    }
    cout << endl <<"Após "<<a<<" anos seu montante é de " << x << endl;
    return 1;
    }else {
        int valor = x * (1 + (t * a));
        cout << endl<<"Após "<<a<<" anos seu montante é de " << valor << endl;
        return 0;
    }

}