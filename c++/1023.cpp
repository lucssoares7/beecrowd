#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

int resto (int a){
	if (a >= 10){
		return a % 10;
	}
	return a;
}

int main(void){
	
	int Num_linhas = 0,B = 0;
	int pessoas,gastos,k = 0,T=0,F=0,p=0;
	int media[10000];
	float A,TP=0,TG=0;
	while(scanf("%d",&Num_linhas) && Num_linhas){
		memset(media, 0, 10000*sizeof(int));
		if (F > 0)
			cout << endl;
		for (int i = 0; i < Num_linhas; i++){
			cin >> pessoas >> gastos;
			if(!media[gastos/pessoas])
				k++;
			media[gastos/pessoas] += pessoas;
			TP += pessoas;
			TG += gastos;
		}
		printf("Cidade# %d:\n",++T); 
		for (int i = 0; i < 10000; i++){
			if(media[i]){
				printf("%d-%d",media[i],i);
			p++;
			if(p<=k-1)
				printf(" ");
			}
		}
		cout << endl;
		B=(TG/TP)*1000;
		A = (B - resto(B))/1000.0;
		printf("Consumo medio: %.2f m3.\n", A);
		
		TP=0;
		TG=0;
		k=0;
		p=0;
		F++;
	}
	return 0;
}
