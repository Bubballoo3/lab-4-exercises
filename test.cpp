// A test program for all four excercises
#include "enhancedVector.cpp"

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    cout << "Made" << endl;
    // create a new vector object with our added functions from the exercises
    EnhancedVector ev;    
    string filename;
    // ask user for a csv file to load in with input file stream
    cout << "Please enter a .csv file to read a vector from.\n" << endl;
    cin >> filename;
    // create an input stream out of the file
    std::ifstream file(filename);
    // create an object to hold the current line being read [although there should only ever be one]
    std::string line;
    // perform the following if a line exists in the file
    if (getline(file, line)) {
        // create a stringstream object ss from the line
        std::stringstream ss(line);
        //create a string to hold individual values while they are being parsed
        std::string value; 
        //separate out the line by commas using getline
        while (getline(ss, value, ',')) {
            // add each value (converted to an integer) to the vector 
            ev.push_back(stoi(value)); 
        }
    }

    // Create a menu of options for the user in an indefinite while loop. 
    int choice;
    double value;
    while(true){
        cout << "Please select a computation from the list below:\n1. Find the smallest, largest, and average value\n2. Reverse the elements of the vector in memory\n3. Search the vector for a value\n4. Find the standard deviation of the values in the vector\n5. Find the number of occurrences of each value in the vector\n6. Exit the program" << endl;
        cin >> choice;

        switch(choice){
            case 1:
                ev.displayStats();
                break;
            case 2:
                ev.reverse();
                break;
            case 3:
                cout << "Enter a value to search for:\n";
                cin >> value;
                ev.search(value);
                break;
            case 4:
                ev.stdDev();
                break;
            case 5:
                ev.displayCounts();
                break;
            case 6:
                exit(0);
                break;
            default:
                cout << "Invalid choice. \n";
        }
    }
    
}