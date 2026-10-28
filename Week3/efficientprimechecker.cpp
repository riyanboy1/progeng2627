#include <iostream>

int main(){
    int n, counter,curmax;
    bool result = false;
    std::cout << "please enter number for prime checker:" << std::endl;
    std::cin >> n;
    
    for(counter = 2 ; counter <= n/2 ; counter++){
        if(n%counter == 0){
            result = true;
        }
    }
    if (result == true){
        std::cout << "this number is not a prime number" << std::endl;
    }
        else{
            std::cout << "this number is prime" << std::endl;
    }
        

    }

