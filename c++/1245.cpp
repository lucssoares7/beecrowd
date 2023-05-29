#include <iostream>
#include <fstream>
#include <algorithm>    
#include <cstring>
using namespace std;

typedef struct bota{
    int m;
    char l;
}bota;

bool compare(const bota &a, const bota &b)
{
    return a.l < b.l;
}

int main()
{
    int n=0,r=0;
    int left[61],right[61];
    memset(left,0,sizeof(left));
    memset(right,0,sizeof(right));
    
    while (cin >> n && !feof(stdin))
    {
        r=0;
        int v[n+1];
        char l[n+1];
        memset(left,0,sizeof(left));
        memset(right,0,sizeof(right));
        memset(v,0,sizeof(v));
        
        for (int i = 0; i < n; i++)
        {
            cin >> v[i]>> l[i];
        }
        
        for (int i = 0; i < n; i++)
        {
            if (l[i]=='E')
            {
                left[v[i]]++;
            }
            else
            {
                right[v[i]]++;
            }
        }
        
        for (int i = 30; i < 61; i++)
        {
            if (right[i] >= left[i] || right[i] <= left[i])
            {
                //r+=right[i]+left[i];
                r += min(right[i],left[i]);
            }
        }
        /*
        if (r%2!=0)
        {
            r-=1;
        }
        
        //r/=2;  */
        cout << r<<endl;
        r=0;
    }
    return 0;
}
