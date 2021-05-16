#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include <conio.h>

int main (void)
{


	keybd_event ( VK_MENU, 0x38, 0, 0 );
	keybd_event ( VK_SPACE, 0x39, 0, 0 );
	keybd_event(0x58,0,0,0);
	keybd_event ( VK_MENU, 0x38, KEYEVENTF_KEYUP, 0 );
	keybd_event ( VK_SPACE, 0x39, KEYEVENTF_KEYUP, 0 );
	keybd_event(0x58,0,KEYEVENTF_KEYUP,0);
	// o c?digo em cima faz com que pressione a tecla ALT + SPACE + X = Tela cheia


	system("MODE con cols=100 lines=50");// Seta o tamanho da janela


	int menu;
	int submenu;


	//Variavel de L?gica Propisicional1  e LP2
	int p, q;


	//Variaveis somatoria
	int n,m=0, somatorio = 0,j;


	//Variaveis de matrizes
	int a11, a12, a21, a22;
	int b11, b12, b21, b22;
	int c11, c12, c21, c22;
	int resu_dprincipal = 0;
	int resu_doposta = 0;
	int resu_deter = 0;


	//Variaveis de analise combinatoria
	int n_analise, k_analise;
	int resu_analise;
	int ni;
	int resu_final;
	int aux;

	int formulak, formulan;

/*---------------------------------------------------------------------- PARTE 2 ContC ---------------------------------------------------------------------*/
	
	float k, x, kaux, xaux, xa, xb;
	double resufx, resufxaux;
	




	//inicio programa

	char resposta;
	menuprincipal:
	system ("cls");
	system ("Color 3");
	printf("\n\n");

    printf("\n");
	printf(" \t\t\t\t\tContCContC    ContCContC\n");
	printf(" \t\t\t\t\tContCContC    ContCContC\n");
	printf(" \t\t\t\t\tContCContC    ContCContC\n");
	printf(" \t\t\t\t\t     ContC    ContC\n");
	printf(" \t\t\t\t\t     ContC    ContC\n");
	printf(" \t\t\t\t\t     ContC    ContC\n");
	printf(" \t\t\t\t\t     ContC    ContC\n");
	printf(" \t\t\t\t\t     ContC    ContC\n");
	printf(" \t\t\t\t\tContCContC    ContCContC\n");
	printf(" \t\t\t\t\tContCContC    ContCContC\n");
	printf(" \t\t\t\t\tContCContC    ContCContC\n");
	printf("\n");
	printf("\n\n____________________________________________________________________________________________________\n\n\n");
	printf("\t\t\t\t      M E N U    P R I N C I P A L \n\n\n");
	printf(" 1- Somatoria\n");
	printf(" 2- Logica proposicional\n");
	printf(" 3- Matrizes\n");
	printf(" 4- Analise combinatoria\n");
	printf(" 5- Proximo\n");
	printf(" 6- Sair\n\n");
	printf(" Escolha uma opcao: ");
	menu = getch() - 48;
	//scanf("%d", &menu);
	printf("\n");
	switch (menu)
	{
		case 1: //Somatoria
		voltarlinha44:
		system ("cls");
	    printf("\n     ");
	    printf("");
	    printf("\n\t\t S O M A T O R I A ");
	    printf("\n\n\n");
	    printf("\n 1- Somatorio de j = M ate N para a regra j\n");
	    printf(" 2- Somatorio de j = M ate N para a regra (-j) ^ (j + 1)\n");
	    printf(" 3- Voltar ao menu anterior\n");
		printf("\n\n Escolha uma opcao: ");
		submenu = getch() - 48;
		//scanf("%d", &submenu);
		switch (submenu)
			{

				case 1:
					m=0;
					n=0;
					somatorio = 0;
					system ("cls");
					printf ("\n\n");
					printf(" Informe o valor de M: ");
   					scanf("%d",&m);
   					printf(" Informe o valor de N: ");
   					scanf("%d",&n);
		   			while (m <= n)
    				{
        	 			somatorio = somatorio + m ;
         				m = m + 1;
        			}
        			printf("\n****************************************************************************************************\n\n");
        			printf("\t\t\t\t O valor da somatoria e %d", somatorio);
        			printf("\n\n\n****************************************************************************************************\n\n");
        			printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        			system ("pause");
        			goto voltarlinha44;

				break;


        		case 2:
        			m=0;
        			n=0;
        			somatorio = 0;
        			system ("cls");
        			printf ("\n\n");
        			printf(" Informe o valor de M: ");
   					scanf("%d",&m);
   					printf(" Informe o valor de N: ");
   					scanf("%d",&n);

            		somatorio=0;

            		for(m;m<=n;m++)
					{
            			j=pow(-m,m+1);
            			somatorio=somatorio+j;
            		}

            		printf("\n****************************************************************************************************\n\n");
            		printf("\t\t\t\t O valor da somatoria e: %d         ",somatorio);
            		printf("\n\n\n****************************************************************************************************\n\n");
            		printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            		system ("pause");
        			goto voltarlinha44;

				break;


				case 3:

					goto menuprincipal;

				break;


				default:

					goto voltarlinha44;

				break;
			}


		break;


		case 2: //Logica Proposicional


	    	iniciologica:
	    	system ("cls");
	    	printf("\n     ");
	    	printf("");
	    	printf("\n\t\t L O G I C A     P R O P O S I C I O N A L ");
	    	printf("\n\n\n");
			printf("\n 1- ~p\n");
			printf(" 2- ~q\n");
			printf(" 3- p ^ q\n");
			printf(" 4- p v q\n");
			printf(" 5- p v_ q\n");
			printf(" 6- p -> q\n");
			printf(" 7- p <-> q\n");
			printf(" 8- Voltar ao menu anterior\n");
			printf("\n\n Escolha uma opcao: ");
			submenu = getch() - 48;
			//scanf("%d", &submenu);
			switch (submenu)
			{
			case 1:		//Negacao de p
				voltarcase1:
				system ("cls");
				printf ("\n\n Informe um valor para p (1 para verdadeiro e 0 para falso): ");
				scanf("%d", &p);
	        	if (p>1)
				{
					goto voltarcase1;
				}
				printf("\n****************************************************************************************************\n\n");
	        	printf ("\t\t\t\t O valor da negacao de p: %d", !p);
	        	printf("\n\n\n****************************************************************************************************\n\n");
				printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				system ("pause");
				goto iniciologica;
			break;

			case 2:		//negacaoo de q
				voltarcase2:
				system ("cls");
				printf ("\n\n Informe um valor para q (1 para verdadeiro e 0 para falso): ");
	        	scanf("%d", &q);
	        	if (q>1)
				{
				goto voltarcase2;
				}
				printf("\n****************************************************************************************************\n\n");
	        	printf ("\t\t\t\t O valor da negacao de q: %d", !q);
	        	printf("\n\n\n****************************************************************************************************\n\n");
				printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				system ("pause");
				goto iniciologica;
			break;

			case 3:		//p e q
				voltarcase3:
				system ("cls");
	        	printf ("\n Informe um valor para p (1 para verdadeiro e 0 para falso): ");
	        	scanf("%d", &p);
	        	if (p>1)
				{
				goto voltarcase3;
				}
	        	printf (" Informe um valor para q (1 para verdadeiro e 0 para falso): ");
	        	scanf("%d", &q);
	        	if (q >1)
				{
				goto voltarcase3;
				}
	        	printf("\n****************************************************************************************************\n\n");
	        	printf ("\t\t\t\t O valor de p e q: %d",p&&q);
	        	printf("\n\n\n****************************************************************************************************\n\n");
	        	printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				system ("pause");
				goto iniciologica;
			break;

			case 4:		//p ou q
				voltarcase4:
				system ("cls");
	        	printf ("\n Informe um valor para p (1 para verdadeiro e 0 para falso): ");
	        	scanf("%d", &p);
	        	if (p>1)
				{
				goto voltarcase4;
				}
	        	printf (" Informe um valor para q (1 para verdadeiro e 0 para falso): ");
	        	scanf("%d", &q);
	        	if (q>1)
				{
				goto voltarcase4;
				}
	        	printf("\n****************************************************************************************************\n\n");
	        	printf ("\t\t\t\t O valor de p ou q: %d",p||q);
	        	printf("\n\n\n****************************************************************************************************\n\n");
	        	printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				system ("pause");
				goto iniciologica;
			break;

			case 5:		//Ou exclusivo
					voltarcase5:
					system ("cls");
					printf ("\n Informe um valor para p (1 para verdadeiro e 0 para falso): ");
	        		scanf("%d", &p);
	        	if (p>1)
				{
					goto voltarcase5;
				}
	        		printf (" Informe um valor para q (1 para verdadeiro e 0 para falso): ");
	        		scanf("%d", &q);
	        	if (q>1)
				{
					goto voltarcase5;
				}
				if (p != q)
				{
					printf("\n****************************************************************************************************\n\n");
					printf("\t\t\t\t O valor da proposicao: 1");
					printf("\n\n\n****************************************************************************************************\n\n");
					printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
					system ("pause");
					goto iniciologica;
				}
				else
				{
					printf("\n****************************************************************************************************\n\n");
					printf("\t\t\t\t O valor da proposicao: 0");
					printf("\n\n\n****************************************************************************************************\n\n");
					printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
					system ("pause");
					goto iniciologica;
				}
			break;

			case 6: //se...ent?o
					voltarcase6:
					system ("cls");
					printf ("\n Informe um valor para p (1 para verdadeiro e 0 para falso): ");
	        		scanf("%d", &p);
	        	if (p>1)
				{
					goto voltarcase6;
				}
	        		printf (" Informe um valor para q (1 para verdadeiro e 0 para falso): ");
	        		scanf("%d", &q);
	        	if (q>1)
				{
					goto voltarcase6;
				}
				if (q == 1 || (p== 0 && q == 0))
				{
					printf("\n****************************************************************************************************\n\n");
					printf ("\t\t\t\t O valor da proposicao e: 1");
					printf("\n\n\n****************************************************************************************************\n\n");
					printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
					system ("pause");
					goto iniciologica;
				}
				else
				{
					printf("\n****************************************************************************************************\n\n");
					printf("\t\t\t\tO valor da proposicao e: 0");
					printf("\n\n\n****************************************************************************************************\n\n");
					printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
					system ("pause");
					goto iniciologica;
				}

			break;

			case 7: //se...somente se
				voltarcase7:
				system ("cls");
				printf ("\n Informe um valor para p (1 para verdadeiro e 0 para falso): ");
	        	scanf("%d", &p);
	        	if (p>1)
				{
					goto voltarcase7;
				}
	        		printf (" Informe um valor para q (1 para verdadeiro e 0 para falso): ");
	        		scanf("%d", &q);
	        	if (q>1)
				{
					goto voltarcase7;
				}
					if (p== q)
				{
					printf("\n****************************************************************************************************\n\n");
					printf ("\t\t\t\t O valor da proposicao: 1");
					printf("\n\n\n****************************************************************************************************\n\n");
					printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
					system ("pause");
					goto iniciologica;
				}
				else
				{
					printf("\n****************************************************************************************************\n\n");
					printf("\t\t\t\t O valor da proposicao: 0");
					printf("\n\n\n****************************************************************************************************\n\n");
					printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
					system ("pause");
					goto iniciologica;
				}

			break;

			case 8:
				//return 0;
				goto menuprincipal; // Retorna para a linha 15
			break;

			default:
				system ("cls");
				goto iniciologica; // Retorna para a linha 43

			break;

		}
			break; //Fim LOGICA PROPOSICIONAL


		case 3:
			voltarlinha372:

			system ("cls");
			printf ("\n\n\t\t M A T R I Z E S ");
			printf("\n\n\n");
			printf("\n 1- Determinante\n");
			printf(" 2- Soma\n");
			printf(" 3- Subtracao\n");
			printf(" 4- Produto\n");
			printf(" 5- Voltar ao menu anterior\n");
			printf("\n\n Escolha uma opcao: ");
			submenu = getch() - 48;
			//scanf("%d", &submenu);
			system ("cls");
			switch (submenu)
			{
				case 1:


					a11,a12,a21,a22=0;	//zerar variaveis
					c11,c12,c21,c22=0;	//zerar variaveis

					system ("cls");
					printf ("\n\n\t\t Nesta versao a calculadora trabalha \n\t\t apenas com uma matriz 2x2.\n\t\t Fique ligado nas proximas versoes!:D \n\n\n\n");
					printf(" Elemento [1][1]: ");
					scanf("%d",&a11);
					printf(" Elemento [1][2]: ");
					scanf("%d",&a12);
					printf(" Elemento [2][1]: ");
					scanf("%d",&a21);
					printf(" Elemento [2][2]: ");
					scanf("%d",&a22);

					resu_dprincipal = a11 * a22;
					resu_doposta = a21 * a12;

					resu_deter = resu_dprincipal - resu_doposta;


					printf("\n****************************************************************************************************\n\n");
					printf("\t\t\t\t Resultado da determinante: %d", resu_deter);
					printf("\n\n\n****************************************************************************************************\n\n");

					printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
					system ("pause");

					goto voltarlinha372; //Volta ao menu principal de Matrizes

				break;





				// Inicio calculo de DETERMINANTE
				case 2:
					a11,a12,a21,a22=0;	//zerar variaveis
					c11,c12,c21,c22=0;


				//matriz A

					system ("cls");
					printf ("\n\n\t\t Nesta versao a calculadora trabalha \n\t\t apenas com uma matriz 2x2.\n\t\t Fique ligado nas proximas versoes! :D \n\n\n\n");
					printf(" Elemento [1][1]: ");
					scanf("%d",&a11);
					printf(" Elemento [1][2]: ");
					scanf("%d",&a12);
					printf(" Elemento [2][1]: ");
					scanf("%d",&a21);
					printf(" Elemento [2][2]: ");
					scanf("%d",&a22);

					//Matriz B
					printf("\n\n Segunda matriz\n\n");
					printf(" Elemento [1][1]: ");
					scanf("%d",&b11);
					printf(" Elemento [1][2]: ");
					scanf("%d",&b12);
					printf(" Elemento [2][1]: ");
					scanf("%d",&b21);
					printf(" Elemento [2][2]: ");
					scanf("%d",&b22);

					c11 = a11+b11;
					c12 = a12+b12;
					c21 = a21+b21;
					c22 = a22+b22;

					printf("\n****************************************************************************************************\n\n");
					printf("\t\t Resultado da soma das matrizes \n\n");
					printf ("\n");
					printf("\t\t\t %d   \t%d\n", c11,c12);
					printf("\n");
					printf("\t\t\t %d   \t%d\n", c21,c22);
					//printf("\n");
					printf("\n\n\n****************************************************************************************************\n\n");
					printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
					system ("pause");
					goto voltarlinha372;  //Volta ao menu principal de Matrizes
				break;



				case 3:

					//Matriz A
					system ("cls"); //  <--  Limpando tela
					printf ("\n\n\t\t Nesta versao a calculadora trabalha \n\t\t apenas com uma matriz 2x2.\n\t\t Fique ligado nas proximas versoes! :D \n\n\n\n");
					printf(" Elemento [1][1]: ");
					scanf("%d",&a11);
					printf(" Elemento [1][2]: ");
					scanf("%d",&a12);
					printf(" Elemento [2][1]: ");
					scanf("%d",&a21);
					printf(" Elemento [2][2]: ");
					scanf("%d",&a22);

					//Matriz B
					printf("\n\n Segunda matriz\n\n");
					printf(" Elemento [1][1]: ");
					scanf("%d",&b11);
					printf(" Elemento [1][2]: ");
					scanf("%d",&b12);
					printf(" Elemento [2][1]: ");
					scanf("%d",&b21);
					printf(" Elemento [2][2]: ");
					scanf("%d",&b22);

					c11 = a11-b11;
					c12 = a12-b12;
					c21 = a21-b21;
					c22 = a22-b22;

					printf("\n****************************************************************************************************\n\n");
					printf("\t\t Resultado da subtracao das matrizes \n\n");
					printf ("\n");
					printf("\t\t\t %d   \t%d\n", c11,c12);
					printf("\n");
					printf("\t\t\t %d   \t%d\n", c21,c22);
					//printf("\n");
					printf("\n\n\n****************************************************************************************************\n\n");
					printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
					system ("pause");
					goto voltarlinha372;  //Volta ao menu principal de Matrizes


				break;

				case 4:
						//Matriz A
					system ("cls"); //  <--  Limpando tela
					printf ("\n\n\t\t Nesta versao a calculadora trabalha \n\t\t apenas com uma matriz 2x2.\n\t\t Fique ligado nas proximas versoes! :D \n\n\n\n");
					printf(" Elemento [1][1]: ");
					scanf("%d",&a11);
					printf(" Elemento [1][2]: ");
					scanf("%d",&a12);
					printf(" Elemento [2][1]: ");
					scanf("%d",&a21);
					printf(" Elemento [2][2]: ");
					scanf("%d",&a22);

					//Matriz B
					printf("\n\n Segunda matriz\n\n");
					printf(" Elemento [1][1]: ");
					scanf("%d",&b11);
					printf(" Elemento [1][2]: ");
					scanf("%d",&b12);
					printf(" Elemento [2][1]: ");
					scanf("%d",&b21);
					printf(" Elemento [2][2]: ");
					scanf("%d",&b22);

					c11 = (a11 * b11) + (a12 * b21);
					c12 = (a11 * b12) + (a12 * b22);
					c21 = (a21 * b11) + (a22 * b21);
					c22 = (a21 * b12) + (a22 * b22);

					printf("\n****************************************************************************************************\n\n");
					printf("\t\t Resultado do produto das matrizes \n\n");
					printf ("\n");
					printf("\t\t\t %d   \t%d\n", c11,c12);
					printf("\n");
					printf("\t\t\t %d   \t%d\n", c21,c22);
					//printf("\n");
					printf("\n\n\n****************************************************************************************************\n\n");
					printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
					system ("pause");
					goto voltarlinha372;  //Volta ao menu principal de Matrizes
				break;

				case 5:
					goto menuprincipal;
				break;

				default:
					goto voltarlinha372;
				break;

			}

		break;


	case 4:
			/*
			int n_analise, k_analise;
			int resu_analise;
			*/
			voltarlinha558:
			system ("cls");
			printf ("\n\n\t\t A N A L I S E   C O M B I N A T O R I A ");
			printf("\n\n\n");
			printf("\n 1- Permutacao simples\n");
			printf(" 2- Arranjo simples\n");
			printf(" 3- Combinacao simples\n");
			printf(" 4- Voltar ao menu anterior\n");
			printf("\n\n Escolha uma opcao: ");
			submenu = getch() - 48;
			//scanf("%d", &submenu);
			system ("cls");
			switch (submenu)
			{
				case 1:
					// at? 12 ? o m?ximo
					voltarlinha605:
					system ("cls");
					printf ("\n\t Limitamos o valor de N ate 12 para que o resultado seja preciso! \n\n\n");
					printf (" Informe o valor de N: ");
					scanf ("%d", &n_analise);
					if(n_analise > 12 || n_analise < 0)
					{
						goto voltarlinha605;
					}
					ni = n_analise;

  						for (resu_analise = 1; n_analise > 1; n_analise = n_analise - 1)
						{
						  	resu_analise = resu_analise * n_analise ;

						  	 /*
						 	Este for faz a seguinte contagem:
							Resultado come?a em 1 para n?o zerar o resultado (OBS: n*0 = 0)
							Enquanto numero digitado for maior do que 1 entra no FOR e faz a segunte conta

							resultado = resultado vezes o numero digitado

							ai do for e ent?o numero digitado passa a ser ele menos 1 (n! = n*n *( n-1 ) * (n - 2 ) * (n - 3 ) ... ( n - (n + 1))

							*/
						}
						printf("\n****************************************************************************************************\n\n");
						printf ("\t\t%d! =  %d\n",ni, resu_analise);
	        			printf("\n\n\n****************************************************************************************************\n\n");
						printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
						system ("pause");
						goto voltarlinha558;


				break;


				case 2:

						linha639:
						aux = 0;
						voltarlinha647:
						system ("cls");
						printf ("\n Para ARRANJO SIMPLES o valor de N nao pode ser inferior a K e");
						printf ("\n limitamos o valor de N e K ate 12 para que o resultado seja preciso! \n\n\n");
						printf (" Informe o valor de N: ");
						scanf ("%d", &n_analise);
						if(n_analise > 12 || n_analise < 0)
						{
						goto voltarlinha647;
						}

						printf (" Informe o valor de K: ");
						scanf ("%d", &k_analise);
						if(k_analise > 12 || k_analise < 0)
						{
						goto voltarlinha647;
						}

						formulan = n_analise;
						formulak = k_analise;

						aux = n_analise - k_analise;

						if (aux < 0 )
						{
							goto linha639;
						}

							for (resu_analise = 1; n_analise > aux  ; n_analise = n_analise - 1)
						 	{

						  		resu_analise = resu_analise * n_analise;
						  		//printf("Resultado: %d\n", resu_analise);
						  	}

						printf("\n****************************************************************************************************\n\n");
						printf("\t\t\t\t    %d! \n",formulan);
						printf("\t\t\t\t  ------  =\t %d \n", resu_analise);
						printf("\t\t\t\t  (%d - %d)!\n",formulan, formulak);
	        			printf("\n\n\n****************************************************************************************************\n\n");
						printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
						system ("pause");

						goto voltarlinha558;

				break;


				case 3:

						voltarlinha696:
						voltarlinha697:
						system ("cls");
						aux = 0;
						printf ("\n Para COMBINACAO SIMPLES o valor de N nao pode ser inferior a K e");
						printf ("\n limitamos o valor de N e K ate 12 para que o resultado seja preciso! \n\n\n");
						printf (" Informe o valor de N: ");
						scanf ("%d", &n_analise);
						if(n_analise > 12 || n_analise < 0)
						{
						goto voltarlinha697;
						}

						printf (" Informe o valor de K: ");
						scanf ("%d", &k_analise);
						if(k_analise > 12 || k_analise < 0)
						{
						goto voltarlinha697;
						}

						formulan = n_analise;
						formulak = k_analise;

						int resu_analisek;

						if (n_analise < k_analise)
						{
							goto voltarlinha696;
						}

						aux = n_analise - k_analise;

							for (resu_analise = 1; n_analise > aux  ; n_analise = n_analise - 1)
						 	{

						  		resu_analise = resu_analise * n_analise;

						  	}

						  	for (resu_analisek = 1; k_analise > 0  ; k_analise = k_analise - 1)
						 	{

						  		resu_analisek = resu_analisek * k_analise;

						  	}

								resu_analise = resu_analise / resu_analisek;
								printf("\n****************************************************************************************************\n\n");
								printf("\t\t\t\t    %d! \n",formulan);
								printf("\t\t\t\t  --------    =\t %d \n", resu_analise);
								printf("\t\t\t\t %d!.(%d - %d)!\n", formulak, formulan, formulak);
	        					printf("\n\n\n****************************************************************************************************\n\n");
								printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
								system ("pause");
								//printf("Resultado: %d\n", resu_analise);
								goto voltarlinha558;

				break;

				case 4:
					goto menuprincipal;
				break;

				default:
					goto voltarlinha558;
				break;


			}


	break;
	
	case 5:
		menuprincipal2: 
		system ("cls");
		printf("\n\n");
		printf("\n");
		printf(" \t\t\t\t\tContCContC    ContCContC\n");
		printf(" \t\t\t\t\tContCContC    ContCContC\n");
		printf(" \t\t\t\t\tContCContC    ContCContC\n");
		printf(" \t\t\t\t\t     ContC    ContC\n");
		printf(" \t\t\t\t\t     ContC    ContC\n");
		printf(" \t\t\t\t\t     ContC    ContC\n");
		printf(" \t\t\t\t\t     ContC    ContC\n");
		printf(" \t\t\t\t\t     ContC    ContC\n");
		printf(" \t\t\t\t\tContCContC    ContCContC\n");
		printf(" \t\t\t\t\tContCContC    ContCContC\n");
		printf(" \t\t\t\t\tContCContC    ContCContC\n");
		printf("\n");
		printf("\n\n____________________________________________________________________________________________________\n\n\n");
		printf("\t\t\t\t      M E N U    P R I N C I P A L \n\n\n");
		printf(" 1- f(x) = k\n");
		printf(" 2- f(x) = x^k\n");
		printf(" 3- f(x) = k^x\n");
		printf(" 4- f(x) = ln(x)\n");
		printf(" 5- f(x) = 1/x\n");
		printf(" 6- f(x) = sen(x)\n");
		printf(" 7- f(x) = cos(x)\n");
		printf(" 8- f(x) = tg(x)\n");
		printf(" 9- Menu anterior\n");
		printf("\n\n Escolha uma opcao: ");
		menu = getch() - 48;
		//scanf("%d", &menu);
		printf("\n");
		switch (menu)
						/*
							Variaveis utilizando: 
							float k, x, kaux, xaux, xa, xb;
							double resufx, resufxaux;
						*/
		{
			/* ------------------------------------------- Inicio da 1 opção -----------------------------------------------------------*/
			case 1: 
					menu1submenu1:
					system ("cls");
				    printf("\n     ");
				    printf("");
				    printf("\n\t\t F(X) = K ");
				    printf("\n\n\n");
				    printf("\n 1- Calcular a aplicacao de um valor na funcao f(x)\n");
				    printf(" 2- Calcular a aplicacao de um valor na derivada f'(x)\n");
				    printf(" 3- Calcular a integral definida da função f(x) no intervalo a <= x <= b\n");
				    printf(" 4- Voltar ao menu anterior");
				  	printf("\n\n Escolha uma opcao: ");
					submenu = getch() - 48;
					//scanf("%d", &submenu);
					switch (submenu)
					{
						case 1:
							
							system ("cls");
							printf ("\n\n\n\n");
							printf ("\tPara a funcao desejada e necessario entrar com o valor de K: ");
							scanf ("%f", &k);
							printf ("\tEntre agora com o valor de X: ");
							scanf ("%f", &x);
							printf("\n\n\t\t f(%.2f) = %.2f", x, k);
							printf ("\n\n\n\n\n\n\n\n\n");
							system ("pause");
							goto menu1submenu1;
							
						break;
						
						case 2:
							
							system ("cls");
							printf ("\n\n\n\n");
							printf ("\tEntre agora com o valor de X: ");
							scanf ("%f", &x);
							printf("\n\n\t\t f(%.2f) = 0", x);
							printf ("\n\n\n\n\n\n\n\n\n");
							system ("pause");
							goto menu1submenu1;
							
						break;
						
						/*
							Variaveis utilizando: 
							float k, x, kaux, xaux, xa, xb;
							double resufx, resufxaux;
						
						
						case 3:
							
							system ("cls");
							printf ("\n\n\n\n");
							printf ("\tEntre agora com o valor de a: ");
							scanf ("%f", &xa);
							printf ("\tEntre agora com o valor de b: ");
							scanf ("%f", &xb);
							resufx = xa - xb
							printf("\n\n\t\t ", resufx);
							printf ("\n\n\n\n\n\n\n\n\n");
							system ("pause");
							goto menu1submenu1;
							
						break;
							
						*/
						
						case 4:
							goto menuprincipal2;
						break;
						
						default:
							goto menu1submenu1;
						break;
						
					}
				
			break;
			
			/* ---------------------------------------------- Inicio da 2 opção ---------------------------------------------------------*/
			
			case 2:
					menu2submenu1:
					system ("cls");
				    printf("\n     ");
				    printf("");
				    printf("\n\t\t F(X) = X^K ");
				    printf("\n\n\n");
				    printf("\n 1- Calcular a aplicacao de um valor na funcao f(x)\n");
				    printf(" 2- Calcular a aplicacao de um valor na derivada f'(x)\n");
				    printf(" 3- Calcular a integral definida da funcao f(x) no intervalo a <= x <= b\n");
				    printf(" 4- Voltar ao menu anterior");
				  	printf("\n\n Escolha uma opcao: ");
					submenu = getch() - 48;
					//scanf("%d", &submenu);
					switch (submenu)
					{
						case 1:
							
							system ("cls");
							printf ("\n\n\n\n");
							printf ("\tPara a funcao desejada e necessario entrar com o valor de K: ");
							scanf ("%f", &k);
							printf ("\tEntre agora com o valor de X: ");
							scanf ("%f", &x);
							resufx = pow(k,x);
							printf("\n\n\t\t f(%.2f) = %.2lf", k, resufx);
							printf ("\n\n\n\n\n\n\n\n\n");
							system ("pause");
							goto menu2submenu1;
							
						break; 
						
						
						case 2:
							
							system ("cls");
							printf ("\n\n\n\n");
							printf ("\tPara a funcao desejada e necessario entrar com o valor de K: ");
							scanf ("%f", &k);
							printf ("\tEntre agora com o valor de X: ");
							scanf ("%f", &x);
							resufx = k * (pow(x,(k-1)));
							printf("\n\n\t\t f'(%.2f) = %.2lf", x, resufx);
							printf ("\n\n\n\n\n\n\n\n\n");
							system ("pause");
							goto menu2submenu1;
							
						break;
						
												
						case 3:
							
							system ("cls");
							printf ("\n\n\n\n");
							printf ("\tPara a funcao desejada e necessario entrar com o valor de K: ");
							scanf ("%f", &k);
							printf ("\tEntre agora com o valor de a: ");
							scanf ("%f", &xa);
							printf ("\tEntre agora com o valor de b: ");
							scanf ("%f", &xb);
							resufx = (pow(xb,(k+1))/(k+1)) - (pow(xa,(k+1))/(k+1));
							printf("\n\n\t\t i (%.2f,%.2f) = %.6f",xa,xb, resufx);
							printf ("\n\n\n\n\n\n\n\n\n");
							system ("pause");
							goto menu2submenu1;
							
						break;
						
						case 4:
							goto menuprincipal2;
						break;
						
						default:
							goto menu2submenu1;
						break;
						
					}
			break;
				
				/* ---------------------------------------------- Inicio da 3 opção ---------------------------------------------------------*/
							
			case 3:
					menu3submenu1:
					system ("cls");
				    printf("\n     ");
				    printf("");
				    printf("\n\t\t F(X) = K^X ");
				    printf("\n\n\n");
				    printf("\n 1- Calcular a aplicacao de um valor na funcao f(x)\n");
				    printf(" 2- Calcular a aplicacao de um valor na derivada f'(x)\n");
				    printf(" 3- Calcular a integral definida da funcao f(x) no intervalo a <= x <= b\n");
				    printf(" 4- Voltar ao menu anterior");
				  	printf("\n\n Escolha uma opcao: ");
					submenu = getch() - 48;
					//scanf("%d", &submenu);
					switch (submenu)
					{
						case 1:
							
							system ("cls");
							printf ("\n\n\n\n");
							printf ("\tPara a funcao desejada e necessario entrar com o valor de K: ");
							scanf ("%f", &k);
							printf ("\tEntre agora com o valor de X: ");
							scanf ("%f", &x);
							resufx = pow(x,k);
							printf("\n\n\t\t f(%.2f) = %.2lf", x, resufx);
							printf ("\n\n\n\n\n\n\n\n\n");
							system ("pause");
							goto menu3submenu1;
							
						break; 
						
						case 2:
						
							system ("cls");
							printf ("\n\n\n\n");
							printf ("\tPara a funcao desejada e necessario entrar com o valor de K: ");
							scanf ("%f", &k);
							printf ("\tEntre agora com o valor de X: ");
							scanf ("%f", &x);
							kaux = k;
							if (kaux < 0) 
							{
								kaux = kaux * (-1);
							}
							resufx = pow(k,x) * (log(kaux));
							printf("\n\n\t\t f(%.2f) = %.6lf", x, resufx);
							printf ("\n\n\n\n\n\n\n\n\n");
							system ("pause");
							goto menu3submenu1;
							
						break;
						
							
						case 3:
							
							system ("cls");
							printf ("\n\n\n\n");
							printf ("\tPara a funcao desejada e necessario entrar com o valor de K: ");
							scanf ("%f", &k);
							printf ("\tEntre agora com o valor de a: ");
							scanf ("%f", &xa);
							printf ("\tEntre agora com o valor de b: ");
							scanf ("%f", &xb);
							resufx = ((pow(k,xb)) - (pow(k,xa)))/(log(k)) ;
							printf("\n\n\t\t i (%.2f,%.2f) = %.6f",xa,xb, resufx);
							printf ("\n\n\n\n\n\n\n\n\n");
							system ("pause");
							goto menu3submenu1;
							
						break;
						
						case 4:
							goto menuprincipal2;
						break;
						
						default:
							goto menu3submenu1;
						break;
					}
			break; 
			
			/* ---------------------------------------------- Inicio da 4 opção ---------------------------------------------------------*/
			
			
			case 4:
					menu4submenu1: 
					system ("cls");
				    printf("\n     ");
				    printf("");
				    printf("\n\t\t f(x) = ln(x) ");
				    printf("\n\n\n");
				    printf("\n 1- Calcular a aplicacao de um valor na funcao f(x)\n");
				    printf(" 2- Calcular a aplicacao de um valor na derivada f'(x)\n");
				    printf(" 3- Calcular a integral definida da funcao f(x) no intervalo a <= x <= b\n");
				    printf(" 4- Voltar ao menu anterior");
				  	printf("\n\n Escolha uma opcao: ");
					submenu = getch() - 48;
					//scanf("%d", &submenu);
					switch (submenu)
					{
						case 1:
						
							system ("cls");
							printf ("\n\n\n\n");
							printf ("\tEntre agora com o valor de X: ");
							scanf ("%f", &x);
							resufx = log (x);
							printf("\n\n\t\t f(%.2f) = %.6lf", x, resufx);
							printf ("\n\n\n\n\n\n\n\n\n");
							system ("pause");
							goto menu4submenu1;
							
						break; 
						
						case 2:
							
							system ("cls");
							printf ("\n\n\n\n");
							printf ("\tEntre agora com o valor de X: ");
							scanf ("%f", &x);
							resufx = 1/x;
							printf("\n\n\t\t f(%.2f) = %.6lf", x, resufx);
							printf ("\n\n\n\n\n\n\n\n\n");
							system ("pause");
							goto menu4submenu1;
							
						break;
						
							/*
							Variaveis utilizando: 
							float k, x, kaux, xaux, xa, xb;
							double resufx, resufxaux;
							*/
							
						case 3:
							
							system ("cls");
							printf ("\n\n\n\n");
							//printf ("\tPara a funcao desejada e necessario entrar com o valor de K: ");
							///scanf ("%f", &k);
							printf ("\tEntre agora com o valor de a: ");
							scanf ("%f", &xa);
							printf ("\tEntre agora com o valor de b: ");
							scanf ("%f", &xb);
							resufx = (xb*log(xb)) - (xb-xa) - (xa*log(xa));
							printf("\n\n\t\t i (%.2f,%.2f) = %.6f",xa,xb, resufx);
							printf ("\n\n\n\n\n\n\n\n\n");
							system ("pause");
							goto menu4submenu1;
							
						break;
						
						case 4:
							goto menuprincipal2;
						break;
						
						default:
							goto menu4submenu1;
						break;
					}
			break;
			
			
			/* ---------------------------------------------- Inicio da 5 opção ---------------------------------------------------------*/
						
			case 5:
					menu5submenu1: 
					system ("cls");
				    printf("\n     ");
				    printf("");
				    printf("\n\t\t f(x) = ln(x) ");
				    printf("\n\n\n");
				    printf("\n 1- Calcular a aplicacao de um valor na funcao f(x)\n");
				    printf(" 2- Calcular a aplicacao de um valor na derivada f'(x)\n");
				    printf(" 4- Voltar ao menu anterior");
				  	printf("\n\n Escolha uma opcao: ");
					submenu = getch() - 48;
					//scanf("%d", &submenu);
					switch (submenu)
					{
						case 1:
						
							system ("cls");
							printf ("\n\n\n\n");
							printf ("\tEntre agora com o valor de X: ");
							scanf ("%f", &x);
							resufx = 1/x;
							printf("\n\n\t\t f(%.6f)", resufx);
							printf ("\n\n\n\n\n\n\n\n\n");
							system ("pause");
							goto menu5submenu1;
							
						break; 
						
						case 2:
							
							system ("cls");
							printf ("\n\n\n\n");
							printf ("\tEntre agora com o valor de X: ");
							scanf ("%f", &x);
							resufx = 1/x;
							printf("\n\n\t\t f(%.6f)", resufx);
							printf ("\n\n\n\n\n\n\n\n\n");
							system ("pause");
							goto menu5submenu1;
							
						break;
						
						case 4:
							
							goto menuprincipal2;
							
						break;
						
						default:
							
							goto menu5submenu1;
							
						break;
			
						break;
					}	
			
			/* ---------------------------------------------- Inicio da 6 opção ---------------------------------------------------------*/
			
			case 6:
				
				menu6submenu1: 
					system ("cls");
				    printf("\n     ");
				    printf("");
				    printf("\n\t\t f(x) = sen(x) ");
				    printf("\n\n\n");
				    printf("\n 1- Calcular a aplicacao de um valor na funcao f(x)\n");
				    printf(" 2- Calcular a aplicacao de um valor na derivada f'(x)\n");
				    printf(" 4- Voltar ao menu anterior");
				  	printf("\n\n Escolha uma opcao: ");
					submenu = getch() - 48;
					//scanf("%d", &submenu);
					switch (submenu)
					{
						case 1:
						
							system ("cls");
							printf ("\n\n\n\n");
							printf ("\tEntre agora com o valor de X: ");
							scanf ("%f", &x);
							resufx = sin (x);
							printf("\n\n\t\t f(%.6f)", resufx);
							printf ("\n\n\n\n\n\n\n\n\n");
							system ("pause");
							goto menu6submenu1;
							
						break; 
						
						case 2:
							
							system ("cls");
							printf ("\n\n\n\n");
							printf ("\tEntre agora com o valor de X: ");
							scanf ("%f", &x);
							resufx = cos (x);
							printf("\n\n\t\t f(%.6f)", resufx);
							printf ("\n\n\n\n\n\n\n\n\n");
							system ("pause");
							goto menu6submenu1;
							
						break;
						
						case 4:
							
							goto menuprincipal2;
							
						break;
						
						default:
							
							goto menu6submenu1;
							
						break;
			
						break;
					}
			break;
				
			/* ---------------------------------------------- Inicio da 7 opção ---------------------------------------------------------*/
				
			case 7:
				
					menu7submenu1: 
					system ("cls");
				    printf("\n     ");
				    printf("");
				    printf("\n\t\t f(x) = cos(x) ");
				    printf("\n\n\n");
				    printf("\n 1- Calcular a aplicacao de um valor na funcao f(x)\n");
				    printf(" 2- Calcular a aplicacao de um valor na derivada f'(x)\n");
				    printf(" 4- Voltar ao menu anterior");
				  	printf("\n\n Escolha uma opcao: ");
					submenu = getch() - 48;
					//scanf("%d", &submenu);
					switch (submenu)
					{
						case 1:
						
							system ("cls");
							printf ("\n\n\n\n");
							printf ("\tEntre agora com o valor de X: ");
							scanf ("%f", &x);
							resufx = cos (x);
							printf("\n\n\t\t f(%.6f)", resufx);
							printf ("\n\n\n\n\n\n\n\n\n");
							system ("pause");
							goto menu7submenu1;
							
						break; 
						
						case 2:
						
							system ("cls");
							printf ("\n\n\n\n");
							printf ("\tEntre agora com o valor de X: ");
							scanf ("%f", &x);
							resufx = - sin(x);
							printf("\n\n\t\t f(%.6f)", resufx);
							printf ("\n\n\n\n\n\n\n\n\n");
							system ("pause");
							goto menu7submenu1;
							
						break; 
						
						
						case 4:
							
							goto menuprincipal2;
							
						break;
						
						default:
							
							goto menu7submenu1;
							
						break;
			
						break;
					}
			break;	
			
			/* ---------------------------------------------- Inicio da 8 opção ---------------------------------------------------------*/
				
			case 8:
				
					menu8submenu1: 
					system ("cls");
				    printf("\n     ");
				    printf("");
				    printf("\n\t\t f(x) = tg(x) ");
				    printf("\n\n\n");
				    printf("\n 1- Calcular a aplicacao de um valor na funcao f(x)\n");
				    printf(" 2- Calcular a aplicacao de um valor na derivada f'(x)\n");
				    printf(" 4- Voltar ao menu anterior");
				  	printf("\n\n Escolha uma opcao: ");
					submenu = getch() - 48;
					//scanf("%d", &submenu);
					switch (submenu)
					{
						case 1:
						
							system ("cls");
							printf ("\n\n\n\n");
							printf ("\tEntre agora com o valor de X: ");
							scanf ("%f", &x);
							resufx = tan (x);
							printf("\n\n\t\t f(%.6f)", resufx);
							printf ("\n\n\n\n\n\n\n\n\n");
							system ("pause");
							goto menu7submenu1;
							
						break; 
						
						case 2:	
						
							system ("cls");
							printf ("\n\n\n\n");
							printf ("\tEntre agora com o valor de X: ");
							scanf ("%f", &x);
							resufx = (pow(1/cos(x),2));
							printf("\n\n\t\t f(%.6f)", resufx);
							printf ("\n\n\n\n\n\n\n\n\n");
							system ("pause");
							goto menu7submenu1;					
						break;
						
						
						case 4:
							
							goto menuprincipal2;
							
						break;
						
						default:
							
							goto menu7submenu1;
							
						break;
			
						break;
					}
			break;	
				
			case 9:
				goto menuprincipal;
			break;
			
			default:
				goto menuprincipal2;
			break;
			
		}
		
		
		
	break;

	case 6:

		MessageBox (NULL, " Esperamos te ver novamente em breve!" , "Muito obrigado!", MB_OK);
		keybd_event ( VK_CONTROL, 0x11, 0, 0 );
		keybd_event(0x43,0,0,0);
		keybd_event ( VK_CONTROL, 0x11, KEYEVENTF_KEYUP, 0 );
		keybd_event(0x43,0,KEYEVENTF_KEYUP,0);
		//Codigo em cima pressiona a tecla CTRL + C = Fechar programa
	break;


	default:
		goto menuprincipal;
	break;

	}
	return 0;
}


