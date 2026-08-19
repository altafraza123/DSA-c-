#include<iostream>
using namespace std;
int main(){

    int n=123454321,rev=0,rem;
    int checking=n;

    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }

 if(rev==checking){
    cout<<"number is palindrome =" <<rev<<endl;
 }
 else{
    cout<<"number is not palindrome";
 }
 return 0;

}