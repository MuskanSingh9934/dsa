/*#include<bits/stdc++.h>
using namespace std;
int main()
{

    for(int i = 2;i>=0;i--){
        for(int j =0;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 3;
    for(int i =0;i<=3;i++){
        for(int j =0;j<n-i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

