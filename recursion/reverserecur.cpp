#include<iostream>
using namespace std;
int reversedigit(int n, int rev=0){
    if(n==0){
        return rev;
    }
    else{
        return reversedigit(n/10 ,rev*10 + n%10);
    }


}
int main(){
   int n=34567;
   cout<<reversedigit(n);
   return 0;
}