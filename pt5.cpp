/*5. Write the definition of the function template seqSearch to implement the sequential search on a vector object.

Also, write a program to test the function seqSearch. Use the function
push_back to insert elements in the vector object*/
#include <vector>
#include <iostream>

// This is the desired class. 
//If item is found in the list, returns the
//position of the item in the list; otherwise, returns -1.
template<class elemType>
int seqSearch(const std::vector<elemType> &list, const elemType& item){
    for(int i = 0; i < list.size(); i++){
        if(list[i] == item){
            return i;
        }
    }
    return -1;
}

int main() {
    std::cout << "Beginning sequential search test program.\nThe program will return the position of the value or -1.\n\n" << std::endl;
    int target;
    std::cout << "Enter a value to find: ";
    std::cin >> target;
    // create a test vector of assorted integers
    std::vector<int> vector = {1,3,5,7,9,10,20,30,40,50,-2,-4,-6,-8}; 
    std::cout << seqSearch(vector, target) << std::endl;

    return 0;
}

