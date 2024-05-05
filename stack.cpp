#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int value){
        data = value;
        next = NULL;
    }
};
class Stack{
    public:
     Node *top;

    Stack(){
        top = NULL;
    }
    bool is_Empty(){
        return top == NULL;
    }
    void push(int value){
        Node *newNode = new Node(value);
        newNode -> next = top;
        top = newNode;
    }
    int pop(){
        if(is_Empty()){
            cout<<"Stack is empty, can't pop.\n";
            return -1;
        }
        int poppedValue = top -> data;
        Node *temp = top;
        top = top -> next;
        delete temp;
        return poppedValue;
    }
    int peek(){
        if(is_Empty()){
            cout<<"Stack is empty, can't peek.\n";
            return -1;
        }
        return top -> data;
    }
    void display(){
    if(is_Empty()){
        cout<<"Stack is empty.\n";
        return;
    }
    cout<<"Stack elements: ";
    Node *current = top;
    while(current != NULL){
        cout<<current -> data<< " ";
        current = current -> next;
    }
    cout<< " "<< endl;
    }
};
int main(){

    Stack s;
    s.push(4);
    s.push(6);
    s.push(8);
    s.push(10);

    s.pop();
    s.pop();

    s.peek();
    s.display();

    return 0;
}