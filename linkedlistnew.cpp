#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
   
   
};
int main(){
     int x, y,z;
    cout<<"Enter the value of x:";
    cin>>x;
    cout<<"Enter the value of y:";
    cin>>y;
    cout<<"Enter the value of z:";
    cin>>z;
    Node*head = new Node{x, nullptr};
    head->next = new Node{y, nullptr};
    head->next->next = new Node{z, nullptr};

    Node* temp =head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    return 0;
}
