// Default initialization

int a;

// Copy initialization

int width = 5;

// Direct initialization

int b (5);

// list initialization

int c {5}; // direct list initialization
int d = {4}; // copy list initialization

// value or zero initialization --> initializes the value to zero

int e {}; 


// function to check data type
#include <iostream>

int main(){

std::cout << typeid(c).name();
return 0;
}

