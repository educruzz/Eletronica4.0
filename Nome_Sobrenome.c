/******************************************************************************

Autor: Eduardo da Costa.
Data: 28/08/2024
Modulo: Logica de Programação
Lista de Exercicios
Curso: Eletronica 4.0
Local: INDT

Escreva um programa que peça ao usuário para inserir o nome e o sobrenome separadamente e imprima-os em
uma linha. Teste seu programa com nomes que contêm espaços em branco (ex: Julia Rose Smith)
*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    char nome[50], sobrenome[50];

    printf("Digite seu nome: ");
    fgets(nome, 50, stdin);

    printf("Digite seu sobrenome: ");
    fgets(sobrenome, 50, stdin);

    // Remover o '\n' do final das strings, se necessário
    nome[strcspn(nome, "\n")] = 0;
    sobrenome[strcspn(sobrenome, "\n")] = 0;

    printf("Seu nome completo é: %s %s\n", nome, sobrenome);

    return 0;
}