//
// Created by jent on 24-10-11.
//
#include <stdio.h>
int main() {
    const int fifty = 50;
    const int twenty = 20;
    const int ten = 10;
    const int five = 5;
    const int one = 1;
    int money = 0;
    scanf("%d",&money);

    printf("%d\n",money/fifty);
    money = money - money/fifty*fifty;
    printf("%d\n",money/twenty);
    money = money - money/twenty*twenty;
    printf("%d\n",money/ten);
    money = money - money/ten*ten;
    printf("%d\n",money/five);
    money = money - money/five*five;
    printf("%d\n",money/one);

    return 0;
}