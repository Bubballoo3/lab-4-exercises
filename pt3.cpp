/*3. Write a program that uses a vector object to store a set of real numbers. 
The program outputs the smallest, largest, and average of the numbers. 
When declaring the vector object, do not specify its size. 
Use the function push_back to insert elements in the vector object.*/

#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main() {
    //create the input vector
    std::vector<int> input;
    
    // load in a csv file with input file stream
    std::ifstream file("testdata.csv");

    // create an object to hold the line being read
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
            input.push_back(stoi(value)); 
        }
    }


    //find the smallest, largest, and average value
    //create variables to store these values
    int min, max;
    double avg;
    bool first = true; 
    //iterate over the vector
    for(auto iter = input.begin(); iter != input.end(); ++iter){
        // simply load the first value into each, then modify
        if(first){
            min = *iter;
            max = *iter;
            avg = *iter;
            first = false;
        } 
        // logic to find min and max
        else{
            if(*iter < min){
                min = *iter;
            }
            else if(*iter > max){
                max = *iter;
            }
            // keep a running total in avg
            avg += *iter;
        }
    }
    //divide by the length of the vector to get an average
    avg = avg/input.size();

    // output the results 
    std::cout << "The minimum value is " << min << "." << std::endl;
    std::cout << "The maximum value is " << max << "." << std::endl;
    std::cout << "The average value is " << avg << "." << std::endl;
    return 0;
}