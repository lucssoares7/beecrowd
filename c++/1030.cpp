#include <iostream>

using namespace std;

int main()
{
    int nc,n,k;
    cin >> nc;
    for (int i = 0; i < nc; i++){
        cin >> n >> k;
        cout << "Case "<<i+1<<": ";
		int r = 0;
		int m = 2;
		for (int  j = m; j <= n; j++){
			r = (r+k)%j;
		}
		cout << r + 1 <<endl;
    }
    return 0;
}
