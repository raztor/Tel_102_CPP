//
// Created by raztor on 07/09/2022.
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,x;
    std::cin >> n;
    int arr[n], outarr[n];
    for (int i = 0; i<=n; i++) {
        std::cin >> x;
        arr[n-i] = x;
    }
    for (int y = 1; y<=n; y++) {
        std::cout << arr[y] << " ";
    }
    return 0;
}
