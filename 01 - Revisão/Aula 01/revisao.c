#include <stdio.h>
#include <string.h>


int main(){
	int idade;
	float salario;
	double altura;
	char tamanho;
	char nome[30];    //*nome;   ele é um ponteiro de guarda endereço de memoria -- 
	
	idade = 19;
	salario = 5.0000;
	altura = 1.63;
	tamanho = 'm';
	strcpy(nome, "nathy nathy");  //nome = "nathy nathy";
	
	printf( "nome %s  \n ", nome);
	printf("idade %d  \n", idade );
	printf("pretencao salarial %f  \n", salario );;
	printf("altura %lf  \n", altura );    // LF é do tipo double
	printf("tamanho do uniforme %c  \n", tamanho);
	

}