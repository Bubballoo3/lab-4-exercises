// Write a program that uses a vector object to store a set of real numbers. The
// program outputs the smallest, largest, and average of the numbers. When declaring 
// the vector object, do not specify its size. Use the function push_back to
// insert elements in the vector object.

#include <vector>
#include <iostream>

using namespace std;
class EnhancedVector {
  private:
    vector<double> mainvec;

    vector<double> computeStats() {
        double sum=0;
        double min=mainvec[0];
        double max=mainvec[0];
        for (double item:mainvec){
            sum+=item;
            if (min > item){
                min=item;
            }
            if (max < item){
                max=item;
            }
        }
        double length=mainvec.size();
        double avg = sum/length;
        vector<double> rtnvec={min,avg,max};
        return rtnvec;
    }

  public:
    void push_back(double item){
        mainvec.push_back(item);
    }

    void displayStats(){
        vector<double> stats=computeStats();
        cout << "This vector has " << mainvec.size() << " items. The smallest is " 
        << stats[0] << ", the average is " << stats[1] << ", and the largest is "
        << stats[2] << "." << endl;
    }

};

int main(){
    EnhancedVector ev;
    ev.push_back(3.145);
    ev.push_back(8.921);
    ev.push_back(-1342.131242);
    ev.push_back(0.00000043);
    ev.push_back(1111.1411111141);

    ev.displayStats();

    return 0;
}
