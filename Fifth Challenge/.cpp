// Section 9
// Challenge
/*    
    This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.
    
    Your program should display a menu options to the user as follows:
    
    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:
    
The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
displayed again.


If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space. 
For example, [ 1 2 3 4 5 ]
      
If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list 
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, "5 added".
Duplicate list entries are OK

If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calculate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the list.
For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
If the list is empty you should display, "Unable to determine the smallest number - list is empty"

If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
If the list is empty you should display, "Unable to determine the largest number - list is empty"

If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.

Before you begin. Write out the steps you need to take and decide in what order they should be done.
Think about what loops you should use as well as what you will use for your selection logic.

This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

Finally, be sure to test your program as you go and at the end.

Hint: Use a vector!

Additional functionality if you wish to extend this program.

- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas!

Good luck!

*/
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    
    std::vector<int> vec;
    int value {};
    
    char input;
    
    do{
    std::cout << "P" " - " "Print numbers" << std::endl;
    std::cout << "A" " - " "Add a number" << std::endl;
    std::cout << "M" " - " "Display mean of the numbers" << std::endl;
    std::cout << "S" " - " "Display the smallest number" << std::endl;
    std::cout << "L" " - " "Display the largest number" << std::endl;
    std::cout << "Q" " - " "Quit" << std::endl;
    std::cout << "\nEnter your choice: ";
    std::cin >> input;
   
        
    switch(input){
        
        case 'P':
        case 'p':{
                
            if(vec.empty() == true){
                    std::cout << "[] - the list is empty \n" << std::endl;
            }
            else{   
                std::cout <<"[ ";
                for(auto nums : vec){
                    std::cout << nums << " ";
                }
                std::cout <<"] \n";
            }
        break;
        }
        case 'A':
        case 'a':{
        
            std::cout << "Please enter an integer to add to the list ";
            std::cin >> value;
            std::cout << value << " added" << std::endl;
            
            vec.push_back(value);
        break;
        }
        case 'M':
        case 'm':{
            
            double sum {};
            double index {};
            
            if(vec.empty()){
                std::cout << "Unable to calculate the mean - no data" << std::endl;
            }
            else{
                for(auto nums : vec){
                    sum += nums;
                }
                while(index < vec.size()){
                    ++index;
                }
                double mean  = sum / index;
                std::cout << "The mean of the list is " << mean << std::endl;
            }
        break;
        }
        
        case 'S':
        case 's':{
                
                if(vec.empty()){
                    std::cout << "Unable to determine the smallest number - list is empty" << std::endl;
                }

                else{
                    int min_value = vec.at(0);
                    for(unsigned i = 0; i < vec.size(); ++i){
                        if(vec.at(i) <= vec.at(0)){
                            min_value = vec.at(i);
                        }
                    }
                    std::cout << "The smallest number is " << min_value << std::endl;
                }
        break;
        }
        
        case 'l':
        case 'L':{
                if(vec.empty()){
                    std::cout << "Unable to determine the largest number - list is empty" << std::endl;
                }            
            
                 else{
                    int max_value = vec.at(0);
                    for(unsigned i = 0; i < vec.size(); ++i){
                        if(vec.at(i) >= vec.at(0)){
                            max_value = vec.at(i);
                        }
                    }
                    std::cout << "The largest number is " << max_value << std::endl;
                }
        break;       
        
        
        }
        
        case 'q':
        case 'Q':
            std::cout << "Goodbye" << std::endl;
        break;
        
        default:
            std::cout << "Unknown selection, please try again" << std::endl;
        break;
    
    }
    }while(input != 'Q' && input != 'q');
return 0;
}
