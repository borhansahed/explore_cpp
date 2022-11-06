#include<iostream>
using namespace std;

int main (){

    int n[3] = {1,3,4};

    int i = 0;
    int size = sizeof(n) / sizeof(n[0]);
    while (i<size)
    {
        cout<<n[i]<<endl;
        i++;
    }
    

    return 0;
}
