#ifndef FUNCOES_H
#define FUNCOES_H

// Declaração da função converte_massa
float converte_massa(float valor, int unidade_inicial, int unidade_final);

// Declaração da função converte_volume
float converte_volume(float valor, int unidade_inicial, int unidade_final);

// Declaração da função converte_temperatura
float converte_temperatura(float valor, int opcao_entrada, int opcao_final);

// Declaração da função converte_velocidade
float converte_velocidade(float velocidade_inicial, int opcao_entrada, int opcao_final);

// Declaração da função converte_potencia
float converte_potencia(float potencia_inicial, int opcao_entrada, int opcao_final);

// Declaração da função converte_tempo
float converte_tempo(float valor, int unidade_inicial, int unidade_final);

// Declaração da função converte_armazenamento
float converte_armazenamento(float valor, int unidade_inicial, int unidade_final);

// Declaração da função converte_comprimento
float converte_comprimento(float valor, int unidade_inicial, int unidade_final);

#endif // FUNCOES_H