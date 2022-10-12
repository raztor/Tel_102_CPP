//
// Created by raztor on 12-10-2022.
//
#include <stdio.h>
#include <iostream>

void update(int *a,int *b) {
    int temp_a, temp_b;
    temp_a = *a;
    temp_b = *b;
    *a= temp_a+temp_b;
    *b= abs(int (temp_a-temp_b));

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}