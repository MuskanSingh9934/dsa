#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 6;
    int arr[n] = {1,2,3,4,5,6};
    int odd = 0;
    int even = 0;

    for(int i = 0; i < n; i++){

        // Even Number 
        if(arr[i]%2==0){
            // even += arr[i];
            even = even + arr[i];
        }
        // Odd Number odd = odd + arr[i];
        else{

            odd = odd + arr[i];

        }
    }


    cout<<"Even Number Sum "<<even<<endl;
    cout<<"Odd Number Sum "<<odd<<endl;

    

}