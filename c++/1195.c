#include <stdio.h>
#include <stdlib.h>


typedef struct No {
  int dado;
  struct No *esq;
  struct No *dir;
} No;


No *criar_arvore(int x) {
  No *r = malloc(sizeof(No)*10000);
  r->dado = x;
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
		printf("%d",tree->dado);
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

No* inserirNo(int x, No *tree) {
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
	else{
		tree = malloc(sizeof(No)*10000);
		tree->dado = x;
		  //printf("Valor inserido %d",x);
		  tree->esq = NULL;
		  tree->dir = NULL;
		  //return r;
	}
	return tree;
}


void inordem(No *tree){
	if(tree!=NULL){
		inordem(tree->esq);
		//printNO(tree);
		printf(" %d",tree->dado);
		inordem(tree->dir);
	}
}

void preordem(No *tree){
	if(tree!=NULL){
		printf(" %d",tree->dado);
		preordem(tree->esq);
		preordem(tree->dir);
	}
}

void posordem(No *tree){
	if(tree!=NULL){
		posordem(tree->esq);
		posordem(tree->dir);
		printf(" %d",tree->dado);
	}
}

/*
      função para remover nós da Árvore binária
*/
No* remover(No *raiz, int chave) {
    if(raiz == NULL){
        printf("Valor nao encontrado!\n");
        return NULL;
    } else { // procura o nó a remover
        if(raiz->dado == chave) {
            // remove nós folhas (nós sem filhos)
            if(raiz->esq == NULL && raiz->dir == NULL) {
                free(raiz);
                //printf("Elemento folha removido: %d !\n", chave);
                return NULL;
            }
            else{
                // remover nós que possuem 1 ou 2 filhos
            }
        } else {
            if(chave < raiz->dado)
                raiz->esq = remover(raiz->esq, chave);
            else
                raiz->dir = remover(raiz->dir, chave);
            return raiz;
        }
    }
    return raiz;
}


void destruir(No *raiz) {
  if (raiz) {
    destruir(raiz->esq);
    destruir(raiz->dir);
    free(raiz);
  }
}
int main(void) {
	No *tree;
	tree = criar_arvore(0);
	tree=remover(tree,0);
	
	int c, n, val;
	scanf("%d",&c);
	for(int i = 0; i<c;i++){
		destruir(tree);
		tree = criar_arvore(0);
		tree=remover(tree,0);
		scanf("%d",&n);
		for (int j = 0; j < n; j++){
			scanf("%d",&val);
			tree=inserirNo(val,tree);
		}
		//imprimir
		printf("Case %d:\n",i+1);
		
		printf("Pre.:");
		preordem(tree);
		printf("\n");
		
		printf("In..:");
		inordem(tree);	
		printf("\n");
		
		printf("Post..:");
		posordem(tree);
		printf("\n");
	}
	//printTree(tree);
	//printf("\n");
	//
	return 0;
}
