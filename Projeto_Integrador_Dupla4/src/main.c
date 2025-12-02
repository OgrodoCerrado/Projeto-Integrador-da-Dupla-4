#include <stdio.h>
#include "../include/tipos.h"
#include "../include/entrada.h"
#include "../include/processamento.h"
#include "../include/saida.h"

/**
Função principal
Exibe menu, recebe escolhas e ao final mostra o cardápio completo.**/
int main() {
    Usuario u;
    Cardapio c = {0};
    int opcao;

    printf("\n=== SISTEMA DE RECEITAS BRASILEIRAS ===\n");
    // Lê tipo de consumidor
    lerTipoConsumidor(&u);

    // Laço principal do menu
    do {
        opcao = escolherOpcaoMenu();

        switch(opcao) {
            case 1: escolherEntrada(&c); break;
            case 2: escolherPrato(&c); break;
            case 3: escolherSobremesa(&c); break;
            case 4: break;
            default: printf("Opcao invalida!\n");
        }

    } while (opcao != 4);

    // Exibe o cardápio final
    exibirResumo(c, u);
    return 0;
}
