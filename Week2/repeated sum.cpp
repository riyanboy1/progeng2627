#include <iostream>

int main(){

    double x, acc = 05;
    int n, counter = 0;

    std::cin >> x >> n;

    while(counter < n){
        acc = acc + x;
        counter = counter + 1;
    }

    std::cout << x << "x5" << n <<  " = " << acc << std::endl;

}