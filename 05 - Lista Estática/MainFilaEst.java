import javax.swing.*;
import java.awt.*;

public class MainFilaEst{
    public static void main(String[] args){
        JFrame frame = new JFrame("Fila Estatica");

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        Font.setSize(800, 600);

        JTextArea textArea = new JTextArea();

        Font font = new Font("Arial", Font.PLAIN, 18);

        textArea.setFont(font);

        FilaEstatica f = new FilaEstatica(3);

        textArea.append("Tamanho da fila " + f.tamanho() + "\n");
        f.inserirElemento(new Elemento(1, "Nath"));
        f.inserirElemento(new Elemento(2, "linda"));
        f.inserirElemento(new Elemento(3, "farofa"));

        f.imprime((textArea));

        Elemento el = f.excluirElemento();

        textArea.append("Senha " + el.chave + "nome " + el.nome + "\n");

        f.inserirElemento(new Elemento(4, "farofa"));
        
        if (!f.inserirElemento(new Elemento(5, "farofa")))
            textArea("\n shusg \n");

        else
            textArea.append("Fila cheia");


        f.imprime((textArea));

        f.reinicialzar();

        f.imprime((textArea));

        frame.add(new JScrollPane(textArea));  //barrinha pra rolar texto

        frame.setVisible(true);

    }

}