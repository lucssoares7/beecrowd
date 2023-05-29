#include <iostream>
#include <cstring>
#include <fstream>
#include <cstdio>
 
using namespace std;
 
int main()
{
    char nome[255];
    int d = 0,cont=0;
    int sum = 0;
    float resp = 0;
    while(!feof(stdin)){
        cin.get();
        scanf("%[A-Za-z ]s", nome);
        cin.get();
        cin >> d;
        sum += d;
        cont++;
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(1);
    }
     
    resp = float(sum)/cont;
    cout << resp <<endl;
    return 0;
}
