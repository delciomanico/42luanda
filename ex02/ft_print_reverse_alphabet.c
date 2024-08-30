#include <unistd.h>

void ft_print_reverse_alphabet(void){

char letras= 'z';

while(letras>= 'a'){

write(1,&letras,1);

letras--;
}
}

int main(void){

ft_print_reverse_alphabet();
}
