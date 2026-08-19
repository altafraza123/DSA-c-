#include<iostream>
using namespace std;
int main(){
    int arr[50];
    int n,key,  mid ,i;
    
    cout<<"Enter the size of array :";
    cin>>n;

    cout<<"Enter the elements:";
    for(i=0; i<n; i++){
        cin>>arr[i];

    }

    cout<<"enter the key to search:";
    cin>>key;
    
    int low=0;
    int high=n-1;
    
    while(low<=high){
     mid=(low+high)/2;
    
        if(arr[mid]==key){
        cout<<"element found at index :"<<mid<<endl;
        return 0;
    }

        else if(arr[mid]<key){
         low=mid+1;
        }
        else {
         high=mid-1;
        return 0;
    }
}

cout<<"element not found";
return 0;
}