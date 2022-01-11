#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int summa(int n) {
    int result = 0;
    int summa;
    while (n != 0){
        summa = n % 10;
        result += summa;
        n /= 10;
    }
    if (result < 0){
        result *= -1;
    }
    return result;
}


int main(int argc, char *argv[]) {

    int num1 = strtol(argv[1], NULL, 10);
    int result_main = summa(num1);

    printf("%d\n",result_main);

    return 0;
}
