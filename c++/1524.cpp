#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(void){
	int n,k;
	
	while(scanf("%d %d",&n,&k)!=EOF){
		int fila[n-1];
		int dist[n];
		//limpa vetores
		for (int i = 0; i < n; i++){
			fila[i] = 0;
			dist[i] = 0;
		}
		
		//fila[0] = 0;//primeiro da fila
		//dist[0] = 0;//distancia do primeiro da fila
		for (int i = 1; i < n; i++){
			scanf("%d",&fila[i]);
		}
		
		for (int i = 1; i < n; i++){
			dist[i] = fila[i] - fila[i-1];
		}
		
		sort(dist,dist+n);
		/*for (int i = 0; i < n; i++){
			cout << dist[i] << " ";
		}*/
		
		//cout << endl;
		int soma = 0;
		for (int i = 1; i <= n - k; i++){
			soma += dist[i];
		}
		cout << soma << endl;
	}
	return 0;
}
