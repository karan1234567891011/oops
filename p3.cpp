
#include <iostream>

int main() {
    
     int a ;
    std::cout << "enter first number ";
    std::cin>>a;
    
    if(a%3==0 && a%5==0){
        std::cout << "it is divisible by both 3 and 5. ";
    } else {
        std::cout << "it is not divisible by both ";
    }

    return 0;

}
