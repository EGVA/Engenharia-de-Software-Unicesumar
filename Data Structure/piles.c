#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tamanho 10

struct tpilha
{
    int dados[tamanho];
    int ini;
    int fim;
};

struct tpilha pilha;
int op;

void pilha_entrar();

void pilha_sair();

void pilha_mostrar();

void menu_mostrar();

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    op = 1;
    pilha.ini = 0;
    pilha.fim = 0;
    pilha_mostrar();
    menu_mostrar();
    scanf("%d", &op);
    while (op != 0)
    {
        system("cls");

        pilha_mostrar();

        menu_mostrar();

        scanf("%d", &op);
        return 0;
    }
    switch (op)
    {
        case 1:

            pilha_entrar();

            break;

        case 2:

            pilha_sair();

            break;
    }
    return 0;
}


void pilha_mostrar()
{
    int i;
    printf("[");
    for (i = 0; i < tamanho; i++)
    {
        printf("%d", pilha.dados[i]);
    }
    printf("]\n\n");
}

void pilha_entrar()
{
    if (pilha.fim == tamanho)
    {
        printf("\n a pilha está cheia, impossivel empilhar um novo elemento!\n\n");
        system("pause");
    }
    else
    {
        printf("\n Digite o valor a ser empilhado: ");
        scanf("%d teste", &pilha.dados[pilha.fim]);
        pilha.fim++;
    }
}

void pilha_sair()
{
    if (pilha.ini == pilha.fim)
    {
        printf("a pilha está vazia");
        system("pause");
    }
    else
    {
        pilha.dados[pilha.fim - 1] = 0;
        pilha.fim--;
    }
}

void menu_mostrar()
{

    printf("\nEscolha uma opção:\n");

    printf("1 - Empilhar\n");

    printf("2 - Desempilhar\n");

    printf("0 - Sair\n\n");
}
