#include <stdio.h>

float conversor_potencia(float valor, int unidade_inicial, int unidade_final);
const char* obter_nome_unidade_potencia(int unidade);

int main() {
    float valor, resultado;
    int unidade_inicial, unidade_final;

    printf("Digite o valor: ");
    scanf("%f", &valor);

    printf("Escolha a unidade inicial:\n");
    printf("1 - Watts (W)\n2 - Quilowatts (kW)\n3 - Cavalos-vapor (cv/hp)\n");
    printf("Sua escolha: ");
    scanf("%d", &unidade_inicial);

    printf("Escolha a unidade final:\n");
    printf("1 - Watts (W)\n2 - Quilowatts (kW)\n3 - Cavalos-vapor (cv/hp)\n");
    printf("Sua escolha: ");
    scanf("%d", &unidade_final);

    resultado = conversor_potencia(valor, unidade_inicial, unidade_final);

    if (resultado >= 0) {
        printf("%.2f %s equivale a %.6f %s\n", 
               valor, obter_nome_unidade_potencia(unidade_inicial), 
               resultado, obter_nome_unidade_potencia(unidade_final));
    } else {
        printf("Unidades inválidas ou não suportadas.\n");
    }

    return 0;
}

float conversor_potencia(float valor, int unidade_inicial, int unidade_final) {
    if (unidade_inicial == 1 && unidade_final == 2) {
        return valor / 1000; // W para kW
    } else if (unidade_inicial == 1 && unidade_final == 3) {
        return valor / 735.5; // W para cv/hp
    } else if (unidade_inicial == 2 && unidade_final == 1) {
        return valor * 1000; // kW para W
    } else if (unidade_inicial == 2 && unidade_final == 3) {
        return (valor * 1000) / 735.5; // kW para cv/hp
    } else if (unidade_inicial == 3 && unidade_final == 1) {
        return valor * 735.5; // cv/hp para W
    } else if (unidade_inicial == 3 && unidade_final == 2) {
        return (valor * 735.5) / 1000; // cv/hp para kW
    } else if (unidade_inicial == unidade_final) {
        return valor; // Mesma unidade
    } else {
        return -1; // Indica erro ou unidade inválida
    }
}

const char* obter_nome_unidade_potencia(int unidade) {
    switch (unidade) {
        case 1: return "watts (W)";
        case 2: return "quilowatts (kW)";
        case 3: return "cavalos-vapor (cv/hp)";
        default: return "unidade desconhecida";
    }
}