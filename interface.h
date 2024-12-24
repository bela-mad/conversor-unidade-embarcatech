#ifndef INTERFACE_H
#define INTERFACE_H

// Declaração da função submenu
int submenu(const char *unidade1, const char *unidade2, 
            const char *unidade3, const char *unidade4, 
            const char *unidade5, const char *unidade6);

// Declaração da função executar_submenu
void executar_submenu(const char *nome_categoria, 
                      const char *unidade1, const char *unidade2, 
                      const char *unidade3, const char *unidade4, 
                      const char *unidade5, const char *unidade6, 
                      float (*converter)(float valor, int origem, int destino));

// Declaração da função exibir_interface
void exibir_interface();

// Declaração da função executar_menu
int executar_menu();

#endif // INTERFACE_H