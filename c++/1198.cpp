#include <iostream>

using namespace std;
 
int main()
{
    long long int a=0,b=0;
    while ( cin >> a >> b)
    {
        if ((a-b)<0)
        {
            cout << (a-b)*-1<<endl;
        }else
        cout << a-b<<endl;
    }
    return 0;
}
