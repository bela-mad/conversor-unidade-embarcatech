#ifndef FUNCOES_H
#define FUNCOES_H

// Declaração da função conversor_volume
float conversor_volume(float valor, int unidade_inicial, int unidade_final);
// Declaração da função conversor_massa
float conversor_massa(float valor, int unidade_inicial, int unidade_final);
// Declaração da função conversor_tempo
float conversor_tempo(float valor, int unidade_inicial, int unidade_final);

// Declaração da função conversor_temperatura
float Converter_Temperatura(float valor, int opcao_entrada, int opcao_final);

float Converter_Potencia(float potencia_inicial, int opcao_entrada, int opcao_final);

float Converter_Velocidade(float velocidade_inicial, int opcao_entrada, int opcao_final);

#endif // FUNCOES_H
