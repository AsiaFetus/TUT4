#include <iostream>

int main() {
    int i = 3;
    std::cout << "The value of the variable i is " << i << '\n';

    if ((i = 4)) {
        std::cout << "I have entered the code block so i must be equal to 4\n";
        std::cout << "This shouldn't happen \n";
    }
    return 0;
}