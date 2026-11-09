#include <iostream>
#include <cmath>

double integerdivision(double a, double b, double& sol){
    sol = a/b;
    return sol;
    }


int main(){
    double a, b;
    double sol;

    std::cout << "please enter 2 number that you want to divide" << std::endl;
    std::cin >> a >> b;
    
    std::cout << "you entered:" << std::endl;
    std::cout << a << " / " << b << std::endl;
   

    integerdivision(a, b, sol);
    std::cout << "The result of the division is: " << sol << std::endl;
    
}
