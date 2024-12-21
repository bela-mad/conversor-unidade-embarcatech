#include <stdio.h>

float conversor_armazenamento(float valor, int unidade_inicial, int unidade_final);
const char* obter_nome_unidade(int unidade);

int main() {
    float valor, resultado;
    int unidade_inicial, unidade_final;

    printf("Digite o valor: ");
    scanf("%f", &valor);

    printf("Escolha a unidade inicial:\n");
    printf("1 - Bits\n2 - Bytes\n3 - Kilobytes (KB)\n");
    printf("4 - Megabytes (MB)\n5 - Gigabytes (GB)\n6 - Terabytes (TB)\n");
    printf("Sua escolha: ");
    scanf("%d", &unidade_inicial);

    printf("Escolha a unidade final:\n");
    printf("1 - Bits\n2 - Bytes\n3 - Kilobytes (KB)\n");
    printf("4 - Megabytes (MB)\n5 - Gigabytes (GB)\n6 - Terabytes (TB)\n");
    printf("Sua escolha: ");
    scanf("%d", &unidade_final);

    resultado = conversor_armazenamento(valor, unidade_inicial, unidade_final);

    if (resultado >= 0) {
        printf("%.2f %s equivale a %.6f %s\n", 
               valor, obter_nome_unidade(unidade_inicial), 
               resultado, obter_nome_unidade(unidade_final));
    } else {
        printf("Unidades inválidas ou não suportadas.\n");
    }

    return 0;
}

float conversor_armazenamento(float valor, int unidade_inicial, int unidade_final) {
    const long long fator[6] = {1, 8, 8 * 1024, 8 * 1024 * 1024, 8 * 1024 * 1024LL * 1024, 8 * 1024 * 1024LL * 1024 * 1024};
    
    if (unidade_inicial < 1 || unidade_inicial > 6 || unidade_final < 1 || unidade_final > 6) {
        return -1;
    }

   
    float em_bits = valor * fator[unidade_inicial - 1];
    return em_bits / fator[unidade_final - 1];
}

const char* obter_nome_unidade(int unidade) {
    switch (unidade) {
        case 1: return "Bits";
        case 2: return "Bytes";
        case 3: return "Kilobytes (KB)";
        case 4: return "Megabytes (MB)";
        case 5: return "Gigabytes (GB)";
        case 6: return "Terabytes (TB)";
        default: return "unidade desconhecida";
    }
}
