// Write a program to find the mean and standard deviation of numbers. The
// mean (average) of n numbers x1, x2, . . ., xn is x ¼ (x1 + x2 + ... + xn) / n.

#include <vector>
#include <iostream>
#include <cmath>

using namespace std;
double stdDev(vector<double> invec){
    double sum=0;
    for (double item:invec){
        sum+=item;
    }
    double count=invec.size();
    double avg=sum/count;
    double topsum=0;
    for (double item:invec){
        double diff=item-avg;
        topsum+=diff*diff;
    }
    return sqrt(topsum/count);
};

int main(){
    vector<double> testvec={1.2,4.2,.7664,0.1325243,2431,232,31.142,2131};
    cout << "The standard deviation is " << stdDev(testvec) << endl;

    return 0;
}