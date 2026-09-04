#include<iostream>
#include<string>
using namespace std;

class Product{
    private:
        int productId;
        string name;
        double price;
        int quantity;

    public:

        void acceptDetails(){
            cout << "Enter the Product Id: ";
            cin >> productId;

            cout << "Enter the name of product: ";
            cin >> name;

            cout << "Enter the price of product: ";
            cin >> price;

            cout << "Enter the qunatity of product: ";
            cin >> quantity;
        }

        void displayDetails() const {

            cout << productId << " " << name << " " << price << " " << quantity << endl;
        }

        double totalValue() const {

            return price * quantity;
        }

        bool isLowStock(int threshold) const {

            if(quantity < threshold)
                return true;

            return false;
        }

        
};


int main() {

    Product products[5];

    for(int i=0; i<5; i++){

        cout << "\nEnter thr products details: " << i + 1 << endl;
        products->acceptDetails();
    }

    cout << " ====Inventory Report====" << endl;
    for(int i=0; i<5; i++){
        products[i].displayDetails();
    }

    int highestValue = 0;

    for(int i=0; i<5; i++){

        if(products[i].totalValue() > products[highestValue].totalValue()){
            highestValue = i;
        }

        cout << "Highest Value Product: " << endl;
        products[highestValue].displayDetails();
    }

    int threshold;

    cout << "Enter the low stock threshold: ";
    cin >> threshold;

    cout << "\nLow stock product" << endl;

    for(int i=0; i<5; i++){

        if(products[i].isLowStock(threshold))
        {
            products[i].displayDetails();
        }
    }

    return 0;
}