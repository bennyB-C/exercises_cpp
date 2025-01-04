#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool binary_search_two_sums(vector<int> arr,int c_target, int ini, int fin)
{
    if(ini == fin){ // when i finish searching
        if(arr[ini] == c_target)
            return true;
        return false;
    }
        
    int med = (ini + fin) / 2;

    if(c_target > arr[med]){
        return binary_search_two_sums(arr, c_target, med+1, fin);
    }
    else{
        return binary_search_two_sums(arr, c_target, ini, med);
    }

}

int main()
{
    vector<int> ans;
    vector<int> arr {2,2,3,5,1,3,5};

    sort(arr.begin(), arr.end());
    int target = 6;
    for (int i = 0; i < arr.size(); ++i)
    {
        int complement = target - arr[i];
        if(binary_search_two_sums(arr,complement,i+1,arr.size()-1)) // i+1 so that i don't search it and find the same number that im using
        {
            ans.push_back(arr[i]);
            ans.push_back(complement);
            break;
        }
    }
    cout << "Answer: " << endl;
    for(int i : ans)
    {
        cout << i << ' ';
    }
    return 0;
}