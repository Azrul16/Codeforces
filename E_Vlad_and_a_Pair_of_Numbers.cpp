#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> numbers;

    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;
        numbers.push_back(num);
    }

    while (numbers.size() > 1) {
        int a = *std::max_element(numbers.begin(), numbers.end());
        numbers.erase(std::remove(numbers.begin(), numbers.end(), a), numbers.end());
        int b = *std::max_element(numbers.begin(), numbers.end());
        numbers.erase(std::remove(numbers.begin(), numbers.end(), b), numbers.end());
        int c = stoi(to_string(a) + to_string(b));
        numbers.push_back(c);
    }

    std::cout << numbers[0] << std::endl;
    return 0;
}
