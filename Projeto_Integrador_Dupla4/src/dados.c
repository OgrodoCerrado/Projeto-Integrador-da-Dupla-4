#include <stdio.h>
#include "../include/dados.h"

// Vetor global contendo as 30 receitas cadastradas no sistema.
// Cada item possui: id, nome, região e categoria.
Receita receitas[] = {
    {1, "Tacaca", 1, ENTRADA}, {2, "Vatapa", 1, ENTRADA},
    {3, "Cuscuz", 2, ENTRADA}, {4, "Acaraje", 2, ENTRADA},
    {5, "Quiabo", 3, ENTRADA}, {6, "Chipa", 3, ENTRADA},
    {7, "Pao de queijo", 4, ENTRADA}, {8, "Coxinha", 4, ENTRADA},
    {9, "Pinhao", 5, ENTRADA}, {10, "Tainha", 5, ENTRADA},

    {11, "Manicoba", 1, PRATO}, {12, "Pirarucu", 1, PRATO},
    {13, "Moqueca", 2, PRATO}, {14, "Baiao", 2, PRATO},
    {15, "Arroz com pequi", 3, PRATO}, {16, "Galinhada", 3, PRATO},
    {17, "Feijoada", 4, PRATO}, {18, "Virado Paulista", 4, PRATO},
    {19, "Churrasco", 5, PRATO}, {20, "Galeto", 5, PRATO},

    {21, "Cupuacu", 1, SOBREMESA}, {22, "Acai", 1, SOBREMESA},
    {23, "Cocada", 2, SOBREMESA}, {24, "Mugunza", 2, SOBREMESA},
    {25, "Furrundum", 3, SOBREMESA}, {26, "Pamonha", 3, SOBREMESA},
    {27, "Doce de leite", 4, SOBREMESA}, {28, "Goiabada", 4, SOBREMESA},
    {29, "Cuca", 5, SOBREMESA}, {30, "Grostoli", 5, SOBREMESA}
};

/**
listarReceitas
Percorre a lista de receitas e exibe somente as que pertencem
à categoria e região escolhidas pelo usuário.**/
void listarReceitas(int categoria, int regiao) {
    for (int i = 0; i < 30; i++) {
        if (receitas[i].categoria == categoria && receitas[i].regiao == regiao)
            printf("%d - %s\n", receitas[i].id, receitas[i].nome);
    }
}

/**
obterReceitaPorId
Retorna a receita correspondente ao ID informado.
O ID coincide com o índice + 1 no vetor receitas[].*/
Receita obterReceitaPorId(int id) {
    return receitas[id - 1];
}
