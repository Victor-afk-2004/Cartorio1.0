#include <stdio.h> // biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h>//biblioteca de aloca��o de testo por regi�o
#include <string.h>//biblioteca respons�vel por cuidar dos string

int registro()

{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite seu CPF ");
	scanf("%s",cpf);
	
	strcpy(arquivo, cpf); // responsavel por copiar os valores string
	
	FILE *file;   // cria o arquivo
	file=fopen(arquivo,"W");  //cria o arquivo
	fprintf(file,cpf);  //salvo o valor da variavel
	fclose(file);  //fecha o arquivo
	
	file=fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	
	printf("Digite seu nome:");
	scanf("%s",nome);
	
	file=fopen(arquivo,"a");
	fprintf(file,nome);
	fclose(file);	
	
    file=fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite seu sobrenome:");
	scanf("%s",sobrenome);
	
	file=fopen(arquivo,"a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file=fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite seu cargo");
	scanf("%s",cargo);
	
	file=fopen(arquivo,"a"),
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");
	
}

int consulta()

{
	setlocale(LC_ALL,"Portuguese");
	char cpf[40];
	char conteudo[200];
	
	printf("Digite seu CPF:");
	scanf("%s",cpf);
	
	FILE* file;
	file=fopen(cpf,"r");
	
	if(file==NULL)
	{
		printf("Arquivo n�o encontrado. \n");
	
	}
	
	{
		while(fgets(conteudo,200,file)!=NULL)
		printf("\nEssas informa��es s�o do usu�rio:");
		printf("%s",conteudo);
		printf("\n\n");
	}
	system("pause");
	
}

int deletar()

{
	char cpf[40];
	
	printf("Digite o CPF a ser deletado: ");
	scanf("%s",cpf);
	
	remove (cpf);
	
	FILE* file;
	file=fopen(cpf,"r");
	
	if(file==NULL)
	{
		printf("Usu�rio n�o encontrado");
		system("pause");
	}
}

int main()

{
int opcao=0;

int laco=1;
for(laco=1;laco==1;)

{

system("cls");

setlocale(LC_ALL,"Portuguese");

   printf("### Cart�rio Curso ###\n\n");                                                                                             
   printf("Escolha a op��o desejada do menu\n\n");
   printf("\t1 - Registrar nomes\n");
   printf("\t2 - Consultar nomes\n");
   printf("\t3 - Deletar nomes\n"); 
   printf("\t4 - Sa�da do sistema\n");
   printf("Op��o:");
   
   scanf("%d", &opcao);
   
   system("cls");
   
   switch(opcao)
   {
   
   	    case 1:
          printf("Voc� escolheu registro de nomes\n");
   	    system("pause");
   	    break;
   	
   	    case 2:
   	    printf("Voc� escolheu consultar nomes\n");
   	    system("pause");
   	    break;
   	
        case 3:
   	    printf("Voc� escolheu deletar nomes\n");
   	    system("pause");
   	    break;
   	    
   	    case 4:
   	    printf("At� a pr�xima");
   	    return 0;
   	    break;
   	
   	
   	
   	     default:
   	    printf("Est� op��o n�o est� disponivel\n");
   	    system("pause");
   	    break;
   }
   
   
   }
   
}
