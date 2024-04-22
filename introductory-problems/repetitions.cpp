#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cin >> str;

    int maxCount {1};
    int count {1};

    for (int i = 0, length = str.size(); i < length-1; ++i) {
        if (str[i] == str[i+1]) 
            ++count;
        else
            count = 1;
        if (count > maxCount)
            maxCount = count;
    }

    std::cout << maxCount;

    return 0;
}
