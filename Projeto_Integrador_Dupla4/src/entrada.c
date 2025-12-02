/** 
Sistema de Lista de Receitas da Culinária Brasileira
Autores: Igor Pechir Ramos e Italo Amorim Figueiredo
Inicio do projeto: 15/10/2025
 
Sistema de Lista de Receitas Nacionais que permitem que o usuário possa procurar, dentro de uma lista finita, receitas que pertecem a grupos e subgrupos ao utilizar desses grupos para afunilamento das opções, de forma que ele vá diminuindo o número de alternativas disponíveis até que uma receita seja decidida.
Descrição: Implementa funções para capturar informações digitadas pelo usuário.**/
#include <stdio.h>
#include "../include/entrada.h"

/**
Função: lerTipoConsumidor
Lê o tipo de consumidor do usuário (geral, vegetariano, vegano).**/
void lerTipoConsumidor(Usuario *u) {
    printf("\nTipo de consumidor (geral, vegetariano, vegano): ");
    scanf("%49s", u->tipoConsumidor);
}

/**
Função: escolherOpcaoMenu
Mostra o menu principal e lê a opção desejada.**/
int escolherOpcaoMenu() {
    int opcao;
    printf("\n1-Entrada | 2-Prato | 3-Sobremesa | 4-Finalizar: ");
    scanf("%d", &opcao);
    return opcao;
}

/**
Função: escolherRegiao
Solicita ao usuário que selecione uma região do Brasil.**/
int escolherRegiao() {
    int regiao;
    printf("\nRegiao (1-Norte | 2-Nordeste | 3-Centro-Oeste | 4-Sudeste | 5-Sul): ");
    scanf("%d", &regiao);
    return regiao;
}

/**
Função: escolherReceita
Lê o ID da receita escolhida pelo usuário.**/
int escolherReceita() {
    int receita;
    printf("Digite o numero da receita: ");
    scanf("%d", &receita);
    return receita;
}
