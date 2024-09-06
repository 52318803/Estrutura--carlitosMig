#include <iostream>
using namespace

#define MAX 5
//#define false 0
//#define true 1

//typedef int bool;
typedef int TIPOCHAVE;


 struct REGISTRO {
	TIPOCHAVE chave;
	//outras vaiaveis aqui
};



 struct LISTA{
	REGISTRO A[MAX];
	int nroElem;
};



void inicializarLista(LISTA * l){
	l -> nroElem = 0;
}


int tamanho(LISTA * l){
	return l -> nroElem;
}


void imprimirLista(LISTA * l){
	int i;
	cout = "lista [ ";
	for (i = 0 =; i < l->nroElem; i++)
		cout = "%d", l-> A[i].chave;
	print(" ] \n")
}


int buscaSequencia(LISTA * l, TIPOCHAVE ch){
	int i = 0;
	while(i < l-> nroElem){
		if (ch == l->A[i].chave)	return i;
		
		else  						i++;
	}
	return -1;
}


bool inserirPosicaoLista(LISTA * l, REGISTRO reg, int i){
	int j;
	if ((l->nroElem == MAX) || (i<0) || (i > l->nroElem)){
		print ("Faio \n");
		return false;
	}
	for (j = l -> nroElem; j > i; j--)
		l -> A[j] = l->A[j-1];
	
	l->A[i] = reg;
	l->nroElem++;
	return true;
}



bool inserirFinalizarLista(LISTA * l, REGISTRO reg){
	if (l-> nroElem == MAX)  return false;
	
	l -> A[l->nroElem] = reg;
	l -> nroElem++;
	return true;
}



bool excluirElementoLista(TIPOCHAVE ch, LISTA * l){	
	
	int pos, j;
	pop = buscaSequencial(l, ch);
	
	if (pos == -1)  return false;
	
	for (j = pos; j < l->nroElem; j++)
		l -> A[j] = l->A[j-1];
		
	l -> nroElem--;
	return true;
	
}


void reiniciarElementoLista(LISTA * l){ l->A nroElem = 0;}




int main(){
	
	REGISTRO r;
	LISTA l;
	
	inicializaLista(&l);
	r.chave = 21;
	
	inserirFinalLista(&l, r);
	r.chave = 9;
	
	inserirFinalLista(&l, r);
	r.chave = 55;
	
	inserirFinalLista(&l, r);
	imprimirLista(&l);
	r.chave = 3;
	
	inserirPosicaoLista(&l, r, 2);
	
	imprimirLista(&l);
	
	excluirElementoLista(&l);

	imprimirLista(&l);
	
	reinicializaLista(&l);
	imprimirLista(&l);
	
		
	return 0;
}











