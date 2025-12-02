#include <stdio.h>
#include "../include/saida.h"

/**
exibirResumo
Mostra:
tipo de consumidor
entrada, prato e sobremesa escolhidos
passo a passo de cada receita*/
void exibirResumo(Cardapio c, Usuario u) {

    printf("\n===== RESUMO DO SEU CARDÁPIO =====\n");
    printf("Consumidor: %s\n", u.tipoConsumidor);

    // ------ NOME DAS ESCOLHAS ------
    printf("\n--- Suas escolhas ---\n");

    // Exibe a entrada escolhida
    if (c.entrada.id != 0)
        printf("Entrada escolhida: %s\n", c.entrada.nome);
    else
        printf("Entrada: (nenhuma selecionada)\n");

    // Exibe o prato principal    
    if (c.pratoPrincipal.id != 0)
        printf("Prato principal escolhido: %s\n", c.pratoPrincipal.nome);
    else
        printf("Prato principal: (nenhum selecionado)\n");

    // Exibe a sobremesa
    if (c.sobremesa.id != 0)
        printf("Sobremesa escolhida: %s\n", c.sobremesa.nome);
    else
        printf("Sobremesa: (nenhuma selecionada)\n");

    
}
