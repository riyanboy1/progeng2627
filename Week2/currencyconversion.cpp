#include <iostream>

int main(){
    double pounds, euros, exchangerate;
    

    std::cout << "please enter the number of pounds" << std::endl;
    std::cin >> pounds;

    std::cout << "please enter the pounds per euros exchange ratre " << std::endl;
    std::cin >> exchangerate;

    euros = pounds * exchangerate;


    std::cout << pounds << " pounds is equal to " << euros << " euros at  " <<  exchangerate << " euros per pound " << std::endl;
    
}
