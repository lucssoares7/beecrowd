#include <iostream>

using namespace std;

int main(void){
	int n,k,resp=0;
	cin >> n;
	for (int i = 0; i < 5; i++){
		cin >> k;
		if(k==n) resp++;
	}
	cout << resp<<endl;
	return 0;
}
