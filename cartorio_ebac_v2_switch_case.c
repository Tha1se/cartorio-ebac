#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de "alocação de espaço em memória", vai centralizar o armazenamento dos dados em um arquivo (no caso .txt)
#include <locale.h> // biblioteca de alocações de texto por região
#include <string.h> //biblioteca responsável por cuidar das strings, por fazer elas funcionarem 

int registro() //Função responsável por cadastrar os usuários no sistema
{
	//Início da crianção de variáveis (neste caso, do tipo strings, representado pelos colchetes)
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//Final da criação de variáveis/strings
	
	printf("Digite o CPF a ser cadastrado: "); //Coletando informação do usuário
	scanf("%s", cpf);//"%s" refere-se a uma string

	strcpy(arquivo, cpf); //responsável por copiar os valores das strings. Neste caso irá fazer com que o arquivo tenha o mesmo valor (nome) do CPF da pessoa cadastrada, pro usuário não ter que digitar duas vezes a mesma coisa.
	FILE *file; //cria o arquivo no banco de dados (*file)
	
	file = fopen(arquivo, "w"); //"w" indica que será criado um novo arquivo (criar e escrever - write)
	fprintf(file, "CPF: "); //Esta linha foi incluída posteriormente, para aparecer certinho quando for CONSULTAR informações dos usuários; 
	fprintf(file,cpf); //vai salvar o valor da variável (cpf) no arquivo ao invés de aparecer na tela para o usuário como faria o simples "printf"
	fclose(file);//feita a inserção do dado, assim como abrimos o arquivo com FOPEN, vamos fechá-lo com FCLOSE
	
	file = fopen(arquivo, "a"); //"fopen" para abrir o arquivo e "a" para atualizar/inserir informações e não criar um novo arquivo como seria com "w"
	fprintf(file,",\nNOME: "); //"fprintf" para incluir a vírgula entre um dado e outro e ficar visivelmente melhor.
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
	file = fopen(cpf,"r"); //"w" para criar, "a" para atualizar/incluir informações e "r" para ler (read)
	
	
	if(file == NULL)
	{
		printf("\nNão foi possível abrir o arquivo. Não localizado!\n\n");
		system("pause");
		system("cls");
	}
	
	printf("\nEssas são as informações do usuário: \n\n");

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
	
	printf("Digite o CPF do usuário a ser deletado: ");
	scanf("%s", cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf("\nO usuário não se encontra no sistema! \n\n");
		system("pause");
	}
		
}

int main ()
{
	int opcao=0; //Definindo variáveis: símbolo = atribui o valor a variável opcao. == está comparando e não atribuindo
	int laco=1;


	for(laco=1;laco=1;)
	{//Início da seleção "for"
		
		system("cls");//para não aparecer todo o menu novamente dentro do "for" e sim apenas a escolha do usuário, como por exemplo "Você escolheu registrar nomes!"
		
		setlocale(LC_ALL, "Portuguese");//Definindo a Linguagem
	
		printf("#### Cartório da EBAC ###\n\n");//Início do Menu. "printf" é um comando para o texto aparecer para o usuário
		printf("Escolha a opção desejada no menu abaixo:\n\n");
		printf("\t1 - Registrar nomes\n");
		printf("\t2 - Consultar nomes\n");
		printf("\t3 - Deletar nomes\n\n");
		printf("Opção: ");//Fim do Menu
	
		scanf("%i", &opcao); //scanf armazena o dado que o usuário digitar,o %i ou %d é porque o dado vai ser um número INTeiro e o &opcao indica a variável
	
		system("cls"); //comando para o sistema (cls) limpar a tela. 
		
		switch(opcao)
		{
			case 1:
			registro(); //chamada de funções
			break;
			
			case 2:
			consulta();
			break;
			
			case 3:
			deletar();
			break;
			
			default:
			printf("Opção inválida. Selecione 1 para Registrar Nomes, 2 para Consultar Nomes ou 3 para Deletar Nomes.\n");
			system("pause");//serve para o programa não ser encerrado após o usuário selecionar a opção desejada, retornando então para o menu.
			break;
			
		}
	
				
	}//Fim da seleção "for" 
	
}

