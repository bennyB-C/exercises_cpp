#include <iostream>
#include <climits>

using namespace std;

int max_sum(int *arr,int ini,int med, int fin){
    int left_sum = INT_MIN;
    int sum = 0;
    for (int i = med; i >= ini; --i){
        sum += arr[i];
        if(sum > left_sum){
            left_sum = sum;
        }
    }

    int right_sum = INT_MIN;
    sum = 0;
    for (int i = fin; i >= med+1; --i){
        sum += arr[i];

        if(sum > right_sum){
            right_sum = sum;
        }
    }

    return left_sum + right_sum;
}

int max(int a, int b){
    if(a > b)
        return a;
    return b;
}

int max_sum(int *arr,int ini, int fin){
    // to find the max sum:
    if(ini == fin) return arr[ini];

    int med = (ini + fin) / 2;

    int left = max_sum(arr, ini, med);
    int right = max_sum(arr, med+1, fin);
    int middle = max_sum(arr, ini, med, fin);

    return max(left, max(right, middle));
}

int main(){

    int arr[]{1,5,4,9,-34};
    // find the max sum
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "The max sum is " << max_sum(arr,0,n-1);

    return 0;
}