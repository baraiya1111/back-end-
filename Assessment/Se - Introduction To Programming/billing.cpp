#include <iostream>
#include <string>

using namespace std;

int main() {
   
    int choice, quantity;
    double totalBill = 0.0;
    double currentAmount = 0.0;
    char addMore;

   
    const double pricePizza = 180.0;
    const double priceBurger = 100.0;
    const double priceDosa = 120.0;
    const double priceIdli = 50.0;

    cout << "---------- Welcome to the Food Billing System ----------" << endl;

    
    do {
        
        cout << "\n---------- Manu ----------" << endl;
        cout << "1. Pizza   price = 180rs/pcs" << endl;
        cout << "2. Burger  price = 100rs/pcs" << endl;
        cout << "3. Dosa    price = 120rs/pcs" << endl;
        cout << "4. Idli    price = 50rs/pcs" << endl;

        
        cout << "\nPlease Enter your choose... : ";
        cin >> choice;

       
        switch (choice) {
            case 1:
                cout << "\nYou have selected Pizza." << endl;
                cout << "Enter the quantity : ";
                cin >> quantity;
                currentAmount = pricePizza * quantity;
                break;
            case 2:
                cout << "\nYou have selected Burger." << endl;
                cout << "Enter the quantity : ";
                cin >> quantity;
                currentAmount = priceBurger * quantity;
                break;
            case 3:
                cout << "\nYou have selected Dosa." << endl;
                cout << "Enter the quantity : ";
                cin >> quantity;
                currentAmount = priceDosa * quantity;
                break;
            case 4:
                cout << "\nYou have selected Idli." << endl;
                cout << "Enter the quantity : ";
                cin >> quantity;
                currentAmount = priceIdli * quantity;
                break;
            default:
                cout << "\nInvalid choice! Please select a valid item." << endl;
                currentAmount = 0;
                break;
        }

       
        totalBill += currentAmount;
        if (currentAmount > 0) {
            cout << "Amount : " << currentAmount << endl;
            cout << "Total Amount is = " << totalBill << endl;
        }

        
        cout << "Do you want to place more orders? y & n : ";
        cin >> addMore;

    } while (addMore == 'y' || addMore == 'Y');

   
    cout << "\n------------------------------------------------" << endl;
    cout << "Final Bill Amount: " << totalBill << " rs" << endl;
    cout << "Thank you for ordering with us!" << endl;
    cout << "------------------------------------------------" << endl;

    return 0;
}
