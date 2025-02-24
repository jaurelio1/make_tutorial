#include <stdio.h>

void soma(int a, int b) {
    printf("%d + %d = %d\n", a, b, a + b);
}

void multiplica(int a, int b) {
    printf("%d x %d = %d\n", a, b, a * b);
}

void divide(int a, int b){
    if(b == 0){
        printf("o numero nao pode ser dividido por zero");
    }else{
        printf("%f", (a/b));
    }
}

int main() {
    printf("Olá, Estudante!\n");
    soma(5, 3);
    multiplica(5, 3);
    return 0;
}