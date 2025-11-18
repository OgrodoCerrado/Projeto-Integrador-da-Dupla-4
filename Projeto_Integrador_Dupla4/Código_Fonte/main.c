//  Sistema de Lista de Receitas da Culinária Brasileira
//  Autores: Igor Pechir Ramos e Italo Amorim Figueiredo
//  Inicio do projeto: 15/10/2025
//  Sistema de Lista de Receitas Nacionais que permitem que o usuário possa procurar, dentro de uma lista finita, receitas que pertecem a grupos e subgrupos ao utilizar desses grupos para afunilamento das opções, de forma que ele vá diminuindo o número de alternativas disponíveis até que uma receita seja decidida

// INICIO - Inclusão das bibliotecas 
#include <string.h> // inclusa para utilização da função strcpy
#include <stdio.h> // inclusa para utilização das funções getchar(), scanf, printf
#include <stdlib.h> // inclusa por boas práticas e futuras atualizações do programa

int main()
{
// PARTE 1 - Declaração das variáveis que serão utilizadas para todo o programa, cada uma com um valor inicial com o objetivo de evitar lixo computacional e resultados indesejados
	int opcaoMenu = 0;
	int regiaoEntrada = 0, regiaoPratoPrincipal = 0, regiaoSobremesa = 0;
	char tipoConsumidor[50] = "geral";
	int entradaEscolhidaNumerica = 0, pratoPrincipalEscolhidoNumerico = 0, sobremesaEscolhidaNumerica = 0;
	char entradaEscolhida[50] = "Nao selecionada", pratoPrincipalEscolhido[50] = "Nao selecionado", sobremesaEscolhida[50] = "Nao selecionada";

// PARTE 2 - Apresentação do menu inicial, com apresentação formal e educada das informações iniciais

	printf("\n=========== LISTA DE RECEITAS NACIONAIS ==========\n");
	printf("\nSeja bem vindo ao sistema de lista de receitas da culinaria brasileira!\n");

// PARTE 3 - Primeira pergunta que pode receber um valor do usuário, nesse caso, a fim de receber os dados de que tipo de consumidor o usuario se identifica
	printf("\nQue tipo de consumidor voce se identifica? Tome as opcoes a seguir como exemplo.\n");
	printf("\n| GERAL | VEGETARIANO | VEGANO |\n");
	scanf("%49s", tipoConsumidor);

// PARTE 4 - Inicio do loop com a apresentação do menu principal de escolhas que o usuario pode realizar	
	do 
	{
		printf("Escolha uma das opcoes a seguir: \n");
		printf("\n| (1) ENTRADA | (2) PRATO PRINCIPAL | (3) SOBREMESA | (4) FINALIZAR SELECAO\n");
		scanf("%d", &opcaoMenu);
		getchar(); // utilizado aqui e em outros momentos no código para evitar erros causados pelo excesso de caracteres e travamentos devido a memória
// PARTE 6 - Estrutura de switch case para funcionamento apropriado do sistema de escolhas do menu principal
		switch (opcaoMenu) 
		{
// PARTE 5 - Escolha de entrada, aqui o usuário poderá escolher entre as 5 regiões brasileiras pela qual ele poderá escolher usando de outra estrutura de switch case
			case 1:
				printf("\n================ ENTRADAS =================\n");
				printf("\n| (1) NORTE | (2) NORDESTE | (3) CENTRO-OESTE | (4) SUDESTE | (5) SUL |\n");
				printf("Em que região brasileira você deseja procurar a sua entrada? \n");
				scanf("%d", &regiaoEntrada);
				getchar();
				switch (regiaoEntrada) 
					{
// PARTE 7  - Cada caso(região escolhida), serão apresentadas duas opções de comida, que poderão ser escolhidas com o scanf, apartir dessa escolha, será realizado um último switch case que transforma a variavel de caracteres da entrada na opção escolhida 
						case 1:
							printf("1 - Tacaca \n2 - Vatapa\n");
							printf("Qual entrada voce deseja selecionar? \n");
							scanf("%d", &entradaEscolhidaNumerica);
							switch (entradaEscolhidaNumerica)
							{
							case 1:
								strcpy(entradaEscolhida, "Tacaca");// uso do strcpy para transformação da variavel que antes estava em outro valor (default sendo "nao selecionada") em  Tacaca
								break;
							case 2:
								strcpy(entradaEscolhida, "Vatapa");
							default:
								break;
							}
						break;
						case 2:
							printf("1 - Cuscuz \n2 - Acaraje\n");
							printf("Qual entrada voce deseja selecionar? \n");
							scanf("%d", &entradaEscolhidaNumerica);
							switch (entradaEscolhidaNumerica)
							{
							case 1:
								strcpy(entradaEscolhida, "Cuscuz");
								break;
							case 2:
								strcpy(entradaEscolhida, "Acaraje");
							default:
								break;
							}
						break;
						case 3:
							printf("1 - Quiabo \n2 - Chipa\n");
							printf("Qual entrada voce deseja selecionar? \n");
							scanf("%d", &entradaEscolhidaNumerica);
							switch (entradaEscolhidaNumerica)
							{
							case 1:
								strcpy(entradaEscolhida, "Quiabo");
								break;
							case 2:
								strcpy(entradaEscolhida, "Chipa");
							default:
								break;
							}
						break;
						case 4:
							printf("1 - Pao de queijo \n2 - Coxinha\n");
							printf("Qual entrada voce deseja selecionar? \n");
							scanf("%d", &entradaEscolhidaNumerica);
							switch (entradaEscolhidaNumerica)
							{
							case 1:
								strcpy(entradaEscolhida, "Pao de queijo");
								break;
							case 2:
								strcpy(entradaEscolhida, "Coxinha");
							default:
								break;
							}
						break;
						case 5:
							printf("1 - Pinhao \n2 - Tainha\n");
							printf("Qual entrada voce deseja selecionar? \n");
							scanf("%d", &entradaEscolhidaNumerica);
							switch (entradaEscolhidaNumerica)
							{
							case 1:
								strcpy(entradaEscolhida, "Pinhao");
								break;
							case 2:
								strcpy(entradaEscolhida, "Tainha");
							default:
								break;
							}
						break;
						default:
							printf("Regiao invalida ou não selecionada.\n");//Mensagem que aparecerá caso o valor inserido seja inválido.
						break;
					}
			break;
// PARTE 8 - Escolha de prato principal, aqui o usuário poderá escolher entre as 5 regiões brasileiras pela qual ele poderá escolher usando de outra estrutura de switch case			
			case 2:
					printf("\n============== PRATOS PRINCIPAIS ===============\n");
					printf("\n| (1) NORTE | (2) NORDESTE | (3) CENTRO-OESTE | (4) SUDESTE | (5) SUL |\n");
					printf("Em que região brasileira você deseja procurar o seu prato principal? \n");
					scanf("%d", &regiaoPratoPrincipal);
					getchar();
				switch (regiaoPratoPrincipal) 
					{
						case 1:
// PARTE 9  - Cada caso(região escolhida), serão apresentadas duas opções de comida, que poderão ser escolhidas com o scanf, apartir dessa escolha, será realizado um último switch case que transforma a variavel de caracteres do prato principal na opção escolhida 
							printf("1 - Manicoba \n2 - Pirarucu\n");
							printf("Qual prato voce deseja selecionar? \n");
							scanf("%d", &pratoPrincipalEscolhidoNumerico);
							switch (pratoPrincipalEscolhidoNumerico)
							{
							case 1:
								strcpy(pratoPrincipalEscolhido, "Manicoba"); // uso do strcpy para transformação da variavel que antes estava em outro valor (default sendo "nao selecionado") em Manicoba
								break;
							case 2:
								strcpy(pratoPrincipalEscolhido, "Pirarucu");
							default:
								break;
							}
						break;
						case 2:
							printf("1 - Moqueca \n2 - Baiao\n");
							printf("Qual prato voce deseja selecionar? \n");
							scanf("%d", &pratoPrincipalEscolhidoNumerico);
							switch (pratoPrincipalEscolhidoNumerico)
							{
							case 1:
								strcpy(pratoPrincipalEscolhido, "Moqueca");
								break;
							case 2:
								strcpy(pratoPrincipalEscolhido, "Baiao");
							default:
								break;
							}
						break;
						case 3:
							printf("1 - Arroz com pequi \n2 - Galinhada\n");
							printf("Qual prato voce deseja selecionar? \n");
							scanf("%d", &pratoPrincipalEscolhidoNumerico);
							switch (pratoPrincipalEscolhidoNumerico)
							{
							case 1:
								strcpy(pratoPrincipalEscolhido, "Arroz com pequi");
								break;
							case 2:
								strcpy(pratoPrincipalEscolhido, "Galinhada");
							default:
								break;
							}
						break;
						case 4:
							printf("1 - Feijoada \n2 - Virado Paulista\n");
							printf("Qual prato voce deseja selecionar? \n");
							scanf("%d", &pratoPrincipalEscolhidoNumerico);
							switch (pratoPrincipalEscolhidoNumerico)
							{
							case 1:
								strcpy(pratoPrincipalEscolhido, "Feijoada");
								break;
							case 2:
								strcpy(pratoPrincipalEscolhido, "Virado Paulista");
							default:
								break;
							}
						break;
						case 5:
							printf("1 - Churrasco \n2 - Galeto\n");
							printf("Qual prato voce deseja selecionar? \n");
							scanf("%d", &pratoPrincipalEscolhidoNumerico);
							switch (pratoPrincipalEscolhidoNumerico)
							{
							case 1:
								strcpy(pratoPrincipalEscolhido, "Churrasco");
								break;
							case 2:
								strcpy(pratoPrincipalEscolhido, "Galeto");
							default:
								break;
							}
						break;
						default:
							printf("Regiao invalida ou não selecionada.\n");// Mensagem que aparecerá caso o valor inserido seja inválido.
						break;
					}
			break;
// PARTE 10 - Escolha de sobremesa, aqui o usuário poderá escolher entre as 5 regiões brasileiras pela qual ele poderá escolher usando de outra estrutura de switch case	
			case 3:
					printf("\n================ SOBREMESAS =================\n");
					printf("\n| (1) NORTE | (2) NORDESTE | (3) CENTRO-OESTE | (4) SUDESTE | (5) SUL |\n");
					printf("Em que região brasileira você deseja procurar a sua sobremesa? \n");
					scanf("%d", &regiaoSobremesa);
					getchar();
					switch (regiaoSobremesa) 
						{
							case 1:
// PARTE 11 - Cada caso(região escolhida), serão apresentadas duas opções de comida, que poderão ser escolhidas com o scanf, apartir dessa escolha, será realizado um último switch case que transforma a variavel de caracteres da sobremesa na opção escolhida 
							printf("1 - Manicoba \n2 - Pirarucu\n");
								printf("1 - Cupuacu \n2 - Acai\n");
								printf("Qual sobremesa voce deseja selecionar? \n");
								scanf("%d", &sobremesaEscolhidaNumerica);
								switch (sobremesaEscolhidaNumerica)
									{
									case 1:
										strcpy(sobremesaEscolhida, "Cupuacu");// uso do strcpy para transformação da variavel que antes estava em outro valor (default sendo "nao selecionada") em Cupuacu
										break;
									case 2:
										strcpy(sobremesaEscolhida, "Acai");
									default:
										break;
									}
							break;
							case 2:
								printf("1 - Cocada \n2 - Mugunza\n");
								printf("Qual sobremesa voce deseja selecionar? \n");
								scanf("%d", &sobremesaEscolhidaNumerica);
								switch (sobremesaEscolhidaNumerica)
									{
									case 1:
										strcpy(sobremesaEscolhida, "Cocada");
										break;
									case 2:
										strcpy(sobremesaEscolhida, "Mugunza");
									default:
										break;
									}
							break;
							case 3:
								printf("1 - Furrundum \n2 - Pamonha\n");
								printf("Qual sobremesa voce deseja selecionar? \n");
								scanf("%d", &sobremesaEscolhidaNumerica);
								switch (sobremesaEscolhidaNumerica)
									{
									case 1:
										strcpy(sobremesaEscolhida, "Furrundum");
										break;
									case 2:
										strcpy(sobremesaEscolhida, "Pamonha");
									default:
										break;
									}
							break;
							case 4:
								printf("1 - Doce de leite \n2 - Goiabada\n");
								printf("Qual sobremesa voce deseja selecionar? \n");
								scanf("%d", &sobremesaEscolhidaNumerica);
								switch (sobremesaEscolhidaNumerica)
									{
									case 1:
										strcpy(sobremesaEscolhida, "Doce de leite");
										break;
									case 2:
										strcpy(sobremesaEscolhida, "Goiabada");
									default:
										break;
									}
							break;
							case 5:
								printf("1 - Cuca \n2 - Grostoli\n");
								printf("Qual sobremesa voce deseja selecionar? \n");
								scanf("%d", &sobremesaEscolhidaNumerica);
								switch (sobremesaEscolhidaNumerica)
									{
									case 1:
										strcpy(sobremesaEscolhida, "Cuca");
										break;
									case 2:
										strcpy(sobremesaEscolhida, "Grostoli");
									default:
										break;
									}
							break;
							default:
								printf("Regiao invalida ou não selecionada.\n");// Mensagem que aparecerá caso o valor inserido seja inválido.
							break;
						}
			break;
// PARTE 12 - Escolha de Sair do sistema de seleção, saindo também do sistema de loop e seguindo com o código
				case 4:
				printf("\nSaindo do sistema de seleção de receitas...\n");
				break;
// PARTE 13 - Mensagem que aparecerá caso o valor inserido seja inválido.
				default:
				printf("\nOpcao de menu invalida. Por favor, escolha 1, 2, 3 ou 4.\n");
				break;
			}
	} while (opcaoMenu != 4);
// PARTE 14 - Menu final, com a apresentação final da seleção de refeições, tipo de consumidor e mensagem de finalização do sistema educada e formal.
	printf("\n======================================================\n");
	printf("RESUMO DO SEU CARDÁPIO\n");
	printf("======================================================\n");
	printf("O usuário é consumidor %s\n", tipoConsumidor);
	printf("Entrada escolhida: %s\n", entradaEscolhida);
	printf("Prato principal escolhido: %s\n", pratoPrincipalEscolhido);
	printf("Sobremesa escolhida: %s\n", sobremesaEscolhida);
	printf("Tenha uma otima refeicao, espero que tenha um otimo tempo cozinhando as receitas!");
	
// FIM
		return 0;
}

	
	