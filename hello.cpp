#include <iostream>

int main(){

    int x;
    std::cout << "Please enter a number" << '\n';
    std::cin >> x;

    // if (std::cin.fail()){
    //     std::cout << "Please enter a number boiiii" << '\n';
    //     return 1;
    // }

    std::cout << "the number " << x << '\n';

    return 0;
}