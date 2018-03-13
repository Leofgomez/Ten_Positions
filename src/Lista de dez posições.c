/*
	Name: Fila de dez posi��es
	Copyright: 
	Author: Leonardo Fernandes Gomez - RA: 20151469;
	Date: 01/09/16 21:38
	Description: Fila de dez posi��es com in�cio e fim alteraveis pelo usu�rio
*/

#include <stdio.h>
#include <stdlib.h>

	int fila[10];
	int inicio=-1;
	int fim=0; //fim ser�o posi�oes positivas
	int numdigi;
	void inicia_fila(){
		inicio =-1; //definindo inicio para posi��es negativas
	}
	void insert_inicio(){ //fun��o de inser��o de dados no inicio da fila
		if (inicio >= -5){
		printf("Digite um dado: ");
		scanf("%i", &fila[inicio]); //lendo no vetor fila na posi��o inicio
		inicio--;
	}else {
		printf("Lista cheia!!");
	}
 }
 	 insert_fim(){ //fun��o de inser��o de dados no fim da fila
		if (fim < 5){
		printf("Digite um dado: ");
		scanf("%i", &fila[fim]);
		fim++;
	}else {
		printf("Lista cheia!!");
	}
}
	void altera(){ //altera valores em uma posi��o
		int pos;
 		printf("\n Digite a posicao \n");
 		scanf("%i", &pos);
 		printf("Digite o novo valor: ");
 		scanf("%i", &numdigi);
 		fila[pos] = numdigi;
 		printf("\nValor alterado com sucesso!");
	 }
    /*void altera_fim(){ //altera valores em uma posi��o
 		printf("\n Digite o novo valor: \n");
 		scanf("%i", &numdigi);
 		fila[fim] = numdigi;
 		printf("\nValor alterado com sucesso!");
	 } caso queira fazer um esquema de alterar apenas no �nicio ou apenas no fim*/ 
 
 	void show(){
 		int j;
	 	for(j = (inicio+1); j<fim;j++){
		printf("(%i)",fila[j]);
	} 
}
 	void del_inicio(){ //deleta no inicio
 		inicio++;
 }
 	void del_fim(){ //deleta no fim
 		fim--;
 }
 	main(){
		int posi;
		int x = 1;
	do{
		printf("\n1 - inicia a fila");
		printf("\n2 - inserir no inicio");
		printf("\n3 - inserir no fim");	
		printf("\n4 - mostrar a fila");
		printf("\n5 - deletar no inicio");
		printf("\n6 - deletar no fim");
		printf("\n7 - alterar dados da fila");
		printf("\n8 - sair");
		printf("\nEscolha qual opcao: ");
		scanf("%i", &posi);
	switch(posi){
		case 1:
		system("cls"); 
		inicia_fila();
	break;
	case 2:
		system("cls");
		insert_inicio();
	break;
	case 3:
		system("cls");
		insert_fim();
	break;
	case 4:
		system("cls");
		show(); //mostra tudo
	break;
	case 5:
		system("cls");
		del_inicio(); //deleta no inicio
	break;
	case 6:
		system("cls");
		del_fim(); //deleta no fim
	break;
	case 7:
		system("cls");
		altera(); //altera valores
	break;
	case 8:
		x=-1;
		system("cls");
	break;
	}
	}while(x > 0);
}
