#include<iostream>
using namespace std;
int main(){
    int n=7,fact=1;
    cout<<"Enter any number=";
    cin>>n;


    for(int i=n; i>=1; i--){
     fact=fact*i;

    }
    cout<<"fact0rial is="<<fact<<"\n";
    return 0;
}