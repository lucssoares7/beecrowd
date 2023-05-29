#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    unsigned int x=0, y=0, r=0;
    while(cin >> x >> y) {
    r=x^y;
    cout << r<<endl;
    r=0;
    }
    return 0;
}