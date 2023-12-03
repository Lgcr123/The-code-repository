//
// Created by AXuuu on 2023/12/3.
//
#include <iostream>

using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(b<40||(4*a+b*6)<600){
        cout<<"No";
    } else{
        cout<<"Yes";
    }
    return 0;
}