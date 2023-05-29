#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
int main(){
	int r1,x1,y1,r2,x2,y2;
    double d=0;
	while (cin >> r1>>x1>>y1>>r2>>x2>>y2 && (!feof(stdin))){
		if((sqrt((pow(x2-x1,2) + (pow(y2-y1,2)))) <= (r1-r2))){
			cout<< "RICO"<<endl;
		}else 
			cout <<"MORTO"<<endl;
	}
	return 0;
}