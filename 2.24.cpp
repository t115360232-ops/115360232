#include <stdio.h>

int main(void) {
    int num;

    printf("叫块俱计: ");
    scanf_s("%d", &num);

    if (num % 2 == 0) {
        printf(" % d 琌案计(Even)\n", num);
    }
    else {
        printf(" % d 琌计(Odd)\n", num);
    }

    return 0;
}