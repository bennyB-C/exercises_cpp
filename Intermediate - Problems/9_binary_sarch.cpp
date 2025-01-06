#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int my_binary_search(int *arr,int t, int ini, int fin){
    if(ini == fin){
        if(arr[ini] == t)
            return ini;
        return -1;
    }

    int mid = (ini + fin) / 2;

    //select paths
    if(t > arr[mid])
        return my_binary_search(arr, t, mid + 1, fin);
    else
        return my_binary_search(arr, t, ini, mid);
}

void merge(int *arr, int ini, int mid, int fin){
    int p,q;
    int len1 = mid - ini + 1;
    int len2 = fin - mid;
    int A[len1+1]{}, B[len2+1]{};

    for (int i = ini; i <= mid; ++i){
        A[i-ini] = arr[i];
    }
    A[len1] = 999;

    for (int i = mid+1; i <= fin; ++i){
        B[i - (mid+1)] = arr[i];
    }
    B[len2] = 999;

    p = 0;
    q = 0;
    for (int i = ini; i <= fin; ++i){
        if(A[p] > B[q]){
            arr[i] = B[q++];
        }
        else{
            arr[i] = A[p++];
        }
    }
}

void merge_sort(int *arr, int ini, int fin){
    if(ini == fin)
        return;

    int mid = (ini + fin) / 2;
    merge_sort(arr,ini,mid);
    merge_sort(arr, mid + 1, fin);
    merge(arr, ini, mid, fin);
}

int main(){

    int arr[]{67,3,8,8,4,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = arr[0];
    // in order to use binary_search you should
    // sort your array
    cout << "Target is " << target << endl;
    merge_sort(arr, 0, n - 1);
    cout << "Merging ..." << endl;
    cout << "---------------------" << endl;
    cout << "After merging, the array is: " << endl;
    cout << "---------------------" << endl;
    int i = 0;
    cout << "Element ----- Index" << endl;
    for(int a : arr){
        cout << setw(4) << a << setw(7) << ':' << setw(6) << i << endl;
        ++i;
    }
    cout << "---------------------" << endl;
    int posicion = my_binary_search(arr,target,0,n-1);
    cout << "the required pos is: " << posicion << endl;
    return 0;
}