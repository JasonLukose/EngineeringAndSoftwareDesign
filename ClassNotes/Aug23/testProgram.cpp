// This is a program about if-else statements

// Preprocessor Directive - including I/O Lib
#include <iostream>

// using statement to get rid of library infront of methods
using namespace std;


int main ()
{
// Declare our variables - variables must have a type/class and a name/identifier

    int n1;
    int n2;
// Two integers are declared above
// Reserves memory to store something, in this case integer values


// This statement stores 7 in n1
    n1 = 7;

// User store two integers in n1 and n2
// First prompt them


    std::cout << "Please enter two integers: ";
    std::cin >> n1 >> n2;
// This steams from standard input into two variables


// Let's check: what ended up in n1 and n2?
    std::cout << "The two integers were: " << n1 << " and " << n2 << std::endl;

// Now to learn if-else statements:

    if (n1 > n2) {
        std::cout << n1 << " is larger than " << n2 << endl;
    } else if (n1 < n2) {
        std::cout << n2 << " is larger than " << n1 << endl;
    } else {
        cout << "They are equal!" << endl;
    }



return 0;
}
