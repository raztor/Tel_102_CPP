//
// Created by raztor on 07/09/2022.
//
#include <iostream>
#include <cstdio>
using namespace std;
int a, b;
int main() {
    std::cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (i <= 9) {
            switch (i) {
                case 1:
                    std::cout << "one" << std::endl;
                    break;
                case 2:
                    std::cout << "two" << std::endl;
                    break;
                case 3:
                    std::cout << "three" << std::endl;
                    break;
                case 4:
                    std::cout << "four" << std::endl;
                    break;
                case 5:
                    std::cout << "five" << std::endl;
                    break;
                case 6:
                    std::cout << "six" << std::endl;
                    break;
                case 7:
                    std::cout << "seven" << std::endl;
                    break;
                case 8:
                    std::cout << "eight" << std::endl;
                    break;
                case 9:
                    std::cout << "nine" << std::endl;
                    break;
            }

        }else if (i > 9) {
            if (i%2==0) {
                std::cout << "even" << std::endl;
            }else if (i%2!=0) {
                std::cout << "odd" << std::endl;
            }
        }


    }



}