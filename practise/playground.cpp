#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> myvector;
    
    // Use push_back to add elements to the vector
    myvector.push_back(1);
    myvector.push_back(2);
    myvector.push_back(3);
    // myvector.push_back(4);
    // myvector.push_back(5);

int size= myvector.size();
int sum=pow(10,(size-1));
cout<<sum<<endl;
    return 0;
}
