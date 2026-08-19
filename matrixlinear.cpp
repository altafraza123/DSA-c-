#include<iostream>
using namespace std;
int main(){
int arr[3][3]={
    {3,4,5},
    {6,7,8},
    {9,1,0}
};
int key;
cout<<"Enter key to search ";
cin>>key;
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        if(arr[i][j]==key){
            cout<<"Element found at row :"<< i <<endl<<"column: "<< j;
            return 0;
        }
        
    }
  
}
  cout<<"element not found";

return 0;}
