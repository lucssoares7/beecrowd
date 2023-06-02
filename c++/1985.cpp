#include <iostream>

using namespace std;

typedef struct lanche{
	int cod;
	double preco;
}lanche;

int main(void){
	int n,qtd,codigo;
	double r = 0;
	cin >> n;
	lanche l[5];
	for (int i = 0; i < 5; i++){
		l[i].cod = 1001+i;
		l[i].preco = 1.50+i;
	}
	
	for (int i = 0; i < n; i++){
		cin >> codigo >> qtd;
		for (int j = 0; j < 5; j++){
			if(codigo == l[j].cod){
				r += l[j].preco *qtd;
			}
		}
	}
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << r <<endl;
	
}
