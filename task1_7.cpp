#include <iostream>

int main() {
    int a, b, c, d;
    std::cout << "input 4 numbers ";
    std::cin >> a >> b >> c >> d;

    
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int gcd_ab = a;

   
    while (c != 0) {
        int temp = c;
        c = gcd_ab % c;
        gcd_ab = temp;
    }

    
    while (d != 0) {
        int temp = d;
        d = gcd_ab % d;
        gcd_ab = temp;
    }

    std::cout << "the biggest gsd is: " << gcd_ab << std::endl;

    system("pause>0");
}
