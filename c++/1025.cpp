#include <iostream>
#include <cstdlib>
#include <algorithm> 
#include <cstdio>

using namespace std;

int values[10000];
int consult[10000];
bool batata = true;

int main () {
register int N=0, Q=0, cont = 1,i=0,j=0;
  
  while(batata){
    //cin >> N >> Q;
    scanf("%d %d",&N,&Q);
    for (i = 0; i < N; i++){
      scanf("%d",&values[i]);
    }
    
    for (i = 0; i < Q; i++){
        scanf("%d",&consult[i]);
    }
    sort(values, values + N);   
 
    if( N == 0 && Q == 0){
      batata = false;
    }else{
      //cout << "CASE# " << cont << ":" << endl;
      printf("CASE# %d:\n",cont);
    }
  
    for (i = 0; i < Q; i++){
      bool peao = false;
      for (j = 0; j < N; j++){
        
        if (values[j] == consult[i]){
          //cout << consult[i] <<" found at " << j+1 <<endl;
        printf("%d found at %d\n",consult[i],j+1);
          peao = true;
        }
        if ((peao == true) || (values[j] > consult[i])){
          break;
        }
      }
      if (peao == false){
        //cout << consult[i] << " not found" << endl;
        printf("%d not found\n",consult[i]);
      }
    }
    cont++;
  }
 return 0;
}
