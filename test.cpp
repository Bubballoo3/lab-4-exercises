// A test program for all four excercises
#include "enhancedVector.cpp"

#include <iostream>
using namespace std;
int main(){
    cout << "Made" << endl;
    EnhancedVector ev;
    ev.push_back(3.145);
    ev.push_back(8.921);
    ev.push_back(-1342.131242);
    ev.push_back(0.00000043);
    ev.push_back(1111.1411111141);

    ev.displayStats();
}