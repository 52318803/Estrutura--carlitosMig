#include <stdio.h>
#define MAX 3
#define true 1
#define false 0

typedef int bool;
typedef int TIPOCHAVE;

typedef struct{
	TIPOCHAVE chave;
	//outros campos
} REGISTRO;


typedef struct{
	REGISTRO A[MAX];
	int topo;
} PILHA;




void inicializarPilha(PILHA *p){
	p->topo = -1;
}



int tamanhoPilha(PILHA *p){
	return p->topo + 1;
}



void listaPilha(PILHA *p){
	printf("pilha [");
	int i;
	for (i = p->topo; i >= 0; i--){
		printf("%d ", p->A[i].chave);
	}
	printf("] \n");
}


//push = inserir
bool pushPilha(PILHA *p, REGISTRO reg){
	if (p->topo >= MAX - 1) return false;
	
//	p->topo++;
//	p->A[p->topo] = reg;
	
	p->A[++p->topo] = reg;
		
	return true;
}


//pop = retirar
bool popPilha(PILHA *p, REGISTRO *reg){
	if (p->topo == -1) return false;
	
	*reg = p->A[p->topo];
	p->topo--;
	return true;
}



void reinicializarPilha(PILHA *p){
	p->topo = -1;
}




int main(){
	
	PILHA p;
	REGISTRO r;
	
	inicializarPilha(&p);
	
	printf("Tamanho da Pilha %d \n", tamanhoPilha(&p));
	
	
		/////////////////
	
	
	r.chave = 10;
	
	if (pushPilha(&p, r))
		printf("Elemento %d inserido com sucesso \n", r.chave);
	
	else 
		printf("Erro, pilha cheia \n");

		
	
	r.chave = 20;
	
	if (pushPilha(&p, r))
		printf("Elemento %d inserido com sucesso \n", r.chave);
	
	else 
		printf("Erro, pilha cheia \n");
	
	
	
	r.chave = 30;
	
	if (pushPilha(&p, r))
		printf("Elemento %d inserido com sucesso \n", r.chave);
	
	else 
		printf("Erro, pilha cheia \n");
	
	
	
	r.chave = 40;
	
	if (pushPilha(&p, r))
		printf("Elemento %d inserido com sucesso \n", r.chave);
	
	else 
		printf("Erro, pilha cheia \n");
		
		
		/////////////////
	
	listaPilha(&p);
	
	if (popPilha(&p, &r))
		printf("Elemento excluido %d \n", r.chave);
	
	else
		printf("Erro, nao ha elemento a pilha \n");
	
	
		/////////////////
		
	reinicializarPilha(&p);
	
	listaPilha(&p);
	
	
return 0;

}









