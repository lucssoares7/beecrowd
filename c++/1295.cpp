#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <math.h>
#include <algorithm>
#include <iostream>
 
 
using namespace std;
 
// Estrutura que representa um ponto
typedef struct Point{
  double x, y;
}Point;
 
//Distância euclidiana, ou distância entre dois pontos
double dist(Point p1, Point p2) {
  return sqrt((p2.x - p1.x) * (p2.x - p1.x) +  (p2.y - p1.y) * (p2.y - p1.y));
}
 
// Retorna o minimo entre dois valores double
double minOfTwo(double x, double y)
{
    return (x < y)? x : y;
}
 
/*Algoritmo de forca bruta, onde P[] são os pontos e "n" o seu tamanho*/
double brute(Point P[], int n) {
  double menorDist = FLT_MAX; //FLT_MAX gera o "maior número possível" ou seja nenhum numero "inputado" vai ser maior que ele
  for(int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if(dist(P[i], P[j]) < menorDist) {
        menorDist = dist(P[i], P[j]);
      }
    }
  }
  return menorDist;
}
 
/*Os compares são necessários para o qsort do C++*/
int compareX(const void* a, const void* b)
{
    Point *p1 = (Point *)a,  *p2 = (Point *)b;
    return (p1->x - p2->x);
}
 
int compareY(const void* a, const void* b)
{
    Point *p1 = (Point *)a,   *p2 = (Point *)b;
    return (p1->y - p2->y);
}
 
/*Função para encontrar os pontos mais próximos da linha que divide o plano
  Os pontos são ordenados de acordo com a coordenada y
lembrando que o d = min(dl, dr)
  */
double nearVertic(Point vertLine[], int size, double d) {
 
  double minimo = d;
  qsort(vertLine, size, sizeof(Point), compareY);
 
  for (int i = 0; i < size; ++i){
      for (int j = i+1; j < size && (vertLine[j].y - vertLine[i].y) < minimo; ++j) {
          if (dist(vertLine[i], vertLine[j]) < minimo){
              minimo = dist(vertLine[i], vertLine[j]);
          }
      }
  }
  return minimo;
}
 
//função para retornar a menor distancia, a array P esta ordenada de acordo com
//a coordenada x, n é o tamanho de P
double closest(Point P[], int n) {
 
  //caso haja 3 pontos ou menos, resolve por força bruta
  if(n <= 3 ) {
    return brute(P, n);
  }
 
  //ponto médio
  int middle = n/2;
  Point midPoint = P[middle];
 
  //achando a menor distancia entre o lado direito e o esquerdo
  double dl = closest(P, middle);
  double dr = closest(P + middle, n - middle);
 
  //Menor das duas distancias
  double d = minOfTwo(dl, dr);
 
  //construindo uma array que contem os pontos mais próximos da linha central do que d
  Point nearVL[n]; //de nearVerticalLine
  int j = 0;
  for (int i = 0; i < n; i++) {
    if ((P[i].x - midPoint.x) < d) { //abs pra no caso de num a direita do pontomedio
      /* code */
      nearVL[j] = P[i];
      j++;
    }
  }
 
  return minOfTwo(d, nearVertic(nearVL, j, d));
}
 
  bool compare(Point a, Point b){
    if(a.x <= b.x){
        return true;
    }else{
        return false;
    }
  }
  //funão principal que chama a função closest
  double closestPair(Point P[], int n) {
    //qsort(P, n, sizeof(Point), compareX); //ordenando pelos pontos x
    sort(P,P+n,compare);
    /*for (int i = 0; i < n; i++){
        cout << P[i].x <<" "<<P[i].y<<endl;
    }*/
     
    //return 1.1;
    return closest(P, n);
  }
 
  
   
  int main()
  {
      int n=0;
      double d;
       
      while(scanf("%d",&n) && n>0) {
        Point P[n];
        for (int i = 0; i < n; i++) {
          /* code */
          //scanf("%d %d", &P[i].x, &P[i].y);
          cin >> P[i].x >> P[i].y;
        }
        d = closestPair(P, n);
        if(d >= 10000) {
          printf("INFINITY\n");
        }else {
          printf("%.4lf\n", d);
        }
      }
    return 0;
  }
