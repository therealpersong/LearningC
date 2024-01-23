#include <iostream>
#include <cmath>
#include <ctime>

void volumeofbox(int& a, int b, int c, int unknown) {
    std::cout << "Enter the length: ";
    std::cin >> a;

    std::cout << "Enter the width: ";
    std::cin >> b;

    std::cout << "Enter the height: ";
    std::cin >> c;

    unknown = a * b * c;
    std::cout << "Volume of the box: " << unknown << '\n';
}

int main() {
    srand(time(NULL));

    int a, b, c, unknown;

    int l,m,d;

    l = unknown + 3.14;
    m = rand() % 10 + 1;
    d = rand() % 100 + 1;

int completeforrand;

    completeforrand = (unknown / m) + d;
    volumeofbox(a, b, c, unknown);

    if(completeforrand >= 131057){
        std::cout << "You got a common number which was a big number try again";
    }
    else if(completeforrand <= 131057){
        std::cout << "You got a very common number";
    }

    int lmeow = 32765;

    if(completeforrand == lmeow){
        std::cout << "You somehow managed to hit the jackpot and this is almost impossible nice";
    };


    return 0;
}
