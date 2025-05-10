#include <iostream>

// Create a program that takes an amount in cents and provides change using the least number of bills and coins possible

/* 1 dollar is 100 cents
 1 quarter is 25 cents
 1 dime is 10 cents
 1 nickel is 5 cents
 1 penny is 1 cent
*/

int main() {
    
    int change_requested{};
    std::cout << "Please enter the amount you would like change for in cents: ";
    std::cin >> change_requested;
    
    int dollars{};
    int quarters{};
    int dimes{};
    int nickels{};
    int pennies{};
    
    dollars  =  change_requested / 100;
    quarters = (change_requested  % (100 * dollars)) / 25;
    dimes    = (change_requested  % (100 * dollars) % (25 * quarters)) / 10;
    nickels  = (change_requested  % (100 * dollars) % (25 * quarters) % (10 * dimes)) / 5;
    pennies  = (change_requested  % (100 * dollars) % (25 * quarters) % (10 * dimes) - (5 * nickels)) / 1;
    
    
    std::cout << "Your change is:" << "\n" << dollars << " dollars"
              << "\n" << quarters << " quarters"
              << "\n" << dimes << " dimes"
              << "\n" << nickels << " nickels"
              << "\n" << pennies << " pennies" << std::endl;
return 0;
}
