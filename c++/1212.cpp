#include <iostream>
#include <cstdio>
using namespace std;

int main(){
int carry=0, sum=0, count=0;
unsigned long long n1, n2;

while ((cin>>n1>>n2) && (n1||n2)){    
	while(n1>0||n2>0){
		sum=carry+(n1%10)+(n2%10);
		if (sum>=10){
			count++;
		}
		carry=sum/10;
		n1/=10;
		n2/=10;
		}
		 
		if (count == 0) {
			cout << "No carry operation." << endl;
		} else {
			if (count == 1) {
				cout << "1 carry operation." << endl;
			} else {
				cout << count << " carry operations." << endl;
			} 
		}
		carry = 0;
		count = 0;
		sum = 0;
	}
return 0;
}