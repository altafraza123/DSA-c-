#include<iostream>
using namespace std;
int main(){
int arr[3][3]={
    {3,4,5},
    {6,7,8},
    {9,1,0}
};
    for(int j=0; j<3; j++){
        for(int i=0; i<3; i++){
             cout<<arr[i][j]<<" ";   

        }
    }
return 0;
}