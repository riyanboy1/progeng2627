#include <iostream>

bool primecheck(int n){
    for (int cf = 2; cf < n; cf++) {
        if (n % cf == 0) {
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    int a,b;
    std::cout << "Please enter 2 integers greater than 1: " << std::endl;
    std::cin >> a >> b;

    for (int i = a; i <=b; i++){
        if (primecheck(i) == true){
            std::cout << i << " is a prime number" << std::endl;
        }
        else {
            std::cout << i << " is not a prime number" << std::endl;
        }
    
    
}
}