#include<iostream>
using namespace std;
int main(){
int arr[3][3]={
    {3,4,5},
    {6,7,8},
    {9,1,0}

};
int k,i,j;
cout<<"Enter how many times rotation :";
cin>>k;

k=k%4;
for(int l=0; l<k; l++){
  for (int i=0; i<3; i++){
    for(int j=i; j<3; j++){
        swap(arr[i][j],arr[j][i]);

    }}
  for(int i=0; i<3; i++){
    int st=0;
    int end=2;
    while(st<end){
        swap(arr[i][st], arr[i][end]);
        st++;
        end--;
    }

  }  
}
  for (int i=0; i<3; i++){
    for(int j=0; j<3; j++){
       cout<<arr[i][j]<<" "; 
    }
    cout<<endl;
}


    return 0;}

  
