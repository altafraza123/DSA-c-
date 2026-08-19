#include<iostream>
using namespace std;
int main(){
    int n=23;
    while(n!=1 && n!=4){ //unhappy number
      int sum=0,rem;
     
      
        while(n!=0){
            rem=n%10;
            sum= sum+(rem*rem);
            n=n/10;
        }
        n=sum;   

        
     }
    
    
    if(n==1){
        cout<<"happy number ="<<n<<endl;
    }
    else{
        cout<<"not happy number";
    }
    return 0;
}

