#include "funcoes.h"
#include <stdio.h>

// Comprimento
float converte_comprimento(float valor, int unidade_inicial, int unidade_final) {
    // Tabela de fatores de conversão para metro
    float fatores[] = {1, 100, 1000}; // Metro, Centímetro, Milímetro

    if (unidade_inicial < 1 || unidade_inicial > 4 || unidade_final < 1 || unidade_final > 4) {
        return -1; // Retorna -1 para unidades inválidas
    }

    // Converte para metros e depois para a unidade final
    float em_metros = valor / fatores[unidade_inicial - 1];
    return em_metros * fatores[unidade_final - 1];
}

// Massa
float converte_massa(float valor, int unidade_inicial, int unidade_final) {
    if (unidade_inicial == 1 && unidade_final == 2) {
        return valor / 1000; // Gramas para quilogramas
    } else if (unidade_inicial == 1 && unidade_final == 3) {
        return valor / 1000000; // Gramas para toneladas
    } else if (unidade_inicial == 2 && unidade_final == 1) {
        return valor * 1000; // Quilogramas para gramas
    } else if (unidade_inicial == 2 && unidade_final == 3) {
        return valor / 1000; // Quilogramas para toneladas
    } else if (unidade_inicial == 3 && unidade_final == 1) {
        return valor * 1000000; // Toneladas para gramas
    } else if (unidade_inicial == 3 && unidade_final == 2) {
        return valor * 1000; // Toneladas para quilogramas
    } else if (unidade_inicial == unidade_final) {
        return valor; // Mesma unidade
    } else {
        return -1; // Indica erro ou unidade inválida
    }
}

// Volume
float converte_volume(float volume_inicial, int opcao_entrada, int opcao_final) {
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

// Temperatura
float converte_temperatura(float temperatura_inicial, int opcao_entrada, int opcao_final) {

    float temperatura_final;

    switch (opcao_entrada) {
    case 1: // Entrada em Celsius
        if (opcao_final == 1) {
            return temperatura_inicial; // Retorna a temperatura original
        }
        else if (opcao_final == 2) {
            return temperatura_final = (temperatura_inicial * 1.8) + 32; // Celsius para Fahrenheit
        }
        else if (opcao_final == 3) {
            return temperatura_final = temperatura_inicial + 273.15; // Celsius para Kelvin
        }
        else {
            return 0; // A unidade de saída é inválida
        }

        break;
    case 2: // Entrada em Fahrenheit
        if (opcao_final == 1) {
            return temperatura_final = (temperatura_inicial - 32) / 1.8; // Fahrenheit para Celsius
        }
        else if (opcao_final == 2) {
            return temperatura_inicial; // Retorna a temperatura original
        }
        else if (opcao_final == 3) {
            return temperatura_final = ((temperatura_inicial - 32) / 1.8) + 273.15; // Fahrenheit para Kelvin
        }
        else {
            return 0; // A unidade de saída é inválida
        }

        break;
    case 3: // Entrada em Kelvin
        if (opcao_final == 1) {
            return temperatura_final = temperatura_inicial - 273; // Kelvin para Celsius
        }
        else if (opcao_final == 2) {
            return temperatura_final = ((temperatura_inicial - 273.15) * 1.8) + 32; // Kelvin para Fahrenheit
        }
        else if (opcao_final == 3) {
            return temperatura_inicial; // Retorna a temperatura original
        }
        else {
            return 0; // A unidade de saída é inválida
        }

        break;
    default:
        return 0;
        break;
    }
}

// Velocidade
float converte_velocidade(float velocidade_inicial, int opcao_entrada, int opcao_final) {
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

// Massa
float converte_massa(float valor, int unidade_inicial, int unidade_final) {
    if (unidade_inicial == 1 && unidade_final == 2) {
        return valor / 1000; // Gramas para Quilogramas
    } else if (unidade_inicial == 1 && unidade_final == 3) {
        return valor / 1000000; // Gramas para Toneladas
    } else if (unidade_inicial == 2 && unidade_final == 1) {
        return valor * 1000; // Quilogramas para Gramas
    } else if (unidade_inicial == 2 && unidade_final == 3) {
        return valor / 1000; // Quilogramas para Toneladas
    } else if (unidade_inicial == 3 && unidade_final == 1) {
        return valor * 1000000; // Toneladas para Gramas
    } else if (unidade_inicial == 3 && unidade_final == 2) {
        return valor * 1000; // Toneladas para Quilogramas
    } else if (unidade_inicial == unidade_final) {
        return valor; // Mesma Unidade
    } else {
        return -1; // Indica erro ou unidade inválida
    }
}

// Potência
float converte_potencia(float potencia_inicial, int opcao_entrada, int opcao_final) {
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

// Área
float converte_area(float valor, int unidade_inicial, int unidade_final) {
    if (unidade_inicial == unidade_final) {
        return valor; // Mesma unidade, retorna o valor original
    }
    
    // Metros quadrados para outras unidades
    if (unidade_inicial == 1) {
        if (unidade_final == 2) return valor * 10000; // Metros² para Centímetros²
        if (unidade_final == 3) return valor * 1000000; // Metros² para Milímetros²
    }
    
    // Centímetros quadrados para outras unidades
    if (unidade_inicial == 2) {
        if (unidade_final == 1) return valor / 10000; // Centímetros² para Metros²
        if (unidade_final == 3) return valor * 100; // Centímetros² para Milímetros²
    }
    
    // Milímetros quadrados para outras unidades
    if (unidade_inicial == 3) {
        if (unidade_final == 1) return valor / 1000000; // Milímetros² para Metros²
        if (unidade_final == 2) return valor / 100; // Milímetros² para Centímetros²
    }

    return -1; // Se as unidades forem inválidas ou não houver conversão
}

// Tempo
float converte_tempo(float valor, int unidade_inicial, int unidade_final) {
    // Fatores de conversão para tempo
    int time_factors[] = {1, 60, 3600};

    // Cálculo da conversão de tudo para segundos, e depois voltando para o tempo desejado
    return valor * time_factors[unidade_inicial - 1] / time_factors[unidade_final - 1];

    // Não fiz verificação para indices inválidos, pois a interface já faz isso
}

// Armazenamento
float converte_armazenamento(float valor, int unidade_inicial, int unidade_final) {
    const float fator[6] = {1, 8, 8 * 1024, 8 * 1024 * 1024, 8 * 1024 * 1024LL * 1024, 8 * 1024 * 1024LL * 1024 * 1024};

    // Converte para bits, depois para a unidade desejada   
    float em_bits = valor * fator[unidade_inicial - 1];
    return em_bits / fator[unidade_final - 1];
}
