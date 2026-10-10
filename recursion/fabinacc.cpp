#include<iostream>
using namespace std;
int fab(int n){
    if(n==0){
        return 0;
    }
    else if(n==1) {
        return  1;
    }
    else {
        return fab(n-1)+fab(n-2);
    }
    }
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    cout<<"Fibonacci series of "<<n<<" is :";
    for (int i=0; i<=n; i++){
        cout<<fab(i)<<" ";
    }
    return 0;
}