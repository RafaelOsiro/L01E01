/* Exercicio_1.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
Construa um algoritmo que leia um número inteiro de horas e mostre ao usuário o correspondente em minutos e segundos destas horas.*/

#include "stdio.h"
#include "stdbool.h"

int main()
{
    //Variable Declaration
    float hour; 
    int minut, second;
    char *c;
    bool validation;

    //Code
    validation = false;
    while (validation != true) 
    {
        printf("Digite a hora: ");
        scanf("%f", &hour);
        printf("\n\n");

        if (hour >= 0.0)
        {
            validation = true;
        }
        else
        {
            printf("Dados invalidos!\n");
            printf("Digite uma hora com valor maior ou igual a 0\n");
            validation = false;
        }
    }
        
    minut = hour * 60;
    second = (hour * 60 * 60);

    if (hour > 1)
    {
        if (minut > 1)
        {
            if (second > 1)
            {
                printf("%1.1f horas equivale a %d minutos e %d segundos\n\n", hour, minut, second);
            }
            else
            {
                printf("%1.1f horas equivale a %d minutos e %d segundo\n\n", hour, minut, second);
            }
        }
        else
        {
            if (second > 1)
            {
                printf("%1.1f horas equivale a %d minuto e %d segundos\n\n", hour, minut, second);
            }
            else
            {
                printf("%1.1f horas equivale a %d minuto e %d segundo\n\n", hour, minut, second);
            }
        }

    }
    else
    {
        if (minut > 1)
        {
            if (second > 1)
            {
                printf("%1.1f hora equivale a %d minutos e %d segundos\n\n", hour, minut, second);
            }
            else
            {
                printf("%1.1f hora equivale a %d minutos e %d segundo\n\n", hour, minut, second);
            }
        }
        else
        {
            if (second > 1)
            {
                printf("%1.1f hora equivale a %d minuto e %d segundos\n\n", hour, minut, second);
            }
            else
            {
                printf("%1.1f hora equivale a %d minuto e %d segundo\n\n", hour, minut, second);
            }
        }
    }

    scanf("%c", &c);
    return 0;
}
