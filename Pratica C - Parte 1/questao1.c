#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[150];
    int idade;
    char endereco[150];
} cadastro;

int main(){
    cadastro c;

    printf("Digite seu nome: ");
    fgets(c.nome, 150, stdin);

    printf("Digite sua idade: ");
    scanf("%d",&c.idade);
    getchar();

    printf("Digite seu endereço: ");
    fgets(c.endereco, 150, stdin);

    printf("Dados: \n");
    printf("Nome: %s",c.nome);
    printf("Idade: %d\n",c.idade);
    printf("Endereço: %s",c.endereco);

    return 0;
}
