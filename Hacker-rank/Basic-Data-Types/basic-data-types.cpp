//
// Created by raztor on 07/09/2022.
//
#include <iostream>
#include <cstdio>

int main() {
    int a; long b; char c; float d; double e;
    scanf("%d %ld %c %f %lf" , &a, &b, &c, &d, &e);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf\n", a,b,c,d,e);
    return 0;
}
