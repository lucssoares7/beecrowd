#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
	int n = 0, k = 0;
	int vet[40];
	int vet2[40];
	vet[0]=0;
	vet[1]=1;
	vet2[0]=0;
	vet2[1]=0;
	for(int i=2;i<40;i++){
          vet[i]=vet[i-1]+vet[i-2];
          vet2[i]=vet2[i-1]+vet2[i-2]+2;
    }
	while (scanf("%d",&n)&&!feof(stdin))
	{
		for (int i = 0; i < n; i++)
		{
			scanf("%d",&k);
			cout <<"fib("<<k<<") = "<<vet2[k]<<" calls = "<<vet[k]<<endl;
		}
	}
	return 0;
}
