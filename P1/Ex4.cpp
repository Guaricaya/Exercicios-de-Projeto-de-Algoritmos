#include<iostream>
using namespace std;
int inverter(int num);


int main()
{
    int num;
    cin>>num;
    cout << "A ordem contraria vai ser " << inverter(num)<<endl;

    return 0;
}
int inverter(int num){

	int invertNum = 0, resto;

    while(num != 0) {
        resto = num%10;
        invertNum = invertNum*10 + resto;
        num = num / 10;
	}


	return invertNum;
}
