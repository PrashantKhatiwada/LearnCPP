#include <iostream>
int main(){
// std:: endl is used to print a newline. We can use \n as well

// cout

int var{5}; // variable initialization with value 5
std:: cout << "Hello, world!\n";
std:: cout << 4 << '\n';
std:: cout << var << "\n";
std:: cout << "Hello" << " World!\n";
std:: cout << "The value of var is: " << var << '\n';

//cin

std::cout << "Enter a number: ";
int num{};
int num2{};

std:: cin >> num >> num2;
std:: cout << "You entered " << num << " and " << num2 << '\n';

// std::cout and std::cin are buffered

return 0;

}