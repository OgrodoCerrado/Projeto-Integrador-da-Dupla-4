/** 
Sistema de Lista de Receitas da Culinária Brasileira
Autores: Igor Pechir Ramos e Italo Amorim Figueiredo
Inicio do projeto: 15/10/2025
 
Sistema de Lista de Receitas Nacionais que permitem que o usuário possa procurar, dentro de uma lista finita, receitas que pertecem a grupos e subgrupos ao utilizar desses grupos para afunilamento das opções, de forma que ele vá diminuindo o número de alternativas disponíveis até que uma receita seja decidida.
Descrição: Declara funções de exibição de informações ao usuário.**/
#ifndef SAIDA_H
#define SAIDA_H
#include "tipos.h"

/**
Função: exibirResumo
Mostra o cardápio final escolhido pelo usuário.**/
void exibirResumo(Cardapio c, Usuario u);

#endif
