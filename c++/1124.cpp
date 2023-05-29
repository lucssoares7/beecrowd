#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
    int l=0,c=0,r1=0,r2=0,maior=0;
    while (cin >> l >> c >> r1>>r2 &&(l||c||r1||r2))
    {
        //primeiro caso
        if (l<c)
        {
            maior=l;
        }
        else
        {
            maior=c;
        }
        if (2 * r1 <= maior && 2 * r2 <= maior)
        {
            if (hypot(l - r2 - r1, c - r2 - r1) >= r1 + r2)
                    puts("S");
                else
                    puts("N");
        }            
        else
            puts("N");
    }
    return 0;
}
