#include<iostream>
using namespace std;
#define MAX 100
int main(){
    char str[MAX];
    char stack[MAX];
    int top=-1;
    cout<<"Enter the parenthesis :";
    cin>>str;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='(' || str[i]=='{' || str[i]=='['){
            stack[++top]=str[i];
        }
      
        
        else {
            if(top==-1){
                cout<<"unvalid parenthesis"<<endl;

            }
            if((str[i] == ')' && stack[top] == '(')||
            (str[i]=='}' && stack[top]=='{')||
            (str[i]==']' && stack[top]=='['))
            top--;
            else{
                cout<<"unvalid parenthesis"<<endl;
                return 0;
            }
        }

    }
    if(top==-1){
        cout<<"valid parenthesis"<<endl;

    }
    else{
        cout<<"unvalid parenthesis"<<endl;
    }
    return 0;
}
