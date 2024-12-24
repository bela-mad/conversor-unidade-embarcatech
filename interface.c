#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"
#include "interface.h"

int submenu(const char *unidade1, const char *unidade2, const char *unidade3, const char *unidade4, const char *unidade5, const char *unidade6) {
    int opcao;
    printf("Escolha a unidade:\n");
    printf("1 - %s\n", unidade1);
    printf("2 - %s\n", unidade2);
    printf("3 - %s\n", unidade3);
    if (unidade4 != NULL) {
        printf("4 - %s\n", unidade4);
    }
    if (unidade5 != NULL) {
        printf("5 - %s\n", unidade5);
    }
    if (unidade6 != NULL) {
        printf("6 - %s\n", unidade6);
    }
    printf("Opcao: ");
    scanf("%d", &opcao);
    return opcao;
}

void executar_submenu(const char *nome_categoria, 
                      const char *unidade1, const char *unidade2, 
                      const char *unidade3, const char *unidade4, 
                      const char *unidade5, const char *unidade6, 
                      float (*converter)(float valor, int origem, int destino)) {
    int origem, destino;
    float valor, resultado;

    system("cls");

    printf("\n--- %s ---\n", nome_categoria);
    origem = submenu(unidade1, unidade2, unidade3, unidade4, unidade5, unidade6);
    if (origem < 1 || origem > (unidade6 != NULL ? 6 : (unidade5 != NULL ? 5 : (unidade4 != NULL ? 4 : 3)))) {
        printf("Opcao invalida!\n");
        return;
    }

    printf("Digite o valor na unidade %s: ", 
           origem == 1 ? unidade1 : 
           (origem == 2 ? unidade2 : 
           (origem == 3 ? unidade3 : 
           (origem == 4 ? unidade4 : 
           (origem == 5 ? unidade5 : unidade6)))));
    scanf("%f", &valor);

    destino = submenu(unidade1, unidade2, unidade3, unidade4, unidade5, unidade6);
    if (destino < 1 || destino > (unidade6 != NULL ? 6 : (unidade5 != NULL ? 5 : (unidade4 != NULL ? 4 : 3)))) {
        printf("Opcao invalida!\n");
        return;
    }

    // Chama a função de conversão fornecida
    resultado = converter(valor, origem, destino);

    printf("Resultado: %.2f %s\n", resultado, 
           destino == 1 ? unidade1 : 
           (destino == 2 ? unidade2 : 
           (destino == 3 ? unidade3 : 
           (destino == 4 ? unidade4 : 
           (destino == 5 ? unidade5 : unidade6)))));
}

void exibir_interface() {
    system("cls");
    puts("##############################");
    puts("       Conversor de Medidas   ");
    puts("##############################");
    puts("1 - Unidades de comprimento;");
    puts("2 - Unidades de massa;");
    puts("3 - Unidades de volume;");
    puts("4 - Unidades de temperatura;");
    puts("5 - Unidades de velocidade;");
    puts("6 - Unidades de potencia;");
    puts("7 - Unidades de area;");
    puts("8 - Unidades de tempo;");
    puts("9 - Unidades de armazenamento.");
    puts("0 - Sair");
    puts("------------------------------");
}

float temp (float valor, int unidade_inicial, int unidade_final) {
    return 0;
}

int executar_menu() {
    int opcao;
    char continuar;

    exibir_interface();
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            executar_submenu("Unidades de Comprimento", "Metro", "Centimetro", "Milimetro", NULL, NULL, NULL, temp);
            break;
        case 2: 
            executar_submenu("Unidades de Massa", "Grama", "Quilograma", "Tonelada", NULL, NULL, NULL, converte_massa); 
            break;
        case 3:
            executar_submenu("Unidades de Volume", "Litro", "Mililitro", "Metros cubicos", NULL, NULL, NULL, converte_volume);
            break;
        case 4:
            executar_submenu("Unidades de Temperatura", "Celsius", "Fahrenheit", "Kelvin", NULL, NULL, NULL, converte_temperatura);
            break;
        case 5:
            executar_submenu("Unidades de Velocidade", "km/h", "m/s", "mph", NULL, NULL, NULL, converte_velocidade);
            break;
        case 6:
            executar_submenu("Unidades de Potencia", "Watts", "Quilowatts", "Cavalos-vapor", NULL, NULL, NULL, converte_potencia);
            break;
        case 7:
            executar_submenu("Unidades de Area", "Metro quadrado", "Centimetro quadrado", "Milimetro quadrado", NULL, NULL, NULL, temp);
            break;
        case 8:
            executar_submenu("Unidades de Tempo", "Segundos", "Minutos", "Horas", NULL, NULL, NULL, converte_tempo);
            break;
        case 9:
            executar_submenu("Unidades de Armazenamento", "Bits", "Bytes", "Kilobytes", "Megabytes", "Gigabytes", "Terabytes", temp);
            break;
        case 0:
            printf("Saindo... Obrigado!\n");
            return 0;
        default:
            printf("Opcao invalida! Tente novamente.\n");
            break;
    }

    printf("Deseja continuar? (S/N): ");
    scanf(" %c", &continuar);
    return (continuar == 'S' || continuar == 's') ? 1 : 0;
}
