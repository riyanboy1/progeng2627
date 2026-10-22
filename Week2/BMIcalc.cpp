#include <iostream>

int main(){
    double height, weight, BMI;
    

    std::cout << "please enter your height in m" << std::endl;
    std::cin >> height;

    std::cout << "please enter your weight in kg" << std::endl;
    std::cin >> weight;

   BMI = weight / (height*height);


    std::cout << BMI << " is your BMI "  << std::endl;
    
}
