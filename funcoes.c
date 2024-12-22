#include "funcoes.h"

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

float Converter_Temperatura(float temperatura_inicial, int opcao_entrada, int opcao_final)
{

    float temperatura_final;

    switch (opcao_entrada)
    {
    case 1: // Entrada em Celsius
        if (opcao_final == 1)
        {
            return temperatura_inicial; // Retorna a temperatura original
        }
        else if (opcao_final == 2)
        {
            return temperatura_final = (temperatura_inicial * 1.8) + 32; // Celsius para Fahrenheit
        }
        else if (opcao_final == 3)
        {
            return temperatura_final = temperatura_inicial + 273.15; // Celsius para Kelvin
        }
        else
        {
            return 0; // A unidade de saída é inválida
        }

        break;
    case 2: // Entrada em Fahrenheit
        if (opcao_final == 1)
        {
            return temperatura_final = (temperatura_inicial - 32) / 1.8; // Fahrenheit para Celsius
        }
        else if (opcao_final == 2)
        {
            return temperatura_inicial; // Retorna a temperatura original
        }
        else if (opcao_final == 3)
        {
            return temperatura_final = ((temperatura_inicial - 32) / 1.8) + 273.15; // Fahrenheit para Kelvin
        }
        else
        {
            return 0; // A unidade de saída é inválida
        }

        break;
    case 3: // Entrada em Kelvin
        if (opcao_final == 1)
        {
            return temperatura_final = temperatura_inicial - 273; // Kelvin para Celsius
        }
        else if (opcao_final == 2)
        {
            return temperatura_final = ((temperatura_inicial - 273.15) * 1.8) + 32; // Kelvin para Fahrenheit
        }
        else if (opcao_final == 3)
        {
            return temperatura_inicial; // Retorna a temperatura original
        }
        else
        {
            return 0; // A unidade de saída é inválida
        }

        break;
    default:
        return 0;
        break;
    }
}

float conversor_tempo(float valor, int unidade_inicial, int unidade_final) {
    // Fatores de conversão para tempo
    int time_factors[] = {1, 60, 3600};

    // Cáuculo da conversão de tudo para segundos, e depois voltando para o tempo desejado
    return valor * time_factors[unidade_inicial - 1] / time_factors[unidade_final - 1];

    // Não fiz verificação para indices inválidos, pois a interface já faz isso
}