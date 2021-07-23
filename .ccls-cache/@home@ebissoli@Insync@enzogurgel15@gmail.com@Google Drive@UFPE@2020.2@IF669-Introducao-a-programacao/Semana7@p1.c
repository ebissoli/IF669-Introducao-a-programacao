#include <stdio.h>
int main(){
    char c='a', *pc=&c;
    printf("Endereco:%p | Valor:%c\n",&c,c); //a)
    printf("Endereco que ponteiro guarda:%p | Valor:%c\n",pc,*pc); //b)
    printf("Endereco do ponteiro: %p\n", &pc); // c)
    printf("Enderecao do valor guardado no enderecao apontado por pc: %p\n|valor guardado no endereco de pc: %p\n", &*pc,*&pc); // d)
    /*/e) Como *pc nos diz o valor do conteúdo no endereço de memória que pc aponta então &*pc nos dirá o endereço do valor que pc aponta,isto é
     * &*pc é a mesma coisa que &c. Agora se trocamos a ordem da operação e realizamos primeiro a busca pelo endereço de pc o que temos é um espaço
     * na memória que contém a informação armazenada por pc, isto é, o valor do endereço de c, quando deferenciamos esse valor com '*', temos justamente
     * o valor de &c. Logo as duas operações são equivalentes a um simples &c.
    */
    return 0;
}
