#include <iostream>

using namespace std;


int main() {
  int n, m;
  //total = 0;
  cin >> n >> m;
  int v[n];
  int c[m];
  int tempo[n];
  int tempo_total = 0;
  for (int i = 0; i < n; i++){
	  tempo[i] = 0;
	  cin >> v[i];
  }
  for (int i = 0; i < m; i++){
	  cin >> c[i];
  }
  
  for (int i = 0; i < m; i++){
	  int livre = 0;
	  for (int j = 1; j < n; j++){
		  if(tempo[j]<tempo[livre]){
			  livre = j;
		  }
	  }
	  tempo[livre]=tempo[livre]+(v[livre]*c[i]);
	  if (tempo[livre] > tempo_total){
		  tempo_total = tempo[livre];
	  }
  }
  cout << tempo_total <<endl;
  
  return 0;
}
