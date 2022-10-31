// TakeOrder.cpp
// Peyton Philyaw

#include <iostream>

using namespace std;

//Constants
double C_S = 0.99, C_M = 1.99, C_L = 2.99;
double T_S = 0.99, T_M = 1.49, T_L = 1.99;
double S_S = 1.99, S_M = 2.49, S_L = 2.99;

//Methods
void DrinkPrompt();

int main()
{
    string size, type;
    int a;

    cout << "Welcome to Clink It And Drink It!" << endl << endl;
    cout << "Menu:   Coffee  Tea     Soda   Water\n" << 
            "Small   $0.99   $0.99   $1.99  Free\n" << 
            "Medium  $1.99   $1.49   $2.49  Free\n" << 
            "Large   $2.99   $1.99   $2.99  Free" << endl << endl;

    cout << "So how many drinks are we going to be getting today?" << endl;
    cin >> a;

    cout << "\nWonderful! Lets go ahead and start getting the orders ready!" << endl;

    for (int i = 0; i < a; i++) {
        DrinkPrompt();
    }

    

    return 0;
}

void DrinkPrompt() {

    string x, y;
    
    cout << "What drink would you like?" << endl;
    do {
        cin >> x;
        if (x != "coffee" && x != "Coffee" && x != "tea" && x != "Tea" && x != "soda" && x != "Soda" && x != "water" && x != "Water") {
            cout << "I dont believe that is on the menu... Look at the menu and pick one of the options on there please" << endl;
        }
    } while (x != "coffee" && x != "Coffee" && x != "tea" && x != "Tea" && x != "soda" && x != "Soda" && x != "water" && x != "Water");
    
    cout << "Great choice! And what size are we getting that in today?" << endl;
    do {
        cin >> y;
        if (y != "small" && y != "Small" && y != "medium" && y != "Medium" && y != "large" && y != "Large") {
            cout << "We sadly do not have that size, please choose another from our menu" << endl;
        }
    } while (y != "small" && y != "Small" && y != "medium" && y != "Medium" && y != "large" && y != "Large");

}
