#include <unistd.h>

void ft_is_negative(int n){
    if(n<0){
        char a ='N';
        write(1,&a,1);
    }else{
        char a ='P';
        write(1,&a,1);
    }
}

int main(void){
    ft_is_negative(1);
}