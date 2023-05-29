	
#include <iostream>
#include <vector>
#include <cstdio>
#include <cstring>
 
using namespace std;
 
int mat[50][50];
int visitado[50];
int cont;
int v;
 
void dfs(int begin)
{
    visitado[begin]=1;
    for (int i = 0; i < v; i++)
    {
        if (mat[begin][i] == 1 && visitado[i]==0)
        {
            visitado[i]=1;
            cont++;
            dfs(i);
        }
    }
}

void limpaMatriz(){
	for (int i = 0; i < 50; i++){
		for (int j = 0; j < 50; j++){
			mat[i][j] = 0;
		}
	}
}
void limpaVetor(){
	for (int i = 0; i < 50; i++){
		visitado[i] = 0;
	}
}
 
int main()
{
    int n,t,a,x,y,i,j;
    scanf("%d",&t);
    for (i = 0; i < t; i++){
		limpaMatriz();
		limpaVetor();
        cont = 0;
        scanf("%d %d %d",&n,&v,&a);
        for (j = 0; j <a; j++)
        {
            scanf("%d %d",&x,&y);
            mat[x][y] = 1;
            mat[y][x] = 1;
        }
        dfs(n);
        printf("%d\n",cont*2);
    }
    return 0;
}
