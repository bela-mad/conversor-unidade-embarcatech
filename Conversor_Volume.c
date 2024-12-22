#include <stdio.h>

float conversor_volume(float valor, int unidade_inicial, int unidade_final);
const char* obter_nome_unidade(int unidade);

int main() {
    float valor, resultado;
    int unidade_inicial, unidade_final;

    printf("Digite o valor: ");
    scanf("%f", &valor);

    printf("Escolha a unidade inicial:\n");
    printf("1 - Litros\n2 - Mililitros\n3 - Metros cúbicos\n");
    printf("Sua escolha: ");
    scanf("%d", &unidade_inicial);

    printf("Escolha a unidade final:\n");
    printf("1 - Litros\n2 - Mililitros\n3 - Metros cúbicos\n");
    printf("Sua escolha: ");
    scanf("%d", &unidade_final);

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

float conversor_volume(float valor, int unidade_inicial, int unidade_final) {
    if (unidade_inicial == 1 && unidade_final == 2) {
        return valor * 1000; // Litros para mililitros
    } else if (unidade_inicial == 1 && unidade_final == 3) {
        return valor / 1000; // Litros para metros cúbicos
    } else if (unidade_inicial == 2 && unidade_final == 1) {
        return valor / 1000; // Mililitros para litros
    } else if (unidade_inicial == 2 && unidade_final == 3) {
        return valor / 1000000; // Mililitros para metros cúbicos
    } else if (unidade_inicial == 3 && unidade_final == 1) {
        return valor * 1000; // Metros cúbicos para litros
    } else if (unidade_inicial == unidade_final) {
        return valor; // Mesma unidade
    } else {
        return -1; // Indica erro ou unidade inválida
    }
}

const char* obter_nome_unidade(int unidade) {
    switch (unidade) {
        case 1: return "litros";
        case 2: return "mililitros";
        case 3: return "metros cúbicos";
        default: return "unidade desconhecida";
    }
}