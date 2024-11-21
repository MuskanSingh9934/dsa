#include<bits/stdc++.h> 
using namespace std;
int main()
{
   int a[5]={3,5,6,10,11};
   int n=5;
    for(int i=0;i<=n/2;i++){
        // a[i]=a[n-i-1];
        swap(a[i],a[n-i-1]);
        


    }
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }

}

