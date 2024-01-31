#include <iostream>
#include <ctime>
#include <cmath>

int main() {
    double ar[5] = {3.69, 6.69, 9.99, 12.55, 14.55};

    for (int i = 0; i < 5; i++) {
        std::cout << "Element at index " << i << ": " << ar[i] << std::endl;
    }

    std::cout << "Code works perfectly" << std::endl;

    return 0;
}
