#include <iostream>

using namespace std;

int main()
{
    // int arr_1[50]{1,2,4,5};
    // int arr_2[50]{3,6,7,10};
    int arr_1[50]{3,6,7,10};
    int arr_2[50]{1,2,4,5};
    int n_1 = 4;
    int n_2 = 4;

    int i = 0;
    int j = 0;
    bool primer = false;

    if(arr_1[i] < arr_2[j]){
        primer = true;
        ++i;
    }

    while(i<n_1 && j<n_2)
    {
        if(primer)
        {
            if(arr_1[i] > arr_2[j]){
                int k = arr_2[j];
                arr_2[j] = arr_1[i];
                arr_1[i] = k;
            }
            ++i;
        }
        else{
            if(arr_2[j] > arr_1[i]){
                int k = arr_1[j];
                arr_2[j] = arr_1[i];
                arr_1[i] = k;
            }
            ++j;
        }
    }

    if(j<n_2){
        for (; j < n_2; ++j){
            arr_1[i] = arr_2[j];
            ++i;
        }
    }
    if(i<n_1){
        for (; i < n_1; ++i){
            arr_2[j] = arr_1[i];
            ++j;
        }
    }
    
    if(primer){
        for(int a : arr_1){
            if(a!=0)
                cout << a << endl;
        }
    }
    else{
        for(int a : arr_2){
            if(a!=0)
                cout << a << endl;
        }
    }

    return 0;
}