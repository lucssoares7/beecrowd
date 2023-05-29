#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned long long int n=0,x=0;
    unsigned long long int s=1,result=0;
    cin >> n;
    for (unsigned int i = 0; i < n; i++)
    {
        cin >> x;
        for (unsigned int j = 1; j < x ; j++)
        {
            s=2*s;
            result+=s;
        }
        result=result/12000;
        cout << (result) <<" kg"<<endl;
        result = 0;
        s=1;
    }
    return 0;
}
