#include<iostream>
using namespace std;
int main(){
  int arr[]= {2,3,4,6,7,5};
  int i,n=(sizeof(arr) / sizeof(arr[0])),sum=0,pro=1;
  for (i=1; i<n; i=i+2){
    sum=sum+arr[i];
  
}
for(i=0;i<n; i=i+2){
    pro=pro*arr[i];
   
}
cout<<sum<<" "<<pro;
return 0;}