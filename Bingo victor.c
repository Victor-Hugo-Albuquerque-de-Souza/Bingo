#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int menu, i, j, qtd, o;
int cartelas[10];

int main() {
    
    setlocale(LC_ALL, "Portuguese");
	system("cls");
    printf ("��==> BOAS VINDAS AO BINGO BENEFICENTE UNICESUMAR! <==��\n\n");
    printf ("=============ESCOLHA UMA DAS OP��ES ABAIXO: ============\n\n");
    printf ("     1. Informa��es sobre os benef�cios de uma pra�a;    \n");
    printf ("                  2. Pre�os por cartela;                \n");
    printf ("                    3. Gerar cartela;                   \n");
    printf ("                         4. Sair                        \n");
    printf ("========================================================\n\n");
    scanf ("%i", &menu);
    
    switch (menu) {
    	case 1:
    		fflush(stdin);
    		system("cls");
    		printf ("COMO AS PRA�AS INFLUENCIAM A CIDADE? \n\n");
			printf ("A import�ncia das pra�as como local p�blico vem desde a antiguidade. As cidades eram \n");
 			printf ("constru�das partindo de um centro de conviv�ncia e de encontros que determinava toda \n");
			printf ("a distribui��o do espa�o. A import�ncia hist�rica das pra�as � comumente lembrada em \n");
			printf ("livros da atualidade ao mencionar as �goras gregas e os f�runs romanos, demonstrando \n");
			printf ("o espa�o como local de intensa manifesta��o popular. No Brasil, as pra�as que se as- \n");
			printf ("semelham �s celebradas pra�as medievais s�o raras, aqui o espa�o seco � caracterizado\n");
			printf ("com largo, p�tio e outros.\n\n");
			printf ("POR QUE PRECISAMOS DELAS? \n\n");
			printf ("As pra�as p�blicas s�o uma esp�cie de �patrim�nio cultural� dos brasileiros. Afinal, \n");
			printf ("crescemos brincando ao menos uma vez em uma. Seja no interior do pa�s ou nos grandes \n");
			printf ("centros urbanos, o fato � que as pracinhas s�o essenciais para a vida em sociedade. \n");
			printf ("Por isso, gestores p�blicos devem se atentar para essa realidade � e essa urg�ncia: \n");
			printf ("� preciso construir verdadeiros ref�gios que re�nam verde, espa�o de lazer e de in- \n");
			printf ("tegra��o dos moradores em tempos onde cada vez mais nos escondemos dentro de nossas \n");
			printf ("casas. \n\n");
			system ("pause");
			return main();	
			
		case 2:
			fflush(stdin);
			system("cls");
			printf ("$$$================>   PRE�OS   <===============$$$ \n\n");
			printf ("       Cartela com 10 N�MEROS ===> R$ 50,00        \n");
			printf ("  Pre�o especial para maiores de 60 ===> R$ 25,00  \n\n");
			printf ("===================================================\n\n");
			system ("pause");
			return main();
		
		case 3:
			fflush(stdin);
			system ("cls");
			srand( time(NULL));
			printf ("Quantas cartelas devem ser geradas? \n");
			scanf ("%i", &qtd);
			printf("===> Favor, anote os seguintes n�meros e boa sorte! <===\n\n");
    		
			for (j=0; j < qtd; j++) {
				o = j + 1;
				printf ("Cartela %i ==> ", o);
				for (i=0 ; i < 10 ; i++){
    			cartelas [i] = rand () % 99;
    			printf("%i ", cartelas [i]);	
                }
            	printf ("\n"); 
				}

        	printf ("\n\n");
        	system ("pause");
        	return main ();
			
		case 4:
			fflush(stdin);
			system("cls");
			printf ("========================== \n\n");
			printf ("Boa sorte e at� a pr�xima! \n\n");
			printf ("========================== \n");
			system ("pause");
			exit(0);
			
		default:
			fflush(stdin);
			system ("cls");
			printf ("\a======================== \n\n");
			printf ("Digite uma op��o v�lida. \n\n");
			printf ("========================= \n\n");
			system ("pause");
			return main ();
			break;
					}
	system ("pause");
    return 0;
}
