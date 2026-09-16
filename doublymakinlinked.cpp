#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* prev;
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
    Node*head = new Node{x, nullptr,nullptr};
    Node* second = new Node{y, head, nullptr};
   
    Node* third = new Node{z, second, nullptr};

    head->next =second;
    second->next =third;

    Node* temp =head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    return 0;
}
