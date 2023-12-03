//
// Created by AXuuu on 2023/12/3.
//
#include <iostream>

using namespace std;

int main() {
    int n;
    int x=0,y=0;
    cin >> n;
    if(n%4==0){
        int total=n/4;
        x+=total*(-2);
        y+=total*(-2);
        cout << x << " " << y;
    }
    else{
        int sum=n/4;
        int yu=n%4;
        x+=sum*(-2);
        y+=sum*(-2);
        if(yu==1) x+=n;
        if(yu==2){
            x+=n-1;
            y+=n;
        }
        if(yu==3){
            x+=n-2;
            y+=n-1;
            x-=n;
        }
        cout << x << " " << y;
    }

    return 0;
}
