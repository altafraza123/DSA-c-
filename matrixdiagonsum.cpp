#include<iostream>
using namespace std;
int main(){
int arr[3][3]={
    {3,4,5},
    {6,7,8},
    {9,1,0}
};
int sum=0;
int i,j;

for (int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        if (i==j){
            sum=sum+arr[i][j];

         
}
          
        }
    }
    cout<<sum;
     
return 0;}