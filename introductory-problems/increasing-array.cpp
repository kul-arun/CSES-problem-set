#include <iostream>

int main() {
    int n {0};
    std::cin >> n;

    unsigned long long ans {0};

    int prev {-1};

    for (int i = 0; i < n; ++i) {
        int curr {0};
        std::cin >> curr;
        if (prev > curr)
            ans += (prev-curr);
        else
            prev = curr;
    }

    std::cout << ans << "\n";

    return 0;
}
