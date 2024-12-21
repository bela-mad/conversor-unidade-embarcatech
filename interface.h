int submenu(const char *unidade1, const char *unidade2, const char *unidade3, const char *unidade4, const char *unidade5, const char *unidade6);
void executar_submenu(const char *nome_categoria, 
                      const char *unidade1, const char *unidade2, 
                      const char *unidade3, const char *unidade4, 
                      const char *unidade5, const char *unidade6, 
                      float (*converter)(float valor, int origem, int destino));
void exibir_interface();
int executar_menu();                      