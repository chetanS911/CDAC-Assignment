#include<iostream>
using namespace std;

double reorderCost(int qty, double unitPrice){
    return qty * unitPrice;
}

double reorderCost(double qty, double unitPrice){
    return qty * unitPrice;
}

double reorderCost(int qty, double unitPrice,  double taxRate){
    int normalCost;
    double tax;

    normalCost = qty * unitPrice;
    tax = (taxRate / 100) * normalCost;

    return normalCost + tax;
}

double applydiscount(double price, double discountPercent = 10.0){

    double discount = (discountPercent / 100) * price;

    return price - discount;
}

int main() {
    
    cout << reorderCost(10, 50.0) << endl;

    cout << reorderCost(2.5, 80.0) << endl;

    cout << reorderCost(10, 100.0, 18.0) << endl;

    cout << applydiscount(1000.0) << endl;

    cout << applydiscount(1000.0, 20.0) << endl;

    return 0;
}