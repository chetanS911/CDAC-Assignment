#include<iostream>
using namespace std;

int main() {

    int statusReg = 0b10110001;    
    int controlReg = 0b00000000;  
    int dataReg = 0b11001010;      

    const int* regPtr1 = &statusReg;
    cout << "Status Register: " << *regPtr1 << endl;

    //Error: cannot change the value because it is a pointer to const int

    regPtr1 = &controlReg;
    //Error : in this it not a const

    int* const regPtr2 = &controlReg;
    
    *regPtr2 = 25;
    cout << "Control register: " << *regPtr2 << endl;

    //Error: again it is also the const pointer so cannot change the address

    const int* const regPtr3 = &statusReg;
    cout << "Status Register: " << *regPtr3 << endl;

    return 0;
}
