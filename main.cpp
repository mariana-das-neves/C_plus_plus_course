#include <iostream>
#include <string.h>

// using namespace std;   

int main() {
    
    int a = 10;
    int *myptr = &a;

    std::cout << *myptr << std::endl;

    *myptr = 20;

    std::cout << a << std::endl;

    std::cout << "OH PRIMA QUE RICA PRIMA" << std::endl;

    return 0;
}