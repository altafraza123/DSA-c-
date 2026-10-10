#include<iostream>
using namespace std;
int sumd( int n){
    if (n==0){
        return 0;
    }
    else{
        return n%10 + sumd(n/10);
    }
    }

int main(){
    int n=3874;
    cout<<sumd(n);
    return 0;
}