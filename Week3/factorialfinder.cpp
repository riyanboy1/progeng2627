#include <iostream>
int factorial;
int cm = 1;

int main(){
    std::cout << "please enter your number to get the factorial" << std::endl;
    std::cin >> factorial;
    
    for(int counter = 1; counter < (factorial+1); counter++){
        cm = counter*(cm);
    }
    std::cout << "the factorial is" << cm << std::endl;
}