#include <stdio.h>

float conversor_velocidade(float valor, int unidade_inicial, int unidade_final);
const char* obter_nome_unidade_velocidade(int unidade);

int main() {
    float valor, resultado;
    int unidade_inicial, unidade_final;

    printf("Digite o valor: ");
    scanf("%f", &valor);

    printf("Escolha a unidade inicial:\n");
    printf("1 - Quilômetros por hora (km/h)\n2 - Metros por segundo (m/s)\n3 - Milhas por hora (mph)\n");
    printf("Sua escolha: ");
    scanf("%d", &unidade_inicial);

    printf("Escolha a unidade final:\n");
    printf("1 - Quilômetros por hora (km/h)\n2 - Metros por segundo (m/s)\n3 - Milhas por hora (mph)\n");
    printf("Sua escolha: ");
    scanf("%d", &unidade_final);

    resultado = conversor_velocidade(valor, unidade_inicial, unidade_final);

    if (resultado >= 0) {
        printf("%.2f %s equivale a %.6f %s\n", 
               valor, obter_nome_unidade_velocidade(unidade_inicial), 
               resultado, obter_nome_unidade_velocidade(unidade_final));
    } else {
        printf("Unidades inválidas ou não suportadas.\n");
    }

    return 0;
}

float conversor_velocidade(float valor, int unidade_inicial, int unidade_final) {
    if (unidade_inicial == 1 && unidade_final == 2) {
        return valor / 3.6; // km/h para m/s
    } else if (unidade_inicial == 1 && unidade_final == 3) {
        return valor / 1.60934; // km/h para mph
    } else if (unidade_inicial == 2 && unidade_final == 1) {
        return valor * 3.6; // m/s para km/h
    } else if (unidade_inicial == 2 && unidade_final == 3) {
        return valor * 2.23694; // m/s para mph
    } else if (unidade_inicial == 3 && unidade_final == 1) {
        return valor * 1.60934; // mph para km/h
    } else if (unidade_inicial == 3 && unidade_final == 2) {
        return valor / 2.23694; // mph para m/s
    } else if (unidade_inicial == unidade_final) {
        return valor; // Mesma unidade
    } else {
        return -1; // Indica erro ou unidade inválida
    }
}

const char* obter_nome_unidade_velocidade(int unidade) {
    switch (unidade) {
        case 1: return "quilômetros por hora (km/h)";
        case 2: return "metros por segundo (m/s)";
        case 3: return "milhas por hora (mph)";
        default: return "unidade desconhecida";
    }
}
