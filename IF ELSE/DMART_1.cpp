
// D_MART SCANNER.

#include <iostream>
using namespace std;

int main()
{
    int op;
    cout << "Enter your choice: ";
    cin >> op;
    int price = 0;
    switch (op)
    {
    case 1:
        int vegetable;
        cout << "Enter the Vegetable in Kg: ";
        cin >> vegetable;
        price = 15 * vegetable;
        break;
    case 2:
        int Rice;
        cout << "Enter the Rice in Kg: ";
        cin >> Rice;
        price = 30 * Rice;
        break;
    case 3:
        int Fruits;
        cout << "Enter the Fruits in Kg: ";
        cin >> Fruits;
        price = 300 * Fruits;
        break;
    case 4:
        int DryFruits;
        cout << "Enter the DryFruits in Kg: ";
        cin >> DryFruits;
        price = 600 * DryFruits;
        break;
    case 5:
        int Stationary;
        cout << "Enter the Stationary in Pieces: ";
        cin >> Stationary;
        price = 60 * Stationary;
        break;
    case 6:
        int Chocolate;
        cout << "Enter the Chocolate in Pieces: ";
        cin >> Chocolate;
        price = 50 * Chocolate;
        break;
    case 7:
        int Clothes;
        cout << "Enter the Clothes in Pieces: ";
        cin >> Clothes;
        price = 1000 * Clothes;
        break;
    case 8:
        int Detergent;
        cout << "Enter the Detergent in Kg: ";
        cin >> Detergent;
        price = 1000 * Detergent;
        break;
    default:
        cout << "INVALID CHOICE" << endl;
        return 0; 
    }

    // Adding GST calculation
    if (price > 10000)
    {
        float gst = price * 0.05; // GST (5% of total price)
        price =price + gst; 
        cout << "Final Amount with GST: " << price << endl;
    }
    else
    {
        cout << "Final Amount Without GST: " << price << endl;
    }

    return 0;
}
