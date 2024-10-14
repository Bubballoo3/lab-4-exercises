#include <vector>
#include <iostream>

using namespace std;

template<class elemType>
int seqSearch(const std::vector<elemType> &list, const elemType& item){
    for(int i = 0; i < list.size(); i++){
        if(list[i] == item){
            return i;
        }
    }
    return -1;
}
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

    void search(double val){
        int place= seqSearch(mainvec,val);
        cout << "The number " << val << " was found at index " << place << endl;
    }

    void stdDev(vector<double> invec){
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
        cout << "The standard deviation is "<< sqrt(topsum/count) << endl;
    }
};

