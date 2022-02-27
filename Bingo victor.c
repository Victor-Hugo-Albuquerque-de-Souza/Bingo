#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int menu, i, j, qtd, o;
int cartelas[10];

int main() {
    
    setlocale(LC_ALL, "Portuguese");
	system("cls");
    printf ("§§==> BOAS VINDAS AO BINGO BENEFICENTE UNICESUMAR! <==§§\n\n");
    printf ("=============ESCOLHA UMA DAS OPÇÕES ABAIXO: ============\n\n");
    printf ("     1. Informações sobre os benefícios de uma praça;    \n");
    printf ("                  2. Preços por cartela;                \n");
    printf ("                    3. Gerar cartela;                   \n");
    printf ("                         4. Sair                        \n");
    printf ("========================================================\n\n");
    scanf ("%i", &menu);
    
    switch (menu) {
    	case 1:
    		fflush(stdin);
    		system("cls");
    		printf ("COMO AS PRAÇAS INFLUENCIAM A CIDADE? \n\n");
			printf ("A importância das praças como local público vem desde a antiguidade. As cidades eram \n");
 			printf ("construídas partindo de um centro de convivência e de encontros que determinava toda \n");
			printf ("a distribuição do espaço. A importância histórica das praças é comumente lembrada em \n");
			printf ("livros da atualidade ao mencionar as ágoras gregas e os fóruns romanos, demonstrando \n");
			printf ("o espaço como local de intensa manifestação popular. No Brasil, as praças que se as- \n");
			printf ("semelham às celebradas praças medievais são raras, aqui o espaço seco é caracterizado\n");
			printf ("com largo, pátio e outros.\n\n");
			printf ("POR QUE PRECISAMOS DELAS? \n\n");
			printf ("As praças públicas são uma espécie de “patrimônio cultural” dos brasileiros. Afinal, \n");
			printf ("crescemos brincando ao menos uma vez em uma. Seja no interior do país ou nos grandes \n");
			printf ("centros urbanos, o fato é que as pracinhas são essenciais para a vida em sociedade. \n");
			printf ("Por isso, gestores públicos devem se atentar para essa realidade – e essa urgência: \n");
			printf ("é preciso construir verdadeiros refúgios que reúnam verde, espaço de lazer e de in- \n");
			printf ("tegração dos moradores em tempos onde cada vez mais nos escondemos dentro de nossas \n");
			printf ("casas. \n\n");
			system ("pause");
			return main();	
			
		case 2:
			fflush(stdin);
			system("cls");
			printf ("$$$================>   PREÇOS   <===============$$$ \n\n");
			printf ("       Cartela com 10 NÚMEROS ===> R$ 50,00        \n");
			printf ("  Preço especial para maiores de 60 ===> R$ 25,00  \n\n");
			printf ("===================================================\n\n");
			system ("pause");
			return main();
		
		case 3:
			fflush(stdin);
			system ("cls");
			srand( time(NULL));
			printf ("Quantas cartelas devem ser geradas? \n");
			scanf ("%i", &qtd);
			printf("===> Favor, anote os seguintes números e boa sorte! <===\n\n");
    		
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
			printf ("Boa sorte e até a próxima! \n\n");
			printf ("========================== \n");
			system ("pause");
			exit(0);
			
		default:
			fflush(stdin);
			system ("cls");
			printf ("\a======================== \n\n");
			printf ("Digite uma opção válida. \n\n");
			printf ("========================= \n\n");
			system ("pause");
			return main ();
			break;
					}
	system ("pause");
    return 0;
}
