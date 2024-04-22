#include <iostream>

typedef unsigned long long ull;

int main() {
    int n {0};
    std::cin >> n;

    ull sum {0};
    
    for (int i = 0; i < n-1; ++i) {
        int num {0};
        std::cin >> num;
        sum += num;
    }

    std::cout << (ull) n*(n+1)/2 - sum << "\n";

    return 0;
}
