#include <iostream>
#include <iostream>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int a, b, c, d;
    std::cout << "4 numbers: ";
    std::cin >> a >> b >> c >> d;

    
    int result = lcm(a, b);     
    result = lcm(result, c);    
    result = lcm(result, d);    

    std::cout << "the lcm is: " << result << std::endl;

    system("pause>0");
}

