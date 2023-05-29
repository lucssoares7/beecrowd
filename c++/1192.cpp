#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstring>
using namespace std;

int main()
{
    int n=0,r=0,first=0,sec=0;
    char crt;
    cin >> n;
    for (int i = 0; i <n ; i++)
    {
        cin >>first>>crt>>sec;
        if (crt>=65 && crt<=90)
        {
            if (first==sec)
            {
                r=first*sec;
            }
            else
            {
                r=sec-first;
            }
            cout << r<<endl;
        }
        
        if (crt>=97 && crt<=122)
        {
            if (first!=sec)
            {
                r=sec+first;
                cout << r<<endl;
            }
            if (first==sec)
            {
                r=first*sec;
                cout << r<<endl;
            }
        }
    }
        
    return 0;
}
