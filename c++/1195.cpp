#include <iostream>
#include <cstdlib>
using namespace std;

typedef struct No {
  int dado;
  struct No *esq;
  struct No *dir;
  int excluido;
} No;


No *criar_arvore(int x) {
  No *r = malloc(sizeof(No)*10000);
  r->dado = x;
  r->excluido = 0;
  //printf("Valor inserido %d",x);
  r->esq = NULL;
  r->dir = NULL;
  return r;
}

void printTree(No *tree) {
	if(tree!=NULL){
		printf("%d ",tree->dado);
		//printf("/	\n");
		printTree(tree->esq);
		//printf("	\\\n");
		printTree(tree->dir);	
	}
}

void printNO(No *tree){
	if(tree!=NULL)
		printf("%d ",tree->dado);
}
No *procurar(No *tree, int x) {
	//No *auxesq;
	if(tree->dado == x||tree==NULL){
		//achou
		return tree;
	}
	if (x > tree->dado){
		return procurar(tree->dir,x);
	}
	else{
		return procurar(tree->esq,x);
	}
	//n achou
}

void inserirNo(int x, No *tree) {
	if(tree!=NULL){
		if(x > tree->dado){
			if (tree->dir==NULL)
				tree->dir = criar_arvore(x);
			else
				inserirNo(x, tree->dir);
		}else if(tree->esq == NULL){
			tree->esq = criar_arvore(x);
		}else{ 
			inserirNo(x, tree->esq);
		}
	}
}


void inordem(No *tree){
	if(tree!=NULL){
		inordem(tree->esq);
		printNO(tree);
		inordem(tree->dir);
	}
}

int main(void) {
	No *tree = criar_arvore(0);
	//printTree(tree);
	
	int c, n, val;
	scanf("%d",&c);
	for(int i = 0; i<c;i++){
		scanf("%d",&n);
		for (int j = 0; j < n; j++){
			scanf("%d",&val);
			inserirNo(val,tree);
		}
		printTree(tree);
	}
	//printTree(tree);
	//printf("\n");
	//inordem(tree);
	return 0;
}
