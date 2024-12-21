
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