#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
int main(){

    int x,y,z;
    cout<<"enter the value of x, yand z:";
    cin>>x>>y>>z;
    Node* head=new Node(x);
    head->next=new Node(y);
    head->next->next=new Node(z);



}
