#include <iostream>



int maxnum(int a, int b, int c) {
    if(a >= b){
        if(a >= c){
            return a;

        }
        else{
            return c;
        }
    }
    else if(b >= c){
        return b;

    }
    else{ 
        return c;
    }
    
    
    
}





int main(){
    std::cout << (maxnum(5,3,7) == 7) << std::endl;
    std::cout << (maxnum(140,23,-6) == 140) << std::endl;
}
