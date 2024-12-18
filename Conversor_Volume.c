#include <stdio.h>

float conversor_volume(float valor, char unidade_inicial, char unidade_final);

const char* obter_nome_unidade(char unidade);

int main() {
    float valor, resultado;
    char unidade_inicial, unidade_final;

    printf("Digite o valor: ");
    scanf("%f", &valor);

    printf("Digite a unidade inicial (l para litro, m para mililitro, M para metro cúbico): ");
    scanf(" %c", &unidade_inicial);

    printf("Digite a unidade final: ");
    scanf(" %c", &unidade_final);

    resultado = conversor_volume(valor, unidade_inicial, unidade_final);

    if (resultado >= 0) {
        printf("%.2f %s equivale a %.6f %s\n", 
               valor, obter_nome_unidade(unidade_inicial), 
               resultado, obter_nome_unidade(unidade_final));
    } else {
        printf("Unidades inválidas ou não suportadas.\n");
    }

    return 0;
}

float conversor_volume(float valor, char unidade_inicial, char unidade_final) {
    if (unidade_inicial == 'l' && unidade_final == 'm') {
        return valor * 1000; // Litros para mililitros
    } else if (unidade_inicial == 'l' && unidade_final == 'M') {
        return valor / 1000; // Litros para metros cúbicos
    } else if (unidade_inicial == 'm' && unidade_final == 'l') {
        return valor / 1000; // Mililitros para litros
    } else if (unidade_inicial == 'm' && unidade_final == 'M') {
        return valor / 1000000; // Mililitros para metros cúbicos
    } else if (unidade_inicial == 'M' && unidade_final == 'l') {
        return valor * 1000; // Metros cúbicos para litros
    } else if (unidade_inicial == unidade_final) {
        return valor; // Mesma unidade
    } else {
        return -1; // Indica erro ou unidade inválida
    }
}

const char* obter_nome_unidade(char unidade) {
    switch (unidade) {
        case 'l': return "litros";
        case 'm': return "mililitros";
        case 'M': return "metros cúbicos";
        default: return "unidade desconhecida";
    }
}
