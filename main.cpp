//
// Created by H460351 on 2/8/2024.
//
#include <iostream> // Include standard I/O facilities
using namespace std; //Make names from std visible without needing to add std::

double square(double x){
    return x * x;
}

void print_square(double x){
    cout << "The square of: " << x << " is " << square(x) << "\n";
}

void datatypes_demo(){
    // Operator << means "put to"
    // std::cout is the standard output stream
    // std:: specified that cout will be found within the standard library namespace
    std::cout << "Hello world\n";
    cout << "I'm a new line\n";
    print_square(1.23);
}

bool ask_answer(){
    cout << "Do you want to proceed (y/n)?";
    char ans = 0;
    cin >> ans; // Read answer from standard input // >> means "get from"
    if(ans == 'y') return true;
    return false;
}

int main(){
    datatypes_demo();
    ask_answer();
}