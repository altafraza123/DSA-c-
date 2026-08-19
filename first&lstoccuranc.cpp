#include<iostream>
using namespace std;
int main(){
    int arr[50];
    int n,key,  i;
    
    cout<<"Enter the size of array :";
    cin>>n;

    cout<<"Enter the elements:";
    for(i=0; i<n; i++){
        cin>>arr[i];

    }

    cout<<"enter the key to search:";
    cin>>key;
    int first=-1;
    int last=-1;
    for (i=0; i<n; i++){
        if (arr[i]==key){
            if(first==-1)
            first=i;
        last=i;    
        }

    }
    cout<<"first occurance"<<first<<endl;
    cout<<"last occurance"<<last<<endl;
    return 0;
}