import javax.swing.JTextArea;

class Elemento{
    int chave;
    String nome;

    Elemento (int chave, String nome){   //consultor
        this.chave = chave;
        this.nome = nome;
    }
}


class FilaEstatica {
    int inicio;
    int numElem;
    int max;
    Elemento[] fila;

    FilaEstatica(int max){
        fila = new Elemento[max];
        inicio = 0;
        numElem = 0;
        this.max = max;
    }

    int tamanho() {return numElem;}

    boolean inserirElemento(Elemento l){
        if (numElem >= max) return false;
        int posicao = (inicio +numElem) % max;
        fila[posicao] = l;
        numElem++;
        return true;
    }

    Elemento excluirElemento(){
        if (numElem == 0) return null;
        Elemento l = fila[inicio];
        inicio = (inicio + 1) % max;
        numElem--;
        return l;
    }

    void reinicialzar(){
        inicio = 0;
        numElem = 0;

    }

    void imprime(JTextArea txt){  //isso é um ponteiro
        txt.append("\n Listagem da Fila \n");
        int pos = inicio;
        for(int i = 0; i < numElem; i++){
            txt.append("chave " + fila[pos].chave + "nome " + fila[pos].chave + "\n");
            pos = (pos + 1) % max;
        }

        txt.append("--------------------------------");
    }

}    













