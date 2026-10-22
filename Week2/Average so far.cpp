#include <iostream>
#include <string>

int main(){
    double n, avg, counter;
    counter = 1;
    std::cin >> avg;

    while( counter != 0){
        std::cin >> n;
        counter = counter + 1;
        avg = (avg*(counter - 1) + n)/counter;
 
        std::cout << "the average is" << avg << std::endl;
    }
}