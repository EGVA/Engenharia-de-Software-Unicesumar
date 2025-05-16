#include <stdio.h>
#include <stdlib.h>

int xi;
int *ptr_xi;

void imprimir(){
    printf("Valor de xi = %d \n", xi);
    printf("Valor de &xi = %p \n", &xi); // & indica que acesso ao ponteira de xi
    printf("Valor de ptr_xi = %p \n", ptr_xi);
    printf("Valor de *ptr_xi = %d \n", *ptr_xi); // * indica acesso ao valor que o ponteiro aponta
}

int main(){
    xi = 10;
    ptr_xi = &xi; // & indica que acesso ao ponteira de xi
    xi = 20;
    *ptr_xi = 30;
    imprimir();
    system("Pause");
    return(0);
}