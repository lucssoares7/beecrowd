#include <iostream>
#include <cmath>
 
using namespace std;

int main() {
  int totaldias,resto;
  int anos, meses, dias;
  cin >> totaldias;
  anos = totaldias/365;
  resto = totaldias%365;
  cout << anos <<" ano(s)"<<endl;
  meses = resto/30;
  resto = resto%30;
  cout << meses <<" mes(es)"<<endl;
  cout <<resto<<" dia(s)"<<endl;
return 0;
}