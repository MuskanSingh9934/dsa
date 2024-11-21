 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    int a[3][3]={{1,1,0},{1,1,1},{0,1,1}};
    for(int i = 0;i<3;i++){
        cout<<i<<" -> ";
        for(int j=0;j<3;j++){
            if(a[i][j]==1){
                cout<<j<<" ";
            }
        }
        cout<<endl;

    }


 }