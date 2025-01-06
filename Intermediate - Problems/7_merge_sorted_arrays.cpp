#include <iostream>
#include <vector>

using namespace std;

class Solution{


    public:
        void merge_two_sorted(vector<int>&nums1, vector<int>& nums2, int m, int n){
            if(m == 0 && n>0){
                nums1 = nums2;
                return;
            }
            if(m > 0 && n <=0)
                return;

            int i, j, k;

            // three pointers technique:
            i = m - 1;
            j = n - 1;
            k = m + n - 1;

            while(true){
                if(nums1[i] > nums2[j]){
                    nums1[k--] = nums1[i--];
                }
                else
                    nums1[k--] = nums2[j--];
                if(i<0 || j<0)
                    break;
            }

            while(i>=0 && k>=0)
                nums1[k--] = nums1[i--];
            while(j>=0 && k>=0)
                nums1[k--] = nums2[j--];
        }

        void show_result(vector<int> &answ){
            for (int i = 0; i < answ.size();++i){
                if(i == 0)
                    cout << '[';
                cout << answ.at(i);
                if(i== answ.size()-1){
                    cout << ']';
                }
                else
                    cout << ", ";
            }
        }

};

int main(){
    vector<int> nums1{2,4,7,0,0,0,0};
    vector<int> nums2{-1,2,3,8};
    Solution sol;
    sol.merge_two_sorted(nums1,nums2,3,4);
    sol.show_result(nums1);

    return 0;
}