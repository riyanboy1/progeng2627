#include <iostream>
int base, power, i;
int currsum = 0;

int main(){
    std::cout << "please enter the base" << std::endl;
    std::cin >> base;;
    std::cout << "please enter the power" << std::endl;
    std::cin >> power;
    for(i=0 ; i<power ; i++){
        currsum = currsum + std::pow(base,i);

    }
    std::cout << "the sum is " << currsum << std::endl;

}