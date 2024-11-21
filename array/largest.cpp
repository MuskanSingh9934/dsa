#include<bits/stdc++.h>
using namespace std;
int main()
{
    // large = 7
    //large =  
    int arr [4]={7,3,67,5};
    int large = arr[0];
    for(int i=0;i<4;i++){
        if(arr[i]>large){
            large = arr[i];
        }

    }
    cout<<"Print Largest Number "<<large <<endl;

}
