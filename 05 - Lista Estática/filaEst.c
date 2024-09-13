#include <stdio.h>
#define MAX 3

#define true 1
#define false 0

typedef int bool;
typedef int TIPOCHAVE;

typedef struct{
	TIPOCHAVE chave;
}REGISTRO;

typedef struct{
	REGISTRO A[MAX];
	int incio;
	int nroElem;
}FILA;


void inicializarFila(FILA *f){
	f->incio = 0;
	f->nroElem = 0;
}


int tamanhoFila(FILA *f){
	return f->nroElem;
}

void listarFila(FILA *f){
	printf("FILA: [ ");
	int i = f->incio;
	int t;
	for (t = 0; t < f->nroElem; t++){
		printf("%d ", f->A[i].chave);
		i = (i + 1) % MAX;
		
	}
	printf(" ] \n");
}



bool inserirElemFila(FILA *f, REGISTRO reg){
	if (f->nroElem >= MAX) return false;
	int posicao = (f->incio + f->nroElem) % MAX;
	f->A[posicao] = reg;
	f->nroElem++;
	return true;
}

bool excluirElemFila (FILA *f, REGISTRO *reg){
	if(f->nroElem == 0) return false;
	*reg = f->A[f->incio];
	f->incio = (f->incio + 1) % MAX;
	f->nroElem--;
	return true;
}


void reinicializarFila(FILA *f){
	inicializarFila (f);
}



int main(){
		
	FILA f;
	
	REGISTRO r;
	
	inicializarFila(&f);
	printf("Tamanho da fila %d \n", tamanhoFila(&f));
	
	r.chave = 10;
	if(inserirElemFila(&f, r))
		printf("Elemento %d inserido com success \n", r.chave);
	else 
		printf("Fila Cheia \n");
	
	/////
		
	r.chave = 20;
	if(inserirElemFila(&f, r))
		printf("Elemento %d inserido com success \n", r.chave);
	else 
		printf("Fila Cheia \n");
			
	/////
	
	r.chave = 30;
	if(inserirElemFila(&f, r))
		printf("Elemento %d inserido com success \n", r.chave);
	else 
		printf("Fila Cheia \n");
		
	/////
	
	r.chave = 40;
	if(inserirElemFila(&f, r))
		printf("Elemento %d inserido com success \n", r.chave);
	else 
		printf("Fila Cheia \n");
		
	printf("Tamanho da fila %d \n", tamanhoFila(&f));	
	
	//////
	
	if(excluirElemFila(&f, &r))
		printf("Senha %d comparecer no caixa 2 \n", r.chave);
	else
		printf("Fila vazia \n");
		
	////	
		
	listarFila(&f);
	
	reinicializarFila(&f);
	
	listarFila(&f);
	
		
	
	return 0;
}