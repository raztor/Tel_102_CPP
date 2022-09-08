//
// Created by raztor on 07/09/2022.
//
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int max_of_four(int e, int f, int g, int w) {
    int bggr = std::max({e, f, g, w});
    return bggr;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
