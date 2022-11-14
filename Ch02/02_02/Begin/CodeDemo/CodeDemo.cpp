// Learning C++ 
// Exercise 02_02
// Variables, course by Eduardo Corpeño 

#include <iostream>

using namespace std;
//global variables accessible to all parts of the code
// memory managed statically by the complier, allocated in data segment of memory
int a, b = 5; 

int main(){
    bool my_flag;
    a = 7;
    my_flag = false;
    cout << "a = " << a << endl; //7
    cout << "b = " << b << endl; //5
    cout << "flag = " << my_flag << endl; // flag = 0

    my_flag = true;
    cout << "flag = " << my_flag << endl; // flag = 1
    cout << "a+b = " << a+b << endl; // 7 + 5 = 12
    cout << "b-a = " << b-a << endl; // 5-7 = -2

    // unsigned variable to store a negative number
    unsigned int positive;
    positive = b - a;
    cout << "b-a (unsigned) = " << positive << endl; //b-a (unsigned) = 4294967294 ie 2^32 - 2
    return (0);
}
