#include <stdio.h>

int main(void) {
    double totalMiles, costPerGallon, avgMilesPerGallon, parkingFees, tolls;

    printf("請輸入一整天的總里程數: ");
    scanf_s("%lf", &totalMiles);
    printf("請輸入汽油每加侖多少錢: ");
    scanf_s("%lf", &costPerGallon);
    printf("請輸入平均每加侖能行駛多少英里: ");
    scanf_s("%lf", &avgMilesPerGallon);
    printf("請輸入一天的停車費: ");
    scanf_s("%lf", &parkingFees);
    printf("請輸入一天的通行費(過路費) : ");
    scanf_s("%lf", &tolls);

    double dailyCost = (totalMiles / avgMilesPerGallon) * costPerGallon + parkingFees + tolls;

    printf("您一天開車去工作的總花費為: $ % .2f\n", dailyCost);

    return 0;
}