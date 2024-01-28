#include <iostream>
int main()
{
std::cout << "Please enter a character, an integer, and a double: ";
char c = 0;
int x = 0;
double d = 0.0;
std::cin >> c >> x >> d;
std::cout << "You entered: " << c << ", " << x << " and " << d;
}