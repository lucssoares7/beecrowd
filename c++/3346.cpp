#include <iostream>
#include <cstdio>
using namespace std;

int main(void){
	double F1=0,F2=0;
	double R=0, Aux=0;
	cin >> F1 >> F2;
	Aux = 100 + F1;
	//cout << (F2/100)*Aux<<" "<<Aux <<endl;
	R = (Aux + (Aux * (F2/100)))-100;
	printf("%.6f\n",R);
	return 0;
}
