#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int c = 0;
    int c2 = 0;
    
    while(c2 < n){
        c2 = c2 + 1;
   
        while(c < n){
            c = c + 1;
            std::cout << "*"; 
            
        }
        c = 0;
        std::cout << std::endl;
      

    }

}