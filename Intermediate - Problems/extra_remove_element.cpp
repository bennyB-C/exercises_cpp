#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector <int> s;
        for (vector<int>::iterator it = nums.begin();
            it!=nums.end() ; ++it)
        {
            if(val != *it){
                s.push_back(*it);
            }
            else{
                nums.erase(it);
                --it;
            }
        }
        return s.size();
    }
};

int main(){
    Solution sol;
    vector<int> nums{3, 2, 2, 3};
    int val = 3;
    cout << sol.removeElement(nums,val);
    // good one
    return 0;
}