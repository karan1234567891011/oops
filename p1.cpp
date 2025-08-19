// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    int a, b;
    std::cout << "enter first number ";
    std::cin>>a;
    std::cout << "enter first number ";
    std::cin>>b;
    
    if(a<b){
        std::cout<<b<<"is greater"<<std::endl;
    } else {
        std::cout<<a<<" is greater"<<std::endl;
    }

    return 0;
}