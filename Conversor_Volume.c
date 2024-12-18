#include <stdio.h>

void converter_volume(float valor, char unidade_inicial, char unidade_final);

int main() {
    float valor;
    char unidade_inicial, unidade_final;

    printf("Digite o valor: ");
    scanf("%f", &valor);

    printf("Digite a unidade inicial (l para litro, m para metro cubico, ml para mililitro): ");
    scanf(" %c", &unidade_inicial);

    printf("Digite a unidade final: ");
    scanf(" %c", &unidade_final);

    converter_volume(valor, unidade_inicial, unidade_final);

    return 0;
}

void converter_volume(float valor, char unidade_inicial, char unidade_final) {
    if (unidade_inicial == 'l' && unidade_final == 'm') { 
        printf("%.2f litros equivale a %.2f mililitros\n", valor, valor * 1000);
    } else if (unidade_inicial == 'l' && unidade_final == 'M') { 
        printf("%.2f litros equivale a %.6f metros cubicos\n", valor, valor / 1000);
    } else if (unidade_inicial == 'm' && unidade_final == 'l') { 
        printf("%.2f mililitros equivale a %.3f litros\n", valor, valor / 1000);
    } else if (unidade_inicial == 'm' && unidade_final == 'M') { 
        printf("%.2f mililitros equivale a %.9f metros cubicos\n", valor, valor / 1000000);
    } else if (unidade_inicial == 'M' && unidade_final == 'l') { 
        printf("%.2f metros cubicos equivale a %.0f litros\n", valor, valor * 1000);
    } else if (unidade_inicial == 'M' && unidade_final == 'M') { 
        printf("As unidades são iguais.\n");
    } else {
        printf("Unidades inválidas.\n");
    }
}