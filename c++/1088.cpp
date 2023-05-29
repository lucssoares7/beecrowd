#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
 
using namespace std;
 
typedef struct vet
{
    int valor;
    int mod;
}betor;
 
bool compare(register betor a, register betor b)
{
    if (a.mod > b.mod)
    {
        return true;
    }
    else if (a.mod == b.mod)
    {   
        if ((a.valor%2==0 && b.valor%2!=0 ))
        {
            return true;
        }
        else if ((a.valor%2!=0 && b.valor%2==0 ))
        {
          return false;  
        }
         
        if (a.valor%2!=0 && b.valor%2!=0)
        {
            if (a.valor < b.valor)
            {
                return true;
            }
        }
        else if (a.valor%2==0 && b.valor%2==0)
        {
            if (a.valor > b.valor)
            {
                return true;
            }
        }
    }
    return false;
}
 
int main(void)
{
    register int n=0,m=0,i=0;
    while (scanf("%d %d",&n,&m) && (n || m))
    {
        register betor k[n];
        //int vet[n];
        for (i = 0; i < n; i=i+1)
        {
            scanf("%d",&k[i].valor);
            k[i].mod = k[i].valor%m;
        }
        sort(k,k+n,compare);
        //cout << n <<" "<<m<<endl;
        printf("%d %d\n",n,m);
        for (i = n-1; i >=0 ; i=i-1)
        {
            //cout << k[i].valor<<endl;
            printf("%d\n",k[i].valor);
        }
    }
    printf("0 0\n");
    return 0;
}
