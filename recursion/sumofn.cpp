// #include<iostream>
// using namespace std;
// int sumofn(int n){
//     if(n==0){

//         return 0;
//     }
//     else{
//         return n + sumofn(n-1);
//     }
// }
// int main(){
//     int n;
//     cout <<"Enter the number :";
//     cin>>n;
//     cout<<sumofn(n);
//     return 0;
// }

#include<iostream>
using namespace std;
int sumofn(int n , int s=0){
    if(n==0){
       

        return s ;
    }
    else{
      
        return sumofn(n-1,s+n); ;
       
    }
}
int main(){
    int n;
    cout <<"Enter the number :";
    cin>>n;
    cout<<sumofn(n,0);
    return 0;
}