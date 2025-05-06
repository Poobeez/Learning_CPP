#include <iostream>

/*
 * I'm going to keep my pseudocode in the file for future reference and to see my thought process
 
 * Frank's carpet cleaning service charges $25 for small rooms and $35 for large rooms
 * Sales tax rate is 6%
 * Estimates valid for 30 days
 * =======================================================
 * Challenge:
 * Prompt the user for how many small rooms they want cleaned, and then how many large rooms they want cleaned
 * Provide an estimated cost based on the user's input
 * =======================================================
 * PSEUDOCODE:
 * Greetings
 * prompt user for number of small rooms to clean
 * prompt user for number of large rooms to clean
 * calculate product of small and large rooms
 * calculate total sum
 * apply sales tax to total sum
 * provide user with estimated price
 *========================================================
*/

int main() {
    
    std::cout << "Hello and welcome to Frank's carpet cleaning service" << std::endl;
    std::cout << "\nHow many small rooms would you like to have cleaned? ";
    
    int number_of_small_rooms {};
    std::cin >> number_of_small_rooms;
    
    std::cout << "\nGreat, and how many large rooms would you like to have cleaned? ";
    int number_of_large_rooms {};
    std::cin >> number_of_large_rooms;
    
    std::cout << "\nNumber of small rooms to be cleaned: " << number_of_small_rooms << std::endl;
    std::cout << "\nNumber of large rooms to be cleaned: " << number_of_large_rooms << std::endl;
    
    const int small_room_price {25};
    const int large_room_price {35};
    std::cout << "Price per small room: " << small_room_price << std::endl;
    std::cout << "Price per large room: " << large_room_price << std::endl;
    
    int cost_before_tax = (number_of_small_rooms * small_room_price + number_of_large_rooms * large_room_price);
    double sales_tax {0.06};
    double total_tax = (cost_before_tax  * sales_tax);
    
    std::cout << "Cost: " << cost_before_tax << std::endl;
    std::cout << "Tax: " << total_tax << std::endl;
    
    double total_cost = (cost_before_tax + total_tax);
    std::cout << "==========================================" << std::endl;
    std::cout << "Total Estimate: " << total_cost << std::endl;
    
    int days_valid {30};
    std::cout << "This estimate is valid for " << days_valid << " days" << std::endl;
    
    
    
return 0;
}
