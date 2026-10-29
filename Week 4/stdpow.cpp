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
    // at the end we return the value we computed
    // we *do not print* anything in the function

}
int main(){
    

    std::cout << "2^3: " << mypow(2, 3) << std::endl;
    std::cout << "0.5^2: " << mypow(0.5, 2) << std::endl;
    std::cout << "1^0: " << mypow(1, 0) << std::endl;
    std::cout << "64^-3: " << mypow(2,-3) <<std::endl;
}