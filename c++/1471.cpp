#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void apagar(int n, int *t, int *v)
{
    for (int i = 0; i < *t; i++ )
    {
        if (v[i] == n) // encontrou o valor no vetor
        {
            /* 
             * faremos um laco que desloca todos os elementos 'a direita de i
                         * para a esquerda, ou seja, sobrescrevemos o vetor de i até t - 1
                         */
            *t -= 1; // como retiramos um elemento do vetor o seu tamanho diminui
            while (i < *t)
            {
                v[i] = v[i + 1];
                i++;
            };
            //return true;
        }
    };

 //   return false;
}

int main()
{
	int n,r,k,i;
	int vet[10000];
	while((cin >> n >> r))
	{
		for (i = 0; i < n; i++)
		{
			//v.push_back(i+1);
			vet[i]=i+1;
			//cout <<v.at(i);
		}
		for (i = 0; i < r; i++)
		{
			cin >> k;
			apagar(k,&n,vet);
		}
		if (n>0)
		{
			for (i = 0; i < n; i++)
			{
				cout << vet[i]<<" ";
			}	
			cout <<endl;
		}
		
		else
		{
			cout <<"*"<<endl;
		}
	}
	return 0;
}
