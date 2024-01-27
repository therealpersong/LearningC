#include <iostream>

int main(){

    std::string questions[] = {"1. What year was C++ created?: ",
                                "2. Who invented C++?: ",
                                "3. What is the predecessor of C++?: ",
                                "4. Is the Earth flat?"};

    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                                {"A. Gudio van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg"},
                                {"A. C","B. C+","C. C--","D. B++"},
                                {"A. yes", "B. no", "C. sometimes", "D. what's Earth?"}};

char answerKey[] = {'C','B','A','B'};

    return 0;
}