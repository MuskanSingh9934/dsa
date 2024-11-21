#include<bits/stdc++.h>
using namespace std;

int add(int a, int b, int c) {
    return a + b + c;
}

float per(int result) {
    return ((float)result / 30) * 100;
}


int main() {
    int result = add(3, 2, 4);
    cout << "Total " << result << " ";
    cout << "Percentage " << per(result);
}