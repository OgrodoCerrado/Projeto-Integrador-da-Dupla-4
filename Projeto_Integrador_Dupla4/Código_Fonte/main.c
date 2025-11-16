//  Sistema de Lista de Receitas da Culinária Brasileira
//  Autores: Igor Pechir Ramos e Italo Amorim Figueiredo
//  Inicio do projeto: 15/10/2025
//  Sistema de Lista de Receitas Nacionais que permitem que o usuário possa procurar, dentro de uma lista finita, receitas que pertecem a grupos e subgrupos ao utilizar desses grupos para afunilamento das opções, de forma que ele vá diminuindo o número de alternativas disponíveis até que uma receita seja decidida

// INICIO - Declaração de variáveis e apresentação do menu inicial
#include <string.h>
#include <stdio.h>

int main()
{
	char regiaoEntrada[15], regiaoPratoPrincipal[15], regiaoSobremesa[15];
	char tipoConsumidor[12];
	char entradaEscolhida[15], pratoPrincipalEscolhido[15], sobremesaEscolhida[15];

	printf("\n=== LISTA DE RECEITAS NACIONAIS ===\n");
	printf("\n| ENTRADA | PRATO PRINCIPAL | SOBREMESA |\n");
	printf("\n| NORTE | NORDESTE | CENTRO-OESTE | SUDESTE | SUL |\n");
	printf("\n| GERAL | VEGETARIANO | VEGANO |\n");
	printf("Ao responder, escreva em letra minuscula todas as respostas.\n");
	printf("Caso não queira escolher um tipo de prato, apenas aperte ENTER \n");

// PARTE 2 - Seleção de regiões e tipo de consumidor 
		
	printf("Em que região brasileira você deseja procurar a sua entrada? \n");
	scanf("%14s", regiaoEntrada);
	
	printf("Em que região brasileira você deseja procurar o seu prato principal? \n");
	scanf("%14s", regiaoPratoPrincipal);

	printf("Em que região brasileira você deseja procurar a sua sobremesa? \n");
	scanf("%14s", regiaoSobremesa);

	printf("Que tipo de consumidor voce se identifica? \n");
	scanf("%11s", tipoConsumidor);

// Após o usuário escolher as regiões e identificar o tipo de consumidor que o usuário decidiu, ele será apresentado com a lista de receitas que deverão ser escolhidas
// PARTE 3 - Listagem e Seleção de receitas baseadas na escolha que foi feita na parte 2
	printf("\n================ ENTRADAS =================\n");

	int comparacaoEntradaNorte = strcmp(regiaoEntrada, "norte");
	int comparacaoEntradaNordeste = strcmp(regiaoEntrada, "nordeste");
	int comparacaoEntradaCentroOeste = strcmp(regiaoEntrada, "centro-oeste");
	int comparacaoEntradaSudeste = strcmp(regiaoEntrada, "sudeste");
	int comparacaoEntradaSul = strcmp(regiaoEntrada, "sul");

	if (comparacaoEntradaNorte == 0) {
        printf("1 - Tacaca \n2 - Vatapa\n");
    } else if (comparacaoEntradaNordeste == 0) {
        printf("1 - Cuscuz \n2 - Acaraje\n");
    } else if (comparacaoEntradaCentroOeste == 0) {
        printf("1 - Quiabo \n2 - Chipa\n");
    } else if (comparacaoEntradaSudeste == 0) {
        printf("1 - Pao_de_queijo \n2 - Coxinha\n");
    } else if (comparacaoEntradaSul == 0) {
        printf("1 - Pinhao \n2 - Tainha\n");
    } else {
        printf("Regiao invalida ou não selecionada. Seguindo o código...\n");
    }

	if (comparacaoEntradaNorte == 0 || comparacaoEntradaNordeste == 0 || comparacaoEntradaCentroOeste == 0 || comparacaoEntradaSudeste == 0 || comparacaoEntradaSul == 0)  {
		printf("Qual entrada voce deseja selecionar? Digite o nome da entrada. \n");
		scanf("%s",entradaEscolhida);
	}

// O usuário irá escolher a partir da listagem apresentada uma entrada e após a seleção do prato principal e da sobremesa, que seguem o mesmo sistema de listagem e seleção
	printf("\n============== PRATOS PRINCIPAIS ===============\n");
	int comparacaoPPNorte = strcmp(regiaoPratoPrincipal, "norte");
	int comparacaoPPNordeste = strcmp(regiaoPratoPrincipal, "nordeste");
	int comparacaoPPCentroOeste = strcmp(regiaoPratoPrincipal, "centro-oeste");
	int comparacaoPPSudeste = strcmp(regiaoPratoPrincipal, "sudeste");
	int comparacaoPPSul = strcmp(regiaoPratoPrincipal, "sul");

	if (comparacaoPPNorte == 0) {
        printf("1 - Manicoba \n2 - Pirarucu\n");
    } else if (comparacaoPPNordeste == 0) {
        printf("1 - Moqueca \n2 - Baiao\n");
    } else if (comparacaoPPCentroOeste == 0) {
        printf("1 - Arroz_com_Pequi \n2 - Galinhada\n");
    } else if (comparacaoPPSudeste == 0) {
        printf("1 - Feijoada \n2 - Virado_Paulista\n");
    } else if (comparacaoPPSul == 0) {
        printf("1 - Churrasco \n2 - Galeto\n");
    } else {
        printf("Regiao invalida ou não selecionada. Seguindo o código...\n");
    }

	if (comparacaoPPNorte == 0 || comparacaoPPNordeste == 0 || comparacaoPPCentroOeste == 0 || comparacaoPPSudeste == 0 || comparacaoPPSul == 0)  {
		printf("Qual prato principal voce deseja selecionar? Digite o nome dele. \n");
		scanf("%s", pratoPrincipalEscolhido);
	}


	printf("\n================ SOBREMESAS =================\n");
	int comparacaoSobremesaNorte = strcmp(regiaoSobremesa, "norte");
	int comparacaoSobremesaNordeste = strcmp(regiaoSobremesa, "nordeste");
	int comparacaoSobremesaCentroOeste = strcmp(regiaoSobremesa, "centro-oeste");
	int comparacaoSobremesaSudeste = strcmp(regiaoSobremesa, "sudeste");
	int comparacaoSobremesaSul = strcmp(regiaoSobremesa, "sul");

	if (comparacaoSobremesaNorte == 0) {
        printf("1 - Cupuacu \n2 - Acai\n");
    } else if (comparacaoSobremesaNordeste == 0) {
        printf("1 - Cocada \n2 - Mugunza\n");
    } else if (comparacaoSobremesaCentroOeste == 0) {
        printf("1 - Furrundum \n2 - Pamonha\n");
    } else if (comparacaoSobremesaSudeste == 0) {
        printf("1 - Doce_de_leite \n2 - Goiabada\n");
    } else if (comparacaoSobremesaSul == 0) {
        printf("1 - Cuca \n2 - Grostoli\n");
    } else {
        printf("Regiao invalida ou não selecionada. Seguindo o código...\n");
    }

	if (comparacaoSobremesaNorte == 0 || comparacaoSobremesaNordeste == 0 || comparacaoSobremesaCentroOeste == 0 || comparacaoSobremesaSudeste == 0 || comparacaoSobremesaSul == 0)  {
		printf("Qual sobremesa voce deseja selecionar? Digite o nome dela. \n");
		scanf("%s",	sobremesaEscolhida);
	}


// Após a seleção exata de cada receita, elas serao apresentadas apos um menu com intuito de separar cada etapa do código
// Aqui serão exibidas em uma interface final todas opções selecionadas pelo usuário

	printf("\n======================================================\n");
	printf("O usuário é consumidor %s\n", tipoConsumidor);
	printf("Entrada escolhida: %s\n", entradaEscolhida);
	printf("Prato principal escolhido: %s\n", pratoPrincipalEscolhido);
	printf("Sobremesa escolhida: %s\n", sobremesaEscolhida);
	printf("Tenha uma otima refeicao, espero que tenha um otimo tempo cozinhando as receitas!");

// FIM
		return 0;
}

	
	