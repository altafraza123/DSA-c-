#include<iostream>
using namespace std;
int main(){

    int n=153,sum=0,rem;
    int temp=n;
    while (n!=0){
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }

    if(sum==temp){
        cout<<"number is armstrong ="<<sum<<endl;

    }
    else{
        cout<<"not armstrong";
    }
    return 0;
}