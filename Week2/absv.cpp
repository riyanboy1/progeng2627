#include <iostream>

int main(){
    double n, absv;
    std::cout << "Please enter a number to find the absolute" <<std::endl;
    std::cin >> n;

    if(n < 0){ 
        
        absv = -n;
    }
    else{
        
    }

    std::cout << "|" << n << "| = " << absv << std::endl;

}