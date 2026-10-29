#include <iostream>

double mypow(double base, int exp){
    double result; 
    double i;
    double check =exp;
    result = 1;
    if( exp<0){
        check = -exp;
    }
 
    for(i = 1; i <= check; i++){
        result = result*base;
        }
    // TODO: use a for loop to implement the repeated multiplication algorithm 
    // so that at the end of the loop variable result contains base^exp
    if(exp < 0){
        result = 1.0/result;
    }
    return result;
}

int base, power, i;
int currsum = 0;

int main(){
    std::cout << "please enter the base" << std::endl;
    std::cin >> base;;
    std::cout << "please enter the power" << std::endl;
    std::cin >> power;
    for(i=0 ; i<=power ; i++){
        currsum = currsum + std::pow(base,i);

    }
    std::cout << "the sum is " << currsum << std::endl;

}