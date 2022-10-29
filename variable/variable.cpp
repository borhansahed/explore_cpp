#include<iostream>
using namespace std;


int main (){
    int a;
    int b;
   cout<< "a:" << endl; 
    cin>>a;

   cout<< "b:";
    cin>>b;

    int temp = b;
    b = a;
    a = temp;

    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    
    
    
    return 0;
}
