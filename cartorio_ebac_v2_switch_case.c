#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de "aloca��o de espa�o em mem�ria", vai centralizar o armazenamento dos dados em um arquivo (no caso .txt)
#include <locale.h> // biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar das strings, por fazer elas funcionarem 

int registro() //Fun��o respons�vel por cadastrar os usu�rios no sistema
{
	//In�cio da crian��o de vari�veis (neste caso, do tipo strings, representado pelos colchetes)
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//Final da cria��o de vari�veis/strings
	
	printf("Digite o CPF a ser cadastrado: "); //Coletando informa��o do usu�rio
	scanf("%s", cpf);//"%s" refere-se a uma string

	strcpy(arquivo, cpf); //respons�vel por copiar os valores das strings. Neste caso ir� fazer com que o arquivo tenha o mesmo valor (nome) do CPF da pessoa cadastrada, pro usu�rio n�o ter que digitar duas vezes a mesma coisa.
	FILE *file; //cria o arquivo no banco de dados (*file)
	
	file = fopen(arquivo, "w"); //"w" indica que ser� criado um novo arquivo (criar e escrever - write)
	fprintf(file, "CPF: "); //Esta linha foi inclu�da posteriormente, para aparecer certinho quando for CONSULTAR informa��es dos usu�rios; 
	fprintf(file,cpf); //vai salvar o valor da vari�vel (cpf) no arquivo ao inv�s de aparecer na tela para o usu�rio como faria o simples "printf"
	fclose(file);//feita a inser��o do dado, assim como abrimos o arquivo com FOPEN, vamos fech�-lo com FCLOSE
	
	file = fopen(arquivo, "a"); //"fopen" para abrir o arquivo e "a" para atualizar/inserir informa��es e n�o criar um novo arquivo como seria com "w"
	fprintf(file,",\nNOME: "); //"fprintf" para incluir a v�rgula entre um dado e outro e ficar visivelmente melhor.
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s", nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,"\nSOBRENOME: ");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file, sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,"\nCARGO: "); 
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file, cargo);
	fprintf(file,"\n\n"); 
	fclose(file);
	
	system("pause");
	
}


int consulta()
{
	setlocale(LC_ALL, "Portuguese");//Definindo a Linguagem
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s", cpf);
		
	FILE *file;
	file = fopen(cpf,"r"); //"w" para criar, "a" para atualizar/incluir informa��es e "r" para ler (read)
	
	
	if(file == NULL)
	{
		printf("\nN�o foi poss�vel abrir o arquivo. N�o localizado!\n\n");
		system("pause");
		system("cls");
	}
	
	printf("\nEssas s�o as informa��es do usu�rio: \n\n");

	while(fgets(conteudo, 200, file) != NULL ) 
	{
		printf("%s", conteudo);
	}
	fclose(file);
	system("pause");

}


int deletar()
{
	char cpf[40];
	
	printf("Digite o CPF do usu�rio a ser deletado: ");
	scanf("%s", cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf("\nO usu�rio n�o se encontra no sistema! \n\n");
		system("pause");
	}
		
}

int main ()
{
	int opcao=0; //Definindo vari�veis: s�mbolo = atribui o valor a vari�vel opcao. == est� comparando e n�o atribuindo
	int laco=1;


	for(laco=1;laco=1;)
	{//In�cio da sele��o "for"
		
		system("cls");//para n�o aparecer todo o menu novamente dentro do "for" e sim apenas a escolha do usu�rio, como por exemplo "Voc� escolheu registrar nomes!"
		
		setlocale(LC_ALL, "Portuguese");//Definindo a Linguagem
	
		printf("#### Cart�rio da EBAC ###\n\n");//In�cio do Menu. "printf" � um comando para o texto aparecer para o usu�rio
		printf("Escolha a op��o desejada no menu abaixo:\n\n");
		printf("\t1 - Registrar nomes\n");
		printf("\t2 - Consultar nomes\n");
		printf("\t3 - Deletar nomes\n\n");
		printf("Op��o: ");//Fim do Menu
	
		scanf("%i", &opcao); //scanf armazena o dado que o usu�rio digitar,o %i ou %d � porque o dado vai ser um n�mero INTeiro e o &opcao indica a vari�vel
	
		system("cls"); //comando para o sistema (cls) limpar a tela. 
		
		switch(opcao)
		{
			case 1:
			registro(); //chamada de fun��es
			break;
			
			case 2:
			consulta();
			break;
			
			case 3:
			deletar();
			break;
			
			default:
			printf("Op��o inv�lida. Selecione 1 para Registrar Nomes, 2 para Consultar Nomes ou 3 para Deletar Nomes.\n");
			system("pause");//serve para o programa n�o ser encerrado ap�s o usu�rio selecionar a op��o desejada, retornando ent�o para o menu.
			break;
			
		}
	
				
	}//Fim da sele��o "for" 
	
}

