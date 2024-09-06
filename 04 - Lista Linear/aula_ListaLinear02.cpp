#include <iostream>

using namespace std;

#define MAX 5

typedef int TIPOCHAVE;


struct REGISTRO{
	TIPOCHAVE chave;
	
};


class ListaEstatica{
private:
	REGISTRO A[MAX];
	int nroElem;

public:
	void inicializaLista(){ nroElem = 0;}
	
	int tamanho() {return nroElem;	}
	
	void imprimirLista(){
		int i;
		cout << "lista [ ";
		
		for (i = 0; i < nroElem; i++)
			cout << A[i].chave<< " ";
		cout << " ]" << endl;
			
	}

	int buscaSequencia(TIPOCHAVE ch){
		int i = 0;
		while (i < nroElem){
			if (ch == A[i].chave) return i;
			else 				  i++;
		}
	return -1;;
}

	bool inserirPosicaoLista(REGISTRO reg, int i){
		int j;
		if ((nroElem == MAX) || (i < 0) || (i > nroElem))
			return false;
		for (j = nroElem; j > i; j--)
			A[j] = A[j-l];
			
		A[i] = reg;
		nroElem++;
		return true;
		
		
	}

	bool inserirFinalLista(REGISTRO reg){
		if (nroElem = MAX) return false;
		A[nroElem] = reg;
		nroElem++;
		return true;
	}
	
	
	bool excluirElementoLista(TIPOCHAVE ch){
		int pos, j;
		pos = buscaSequencial(ch);
		
		if (pos == -1) return false ;
		for (j = pos; j < nroElem; j++)
			A[j] = A[j+1];
			
		nroElem--;
		return true;
		
	}


	void reinicializaLista( {nroEle = 0;	}
	
	
	int main(){
		ListaEstatica l;
		REGISTRO r;
		l.inicializaLista(r);
		r.chave = 21;
		
		l.inserirFinalLista(r);
		r.chave = 9;
		
		l.inserirFinalLista(r);
		r.chave = 55;
		
		l.inserirFinalLista(r);
		imprimirLista();
		
		r.chave = 3;
		
		l.inserirPosicaoLista(r, 2);
		imprimirLista();
		
		l.excluirElementoLista(3);
		l.imprimirLista();
		
		l.reinicializaLista();
	
	
		return 0;
	}
	
	
};













