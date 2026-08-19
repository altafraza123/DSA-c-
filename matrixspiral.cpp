#include<iostream>
using namespace std;
int main(){
int arr[3][3]={
    {3,4,5},
    {6,7,8},
    {9,1,0}

};
int top=0,bottom=2;
int left=0, right=2;
for(int i=0; i<3; i++){
for(int j=0; j<3; j++){
  while(left<right){
    cout<<arr[i][j];
    top++;
  }
  while(top<bottom){
    cout<<arr[i][j];
    right--;}
   while(left<right){
    cout<<arr[i][j];
   bottom--;
  }
  while(top<bottom){
    cout<<arr[i][j];
    left++;
  }

}
}
    return 0;}