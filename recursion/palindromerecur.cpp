#include<iostream>
using namespace std;
int palindrome( int n, int rev=0){
    if(n==0){
        return rev;
    }
    else{
        return (palindrome(n/10, rev*10 + n%10));
    }

}
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;

    int rev=palindrome(n);
    if(rev==n){
        cout<<"it is palindrome";

    }
    else{
        cout<<"It is not palindrome";
    }
      return 0;
}