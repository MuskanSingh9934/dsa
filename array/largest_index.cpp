#include<bits/stdc++.h>
using namespace std;
int main()
{
     
    int arr []={7,9,12,15, 50,67,5};
    int large = 0;
    for(int i =0;i<7;i++){
        if(arr[i]>arr[large]){

            large = i;
        }
        
    }
    cout<<" Print Largest Index Number "<< large<<endl;
}
