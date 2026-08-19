#include <iostream>
using namespace std;
int main(){

    int a=4, b=6;
    
    cout<<"before swapping\n";
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;

    a=a+b;
    b=a-b;
    a=a-b;
    
     cout<<"after swapping\n";
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;

    return 0;


}