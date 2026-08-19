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

         if(arr[low]<=arr[mid]){ //left sorted
            if(key>=arr[low] && key<arr[mid]){
            high=mid-1;
        }
        else {
            low=mid+1;
        
    }
}
else;{
     if(key>arr[mid] && key<= arr[high]){
        low=low+1;
     }
     else{
        high=high-1;
     }
}}
     

     

cout<<"element not found";
return 0;
}