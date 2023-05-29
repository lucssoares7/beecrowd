#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <iterator>

using namespace std;


int n, q;
int inimigos[10000];

void consulta(int esq, int dir){
  cout << dir-esq-1<<endl;
  /*
  for(int i = 0; i<n;i++){
    cout << inimigos[i]<<" ";
  }
  cout<<endl;*/
}

void remover(int chave){
  int dest[n];
  copy_n(inimigos, n, dest);
  inimigos[0]='\0';
  int j = 0;
  for(int i=0;i<n;i++){
    if(dest[i]!=chave){
      //cout << dest[i]<<endl;
      inimigos[j] = dest[i];
      j++;
    }
  }
  
  inimigos[n-1]='\0';
  n--;
}

void inserir(int valor, int pos){
  n++;  
  int dest[n];
  int j = 0;
  for(int i=0;i<n;i++){
    if(i==pos+1){
      dest[i] = valor;
    }else{
      dest[i] = inimigos[j];
      j++;
    }
  }
  inimigos[0]='\0';  
  copy_n(dest, n, inimigos);
}

int busca(int chave){
  for(int i=0;i<n;i++){
    if(inimigos[i]==chave)
      return i;
  }
}

void op(string s){
  //cout << s[0]<<endl;
  switch (s[0]){
    case 'R':
      remover(s[2]-48);
      break;
    case 'I':
      //cout << s[2]<<" "<<s[4]<<endl;
      
      inserir(s[2]-48,busca(s[4]-48));
      break;
    
    case 'Q':
      //cout << s[2]<<" "<<s[4]<<endl;
      consulta(busca(s[2]-48), busca(s[4]-48));
    break;
  }
}
int main() {
  
  string str;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> inimigos[i];
  }
 // cout << preprocess(inimigos,n)<<endl;
  
  cin >> q;
  cin.ignore();
  for (int i = 0; i < q; i++) {
    // cin.ignore(256,'\n');
    // getline(cin, str);
    getline(cin, str, '\n');
    op(str);
    // cout << str<<endl;
    //
  }
  
  return 0;
}
