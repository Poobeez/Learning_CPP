/*  Section 7
    Challenge
    
    Write a C++ program as follows:
    
   1) Declare 2 empty vectors of integers named
    vector1 and vector 2, respectively.
    
   2) Add 10 and 20 to vector1 dynamically using push_back
    Display the elements in vector1 using the at() method as well as its size using the size() method
    
   3) Add 100 and 200 to vector2 dynamically using push_back
    Display the elements in vector2 using the at() method as well as its size using the size() method

   4) Declare an empty 2D vector called vector_2d
    Remember, that a 2D vector is a vector of vector<int>
    
   5) Add vector1 to vector_2d dynamically using push_back
    Add vector2 to vector_2d dynamically using push_back
    
   6) Display the elements in vector_2d using the at() method
    
   7) Change vector1.at(0) to 1000
    
   8) Display the elements in vector_2d again using the at() method
    
   9) Display the elements in vector1 
    
   10) What did you expect? Did you get what you expected? What do you think happended?
*/

#include <iostream>
#include <vector>

int main() {
    
    //1
   std::vector<int> vector1; 
   std::vector<int> vector2; 
    
    //2
    vector1.push_back(10);
    vector1.push_back(20);
    
    std::cout << "\nVector1" <<std::endl;
    std::cout << vector1.at(0) << std::endl;
    std::cout << vector1.at(1) << std::endl;
    std::cout << size(vector1) << std::endl;
    
    //3
    vector2.push_back(100);
    vector2.push_back(200);
    
    std::cout << "\nVector2" <<std::endl;
    std::cout << vector2.at(0) << std::endl;
    std::cout << vector2.at(1) << std::endl;
    std::cout << size(vector2) << std::endl;    
    
    //4
    std::vector<std::vector<int>> vector_2d;
    
    //5
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    //6
    std::cout << "\nvector_2d" <<std::endl;
    std::cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << std::endl;
    std::cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << std::endl;
    
    //7
    vector1.at(0) = 1000;
    
    //8
    std::cout << "\nvector_2d" <<std::endl;
    std::cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << std::endl;
    std::cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << std::endl;

    //9
    std::cout << "\nvector1 updated" <<std::endl;
    std::cout << vector1.at(0) << std::endl;
    std::cout << vector1.at(1) << std::endl;
    
    //10
    /* 
     * vector_2d is the same after altering the first element of vector1 because we did not
     * update vector_2d with .push_back after updating the first element for vector1, which
     * is why vector1 has changed when we display it again, but vector_2d remains the same
     * */
    
return 0;
}
