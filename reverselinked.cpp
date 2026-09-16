#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = NULL;
    }
};
Node* reverselist(Node* head){
    Node* prev = NULL;
    Node* curr= head;
    Node* next = NULL;

    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev= curr;
        curr = next;
    }
    return prev;

}
void display(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;

    }
    cout<<endl;
}
int main(){
    
    int x, y,z;
    cout<<"Enter the value of x:";
    cin>>x;
    cout<<"Enter the value of y:";
    cin>>y;
    cout<<"Enter the value of z:";
    cin>>z;
    Node*head = new Node(x);
    head->next = new Node(y);
    head->next->next = new Node(z);

    cout<<"Original List: ";
    display(head);

    head = reverselist(head);
    cout<<"Reversed List: ";
    display(head);

    return 0;
}