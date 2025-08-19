
#include <iostream>
using namespace std;

int main() {
    
    int a ;
    int fac=1;
    int i = 1;
    cout << "enter first number ";
    cin>>a;
    
    while(i <= a){
        fac = i*fac;
        i++;
    }
    cout<<fac;

    return 0;

}
