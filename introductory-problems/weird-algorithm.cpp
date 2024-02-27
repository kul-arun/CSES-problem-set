#include <iostream>

int main() {
    unsigned long n {0};
    std::cin >> n;
    while (true) {
        std::cout << n << " ";
        if (n == 1) {
            break;
        }
        if (n & 1) {
            n = 3*n+1;
        } else {
            n /= 2;
        }
    }
}