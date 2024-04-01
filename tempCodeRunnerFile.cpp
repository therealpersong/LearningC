#include <Iostream>

int main(){


    int choice;

    std::cout << "Pick a number between 1-5: ";
    std::cin >> choice;

    switch(choice){
        case 1:
        std::cout << "You get nothing";
        break;
        case 2:
        std::cout << "You get a pen";
        break;
        case 3: std::cout << "You get a jackhammer";
        break;
        case 4: std::cout << "You get a mouse";
        break;
        case 5: std::cout << "you get a fridge";
        break;
    default: std::cout << "You get a note that says, 'I am confused on what you asked for so you get this note instead of something \n";
    };

    if(choice = 7199){
        std::cout << "The values for the secret codes are 223, m553, 5.56";
    }

    return 0;
}