#include <iostream>

int main(){
    int year;
    std::cout << "What is your year";
    std::cin >> year;
    if ((year % 4 ) == 0 ){
        if ((year % 100) == 0){
            std::cout << "Year is a multiple of 4 but not a leap year";
        }
        else {
            std::cout << "Year is a leap year";
    }
        
        
        

    }

    else{
        std::cout << "Year is not a leap year";
}
}