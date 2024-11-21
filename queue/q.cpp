#include<bits/stdc++.h> 
using namespace std;

int main(){
    queue<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    while( st.empty()==false){
         cout<<st.front()<<" ";
        //st.pop();

    }

    cout<<st.front();
}