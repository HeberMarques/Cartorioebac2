#include <stdio.h> //Biblioteca de comunica��o com o usuario
#include <stdlib.h> //Biblioteca de aloca��o de espa�o em memoria
#include <locale.h> //Biblioteca de aloca��o de texto por regi�o
#include <string.h> //biblioteca responsavel por cuidar das string

int registro() //Func��o responsavelpor cadastrar os usuarios do sistema
{
	//Inicio cria��o de variaveis/string
char arquivo[40];
char cpf[40];
char nome[40];
char sobrenome[40];
char cargo[40];
//Final da cria��o de variaveis/string

printf("Digite o CPF a ser cadastrado"); //Coletando informa��o do usuario
scanf("%s", cpf);

strcpy(arquivo, cpf); //Responsavel por criar os valores do string

FILE *file; // cria o arquivo
file =  fopen(arquivo, "w"); //cria o arquivo
fprintf(file,cpf); // Salvo o valor da variaval
fclose(file); // fecha o arquivo

file = fopen(arquivo, "a");
fprintf(file,",");
fclose(file);

printf("Digite o nome a ser cadastrado");
scanf("%s" ,nome);

file = fopen(arquivo, "a");
fprintf(file,nome);
fclose(file);

file = fopen(arquivo, "a");
fprintf(file,",");
fclose(file);

printf("Digite o sobre nome a ser cadastrado: ");
scanf("%s",sobrenome);

file = fopen(arquivo, "a");
fprintf(file,sobrenome);
fclose(file);

file = fopen(arquivo, "a");
fprintf(file,",");
fclose(file);

printf("Digite o cargo a ser cadastrado: ");
scanf("%s",cargo);

file = fopen(arquivo, "a");
fprintf(file,cargo);
fclose(file);

system("pause");



}

int consulta()
{
	
	setlocale(LC_ALL, "Portuguese"); //Definindo a Linguagem
	
  char cpf[40];
  char conteudo[200];
  
  printf("Digite o CPF a ser consultado: ");
  scanf("%s", cpf);
  
  FILE *file;
  file = fopen(cpf,"r");
  if(file == NULL)
  {
  	printf("N�o foi possivel abrir o arquivo localizado. \n");
  }
  
  while(fgets(conteudo, 200, file) != NULL)

{
    printf("\nEssas s�o as informa��es do usuario: ");
    printf("%s" , conteudo);
    printf("\n\n");
}

system("pause");

}
int deletar()
{
    printf("Voc� escolheu deletar nomes!\n");
     system("pause");	
}




int main()
{
	int opcao=0;  //Definindo variaveis
	int x=1;
	
	for(x=1;x=1;)
	{
		system("cls");
	
setlocale(LC_ALL, "Portuguese"); //Definindo a Linguagem


 printf("###C�rtorio da EBAC ###\n\n"); //Inicio do Menu
 printf("Escolha a op��o desejada do menu: \n\n");
 printf("\t1 - Registrar nomes\n");
 printf("\t2 - Consultar nomes\n");
 printf("\t3 - Deletar nomes\n\n"); 
 printf("Opcao: ");//Final do Menu


   scanf("%d", &opcao); //armazenando a escolha do usuario

   system("cls");
   
   switch(opcao)
   {
   	case 1:
   	registro();
	break;
	
	case 2:
	consulta();
	break;
	
	
	case 3: 
	deletar();
	break;
	
		
	default:printf("Essa opcao nao esta disponivel!\n");
     system("pause");
	break;	
	
   	}
	   }
}
   

   
