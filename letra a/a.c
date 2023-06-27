/*Elaborar um programa que efetue a leitura de dez nomes de
pessoas em uma matriz A do tipo vetor e apresentá-los em
seguida.*/
#include<stdio.h>
int main(){
    char nome[10];
    char A[10][50];

    for (int i = 1; i <= 10; i++)
    {
        printf("Insira o %d° nome: ", i);
        scanf("%s", A[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%s\n", A[i]);
    }
    
    return 0;
}