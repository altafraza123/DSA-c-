#include<iostream>
using namespace std;
int main(){
    int arr[]={3,4,5,6,1,2,3};
    int n=6, count =0;

    for (int i=0; i<n; i++){
        if(arr[i]>arr[i+1]){
            count++;
        }
    }
    if(count<=1){
        cout<<"Array is sorted";

    }
    else{
        cout<<"ARRay is not sorted"<<endl;
    }
    return 0;
}
