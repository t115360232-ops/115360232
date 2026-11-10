#include <stdio.h>

int main(void) {
    int num1, num2;

    printf("請輸入兩個整數: ");
    scanf_s("%d %d", &num1, &num2);

    if (num2 != 0 && num1 % num2 == 0) {
        printf("%d 是 %d 的倍數。\n", num1, num2);
    }
    else {
        printf("%d 不是 %d 的倍數。\n", num1, num2);
    }

    return 0;
}