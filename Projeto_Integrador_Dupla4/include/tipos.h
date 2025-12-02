/** 
Sistema de Lista de Receitas da Culinária Brasileira
Autores: Igor Pechir Ramos e Italo Amorim Figueiredo
Inicio do projeto: 15/10/2025
 
Sistema de Lista de Receitas Nacionais que permitem que o usuário possa procurar, dentro de uma lista finita, receitas que pertecem a grupos e subgrupos ao utilizar desses grupos para afunilamento das opções, de forma que ele vá diminuindo o número de alternativas disponíveis até que uma receita seja decidida
 
Descrição: Aqui estão declaradas as estruturas (structs) que usamos em todo o sistema,
e também os valores fixos que identificam os tipos de receitas.
 
Por que é importante: Este arquivo reúne todos os tipos de dados usados pelos diferentes componentes,
impedindo que sejam definidos várias vezes e assegurando que sejam iguais em todo o lugar.**/

#ifndef TIPOS_H
#define TIPOS_H

// Categorias de receitas para facilitar comparação e leitura do código
#define ENTRADA 1
#define PRATO 2
#define SOBREMESA 3

/**
Struct: Receita
Representa uma receita culinária.
 
Campos:
    id-> identificador único da receita
    nome-> nome da receita
    regiao-> região do país (1 a 5)
    categoria-> tipo da receita (entrada, prato principal, sobremesa)**/
typedef struct {
    int id;
    char nome[50];
    int regiao;
    int categoria;
} Receita;

/**
 Struct: Cardapio
 Representa o conjunto de escolhas do usuário.

 Campos:
    entrada-> receita de entrada escolhida
    pratoPrincipal-> prato principal escolhido
    sobremesa-> sobremesa escolhida**/
typedef struct {
    Receita entrada;
    Receita pratoPrincipal;
    Receita sobremesa;
} Cardapio;

/**
Struct: Usuario
Guarda o tipo de consumidor (geral, vegetariano, vegano).**/
typedef struct {
    char tipoConsumidor[50];
} Usuario;

#endif
