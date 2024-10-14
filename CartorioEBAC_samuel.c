#include <stdio.h>//biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar das strings

int Registro() //Fun��o respons�vel por cadastrar os usu�rios no sistema
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
	//inicio da cria��o de vari�veis/strings
	char arquivo[40];
	char cpf[40];
	char nome[50];
	char sobrenome[60];
	char cargo[40];
	//final da cria��o de vari�veis/strings
	printf("Digite o CPF a ser cadastrado: "); //coletando informa��o do usus�rio
	scanf("%s", cpf); //%s refere-se a strings
	
	strcpy(arquivo, cpf); //respons�vel por copiar os valores das strings
	
	FILE *file; // cria arquivo
	file = fopen(arquivo, "w");	//cria o arquivo e o "w" significa escrever
	fprintf(file,cpf); //salva o valor da variavel
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a"); // cria o arquivo e o "a" significa atualizar
	fprintf(file,",");
	fclose(file); // fecha o arquivo
	
	printf("Digite o nome a ser cadastrado: "); //coletando informa��o do usus�rio
	scanf("%s",nome); //%s refere-se a strings
	
	file = fopen(arquivo, "a"); // cria o arquivo e o "a" significa atualizar
	fprintf(file,nome); //salva o valor da variavel
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a"); // cria o arquivo e o "a" significa atualizar
	fprintf(file," ");
	fclose(file); // fecha o arquivo
	
	printf("Digite o sobrenome a ser cadastrado: "); //coletando informa��o do usus�rio
	scanf("%s",sobrenome); //%s refere-se a strings
	
	file = fopen(arquivo, "a"); // cria o arquivo e o "a" significa atualizar
	fprintf(file,sobrenome); //salva o valor da variavel
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a"); // cria o arquivo e o "a" significa atualizar
	fprintf(file,",");
	fclose(file); // fecha o arquivo
	
	printf("Digite o cargo a ser cadastrado: "); //coletando informa��o do usus�rio
	scanf("%s",cargo); //%s refere-se a strings
	
	file = fopen(arquivo, "a"); // cria o arquivo e o "a" significa atualizar
	fprintf(file,cargo); //salva o valor da variavel
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a"); // cria o arquivo e o "a" significa atualizar
	fprintf(file,".");
	fclose(file); // fecha o arquivo
	
	system("pause");
	
}

int Consultar()
{
	setlocale(LC_ALL, "Portuguese");  //Definindo a linguagem
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file ==NULL)
	{
		printf("Este CPF n�o est� cadastrado! \n");
	}
	
	while(fgets(conteudo, 200, file)!=NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");
		printf("%s",conteudo);
		printf("\n\n");
	}
	
	system("pause");
}

int Deletar()
{
    char cpf[40];
	
	printf("Digite o CPF a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("Este CPF n�o est� cadastrado! \n");
		system("pause");
	}	
}

int main()
{
	int opcao=0; //Definindo vari�veis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
		
		system("cls");
	
	    setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
	    printf("           Cart�rio da EBAC    \n\n"); //inicio do menu
	    printf("Selecione a op��o que deseja realizar:\n\n");
	    printf("\t1 - Registrar nomes\n");
	    printf("\t2 - Consultar nomes\n");
	    printf("\t3 - Deletar nomes\n");
	    printf("\t4 - Sair do sistema\n\n");
	    printf("\n\n");
	    printf("Op��o:"); //Fim do menu
	
	    scanf("%d",&opcao); //Armazenando a escolha do usu�rio
	
	    system("cls"); //responsavel por limpar a tela
	    
	    switch(opcao)
	    {
	    	//Inicio da sele��o do menu
			case 1: 
	        Registro(); // chamada de fun��es
		    break;
		    
		    case 2:
		    Consultar();
		    break;
		    
		    case 3:
		    Deletar();
		    break;
		    
		    case 4:
		    printf("Obrigado por ultilizar o sistema!\n");
		    return 0;
		    break;
		    
		    default:
			printf("Essa op��o n�o est� disponivel!\n");
		    system("pause");
		    break;
		     //Fim da sele��o do menu   	
		}
	
	    
	}
	
	}

		
	
	
	
	
