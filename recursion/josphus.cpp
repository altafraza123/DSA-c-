#include<iostream>
using namespace std;
class solution{
    public:
    int josephus(int n, int k){
       if(n==1) return 1;

       else{
        return (josephus(n-1,k) + k-1)%n+1;
       }
    }
};
int main(){
    int n, k;

    
    cout<<"enter n : ";
    cin>>n;
    cout<<"enter k :";
    cin>>k;

    cout<<solution().josephus(n,k);
    return 0;



}