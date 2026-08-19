#include<iostream>
using namespace std;
int main(){
    int a=1, b=5, temp;
    int n=10;
    
    for(int i=0; i<10; i++){

        cout<<a<<" ";
        temp=a+b;
        a=b;
        b=temp;
        
       
    }
    return 0;

}