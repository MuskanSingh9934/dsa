#include<bits/stdc++.h>g++
using namespace std;

int main(){
    int n = 4;
    int m = 3;
    int arr1[n];
    for(int i = 0; i< n; i++){
        cin>>arr1[i];
    }
    int arr2[m];
    for(int i = 0; i< m; i++){
        cin>>arr2[i];
    }
    int array[m + n];
    int x = n;
    for(int i = 0; i< n;i++){
        array[i] = arr1[i];
    }
    for(int i = 0; i< m;i++){
        array[x] = arr2[i];
        x++;
    }

    for(int i =0; i< m+n; i++){
        cout<<array[i]<<" ";
    }
    

}