/** 
Sistema de Lista de Receitas da Culinária Brasileira
Autores: Igor Pechir Ramos e Italo Amorim Figueiredo
Inicio do projeto: 15/10/2025
 
Sistema de Lista de Receitas Nacionais que permitem que o usuário possa procurar, dentro de uma lista finita, receitas que pertecem a grupos e subgrupos ao utilizar desses grupos para afunilamento das opções, de forma que ele vá diminuindo o número de alternativas disponíveis até que uma receita seja decidida.
Descrição:Declara funções responsáveis por montar o cardápio do usuário com base nas escolhas feitas.**/
#ifndef PROCESSAMENTO_H
#define PROCESSAMENTO_H

#include "tipos.h"

void escolherEntrada(Cardapio *c);
void escolherPrato(Cardapio *c);
void escolherSobremesa(Cardapio *c);

#endif
