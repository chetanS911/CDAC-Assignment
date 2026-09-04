#include<iostream>
using namespace std;

void resetSensorPairV1(int reading1, int reading2) {
    int temp = reading1;
    reading1 = reading2;
    reading2 = temp;
}
void resetSensorPairV2(int& reading1, int& reading2){
    int temp = reading1;
    reading1 = reading2;
    reading2 = temp;
}
void resetSensorPairV3(int* reading1, int* reading2){
    int temp = *reading1;
    *reading1 = *reading2;
    *reading2 = temp;
}

int main() {
    int A = 55;
    int B = 12;

    cout << " Call by VAlue " << endl;
    cout << "before: A= " << A << " B= " << B << endl;
    resetSensorPairV1(A,B);

    cout << "After : A= " << A << " B= " << B << endl;
    cout << endl;

    cout << " Call by Refrence " << endl;
    cout << "before: A= " << A << " B= " << B << endl;
    resetSensorPairV2(A,B);

    cout << "After : A= " << A << " B= " << B << endl;
    cout << endl;

    cout << " Call by pointer " << endl;
    cout << "before: A= " << A <<  " B= " << B << endl;
    resetSensorPairV3(&A, &B);

    cout << "After : A= " << A << " B= " << B << endl;
    

    return 0;
}
