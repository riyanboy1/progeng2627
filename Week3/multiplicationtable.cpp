#include <iostream>

int main(){
    int tblsize;
    int rowcounter;
    std::cin >> tblsize;


    for(int n = 1; n <= tblsize; n++){

   
        for(int d = 1; d <= tblsize; d++){
            std::cout <<  "  " << d*n ;  
      
        }

        std::cout << std::endl;
        // we go on a newline after each row

    }

}