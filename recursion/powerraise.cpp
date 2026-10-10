#include<iostream>
using namespace std;
int power(int a, int b){
if(b==0){
    return 1;
}else{
    return a*power(a,b-1);
}
}
int main(){
    int a;
    cout<<"Enter power :";
    cin>>a;
    int b;
    cout<<"Enter base :";
    cin>>b;
    int p= power(a,b);
    cout<<a <<" "<<"is to power "<< b << " "<<"is equal to :"<<p;

}
