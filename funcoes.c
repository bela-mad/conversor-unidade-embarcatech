
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
// Velocidade

#include <stdio.h> 

float Converter_Velocidade(float velocidade_inicial, int opcao_entrada, int opcao_final) {
    float velocidade_final;
    switch (opcao_entrada) {
        case 1: // Entrada em km/h
            if (opcao_final == 1) {
                velocidade_final = velocidade_inicial;
            } else if (opcao_final == 2) {
                velocidade_final = velocidade_inicial / 3.6;
            } else if (opcao_final == 3) {
                velocidade_final = velocidade_inicial / 1.60934;
            } else {
                return 0; // Retorna 0 para indicar erro
            }
            break;
        case 2: // Entrada em m/s
            if (opcao_final == 1) {
                velocidade_final = velocidade_inicial * 3.6;
            } else if (opcao_final == 2) {
                velocidade_final = velocidade_inicial;
            } else if (opcao_final == 3) {
                velocidade_final = velocidade_inicial * 2.23694;
            } else {
                return 0;
            }
            break;
        case 3: // Entrada em mph
            if (opcao_final == 1) {
                velocidade_final = velocidade_inicial * 1.60934;
            } else if (opcao_final == 2) {
                velocidade_final = velocidade_inicial / 2.23694;
            } else if (opcao_final == 3) {
                velocidade_final = velocidade_inicial;
            } else {
                return 0;
            }
            break;
        default:
            return 0; // Retorna 0 para indicar erro
    }
    return velocidade_final;
}

// Volume

#include <stdio.h>

float Converter_Volume(float volume_inicial, int opcao_entrada, int opcao_final) {
    float volume_final;
    switch (opcao_entrada) {
        case 1: // Litros
            if (opcao_final == 1) {
                volume_final = volume_inicial;
            } else if (opcao_final == 2) {
                volume_final = volume_inicial * 1000;
            } else if (opcao_final == 3) {
                volume_final = volume_inicial / 1000;
            } else {
                return 0;
            }
            break;
        case 2: // Mililitros
            if (opcao_final == 1) {
                volume_final = volume_inicial / 1000;
            } else if (opcao_final == 2) {
                volume_final = volume_inicial;
            } else if (opcao_final == 3) {
                volume_final = volume_inicial / 1000000;
            } else {
                return 0;
            }
            break;
        case 3: // Metros cúbicos
            if (opcao_final == 1) {
                volume_final = volume_inicial * 1000;
            } else if (opcao_final == 2) {
                volume_final = volume_inicial * 1000000;
            } else if (opcao_final == 3) {
                volume_final = volume_inicial;
            } else {
                return 0;
            }
            break;
        default:
            return 0;
    }
    return volume_final;
}

// Potencia

#include <stdio.h>

float Converter_Potencia(float potencia_inicial, int opcao_entrada, int opcao_final) {
    float potencia_final;
    switch (opcao_entrada) {
        case 1: // Watts
            if (opcao_final == 1) {
                potencia_final = potencia_inicial;
            } else if (opcao_final == 2) {
                potencia_final = potencia_inicial / 1000;
            } else if (opcao_final == 3) {
                potencia_final = potencia_inicial / 735.5;
            } else {
                return 0;
            }
            break;
        case 2: // Quilowatts
            if (opcao_final == 1) {
                potencia_final = potencia_inicial * 1000;
            } else if (opcao_final == 2) {
                potencia_final = potencia_inicial;
            } else if (opcao_final == 3) {
                potencia_final = (potencia_inicial * 1000) / 735.5;
            } else {
                return 0;
            }
            break;
        case 3: // Cavalos-vapor
            if (opcao_final == 1) {
                potencia_final = potencia_inicial * 735.5;
            } else if (opcao_final == 2) {
                potencia_final = (potencia_inicial * 735.5) / 1000;
            } else if (opcao_final == 3) {
                potencia_final = potencia_inicial;
            } else {
                return 0;
            }
            break;
        default:
            return 0;
    }
    return potencia_final;
}