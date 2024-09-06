class Elemento {
    int chave;
    String nome;
    Elemento(int chave, String nome){
        this.chave = chave;
        this.nome = nome;

    }
}

class ListaEstatica {
    int numElem;
    int max;
    Elemento[] lista;
    ListaEstatica(int max){
        lista = new Elemento[max];
        numElem = 0;
        this.max = max;

    }

    int tamanho (){return numElem;}
    
    boolean insereFinalLista(Elemento l){
        if (numElem == max) return false;
        lista[numElem] = l;
        numElem++;
        return true;
    }

    boolean insereNaPosicao(Elemento l, int pos){
        if ((numElem == max) || (pos < 0) || 
        (pos > numElem)) return false;

        for (int i = numElem; i > pos; i--){
            lista[i] = lista[i-1];
        }

        lista[pos] = l;
        numElem++;
        return true;
    }


    void imprime(){
        for (int i = 0; i < numElem; i++){
            System.ou.println("chave " + 
            lista[i].chave + " nome " +
            lista[i].nome);
        }
    }

    public static void main(String[] args){
        
        System.out.println("Lista estatica");
        
        ListaEstatica le = new ListaEstatica(5);
        
        le.insereFinalLista(new Elemento(1, "nathy"));
        le.insereFinalLista(new Elemento(3, "franco"));
        le.insereFinalLista(new Elemento(4,"nhee"));

        le.imprime();

        le.insereNaPosicao(new Elemento(2, "frango frito"))

        le.imprime();

    }


}


