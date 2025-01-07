#include <iostream>
#include <vector>
using namespace std;

int find_missing(vector<int> &nums, int m){
    for (int i = 0; i < m; ++i){
        if(i+1 != nums.at(i))
            return i + 1;
    }
    return 0;
}

int main(){
    // 1 --> n + 1
    // if n = 3:
        // 1, 2, 4
    int n = 7;
    vector<int> nums{1,2,3,4,5,6,8};
    int missing = find_missing(nums,n+1);
    if(!missing)
        cout << "Everthing correct";
    else{
        cout << "The missing one is " << missing << endl;
    }

    return 0;
}