#include <stdio.h>

int main(void) {
    int weight, height;

    printf("請輸入體重(磅) : ");
    scanf_s(" %d", &weight);
    printf("請輸入身高(吋) : ");
    scanf_s(" %d", &height);

    int bmi = (weight * 703) / (height * height);

    printf("您的 BMI 值為 : %d\n\n", bmi);
    printf("— BMI參考標準 —\n");
    printf("過輕(Underweight) : 小於 18.5\n");
    printf("正常(Normal) : 介於 18.5 與 24.9 之間\n");
    printf("過重(Overweight) : 介於 25 與 29.9 之間\n");
    printf("肥胖(Obese) : 30 或以上\n");

    return 0;
}