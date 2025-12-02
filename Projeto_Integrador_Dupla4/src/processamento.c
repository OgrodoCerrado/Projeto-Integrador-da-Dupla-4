#include <stdio.h>
#include "../include/processamento.h"
#include "../include/dados.h"
#include "../include/entrada.h"


/**
escolherEntrada
Permite que o usuário selecione uma entrada válida
de acordo com a região e categoria.*/
void escolherEntrada(Cardapio *c) {

    int reg = escolherRegiao();
    listarReceitas(ENTRADA, reg);

    int id = escolherReceita();
    Receita r = obterReceitaPorId(id);

    // Validação completa
    if (r.id >= 1 && r.id <= 30 && r.categoria == ENTRADA && r.regiao == reg) {
        c->entrada = r;
        printf("\nEntrada selecionada: %s\n", r.nome);
    } else {
        printf("\nID inválido! Nenhuma entrada selecionada.\n");
    }
}

/**
escolherPrato
Permite selecionar um prato principal válido dentro da categoria PRATO.**/
void escolherPrato(Cardapio *c) {

    int reg = escolherRegiao();
    listarReceitas(PRATO, reg);

    int id = escolherReceita();
    Receita r = obterReceitaPorId(id);

    if (r.id >= 1 && r.id <= 30 && r.categoria == PRATO && r.regiao == reg) {
        c->pratoPrincipal = r;
        printf("\nPrato selecionado: %s\n", r.nome);
    } else {
        printf("\nID inválido! Nenhum prato selecionado.\n");
    }
}

/**
escolherSobremesa
Permite selecionar uma sobremesa válida dentro da categoria SOBREMESA.**/
void escolherSobremesa(Cardapio *c) {

    int reg = escolherRegiao();
    listarReceitas(SOBREMESA, reg);

    int id = escolherReceita();
    Receita r = obterReceitaPorId(id);

    if (r.id >= 1 && r.id <= 30 && r.categoria == SOBREMESA && r.regiao == reg) {
        c->sobremesa = r;
        printf("\nSobremesa selecionada: %s\n", r.nome);
    } else {
        printf("\nID inválido! Nenhuma sobremesa selecionada.\n");
    }
}
