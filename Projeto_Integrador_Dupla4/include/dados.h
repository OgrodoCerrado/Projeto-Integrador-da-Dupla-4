#ifndef DADOS_H
#define DADOS_H

#include "tipos.h"

// Lista de receitas armazenada em dados.c
// Declarada como extern para permitir acesso global sem duplicação
extern Receita receitas[];

/**
Função: listarReceitas
Exibe todas as receitas de acordo com a categoria e região selecionada.
Parâmetros:
categoria — ENTRADA, PRATO ou SOBREMESA
regiao — número de 1 a 5 representando a região do Brasil**/
void listarReceitas(int categoria, int regiao);
/**
Função: obterReceitaPorId
Retorna a receita correspondente ao ID informado.
Serve como uma forma rápida de busca dentro da base de dados.**/
Receita obterReceitaPorId(int id);

#endif
