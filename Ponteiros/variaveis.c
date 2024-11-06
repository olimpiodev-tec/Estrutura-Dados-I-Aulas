#include <stdio.h>

int main() {
    int num = 10;      
    int *p;           

    p = &num;      

    printf("Valor de num: %i\n", num);
    printf("Valor de p: %i\n", *p);

    printf("Endereço de num: %p\n", &num);
    printf("Endereço armazenado em p: %p\n", p);
    printf("Endereço original do p: %p\n", &p);


    return 0;
}
