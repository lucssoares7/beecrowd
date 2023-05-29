#include <iostream>
#include <cstdio>
#include <cmath>
  
using namespace std;
int main(){
    int a = 0,b = 0,c= 0;
    double r=0;
    while(scanf("%d",&a) && a!=0){
        scanf("%d %d",&b,&c);
        r = c*((a*b)/(float)(c-a));
        int resp = (int)trunc(r);
        if(resp==1)
            cout << resp<<" pagina" <<endl;
        else
            cout << resp<<" paginas" <<endl;
    }
    return 0;
}
	
