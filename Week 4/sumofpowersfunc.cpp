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

double SOP(double x, int n) {
    double currsum = 0;

    if (n >= 0) {
        for (int i = 0; i <= n; i++) {
            currsum = currsum + mypow(x, i);
        }
    }
    else {
        for (int i = 0; i >= n; i--) {
            currsum = currsum + mypow(x, i);
        }
    }

    return currsum;



}

int main() {
    std::cout << (SOP(2, -3) == 1.875) << std::endl;
    std::cout << (SOP(4, 3) == 85) << std::endl;
}