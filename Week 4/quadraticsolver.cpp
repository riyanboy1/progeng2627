#include <iostream>
#include <cmath>

bool quadraticsolver(double a, double b, double c, double& sol1, double& sol2){
    bool discriminantcheck = b*b -4*a*c >= 0;
    if (discriminantcheck == true) {
        sol1 = (-b + std::sqrt(b*b -4*a*c)) / (2*a);
        sol2 = (-b - std::sqrt(b*b -4*a*c)) / (2*a);
        return discriminantcheck;
    }
    else return discriminantcheck;
}

int main(){
    double a, b, c;
    double sol1, sol2;

    std::cout << "please enter 3 values for ax^2 +bx + c as a quadratic" << std::endl;
    std::cin >> a >> b >> c;
    if (a == 0) {
        std::cout << "a cannot be 0, please enter a valid value for a" << std::endl;
        return 0;
    }

    std::cout << "you entered:" << std::endl;
    std::cout << a <<" x^2 + " << b << "x + " << c << std::endl;
   

    if (quadraticsolver(a, b, c ,sol1, sol2)){
        std::cout << "x = " << sol1 << " or " << sol2 << std::endl;
    } else {
        std::cout << "The discriminant is negative, no real solutions exist." << std::endl;
    }
}
