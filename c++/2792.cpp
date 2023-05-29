#include <iostream>
#include <cmath>
 
using namespace std;

int main() {
   int Ca=0,Ba=0,Pa=0,Cr=0,Pr=0,Br=0,R=0;

  cin >> Ca>>Ba>>Pa;
  cin >>Cr>>Br>>Pr;
  //cout << Cr-Ca<<endl;
  if(Cr-Ca>0){
    R+=Cr-Ca;
  }
  if(Br-Ba>0){
    R+=Br-Ba;
  }
  if(Pr-Pa>0){
    R+=Pr-Pa;
  }
  cout << R <<endl;
  return 0;
}