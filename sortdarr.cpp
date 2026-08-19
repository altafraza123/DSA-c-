#include<iostream>
using namespace std;
int main() {
    int arr[]={2,9,6,8,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool sorted= true;

    for (int i=0; i<n-1; i++){
        if(arr[i]> arr[i+1]){
            sorted=false;
            break;
           
        }}
    if(sorted)
     cout<<"sorted array";

        
    else
     cout<<"not sorted";
        
    
    return 0;
}
