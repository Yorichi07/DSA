//linked list is a collection of nodes. Nodes contain data part and address part(pointer to next node).

//Implementation of Singly Linked List
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;         //pointer to next node

    Node(int data){     //constructor
        this->data=data;
        this->next=NULL;
    }
};

void insertAtHead(Node* &head,int d){    //we referenced head because we want to get changes done on the original linked list and not on the copy
    Node* temp=new Node(d); //new node creation             
    temp->next=head;        //new node points to node where head points
    head=temp;              //head points to new node and new node gets inserted at beggining of the linked list
}
void insertAtTail(Node* &tail,int d){  
    Node* temp=new Node(d); //new node creation 
    tail->next=temp;        //new node points to node where head points
    tail=tail->next;        //head points to new node and new node gets inserted at beggining of the linked list
}
void insertAtPosition(Node* &head,int position,int d){

    //condition for when position=1
    if(position==1){
        insertAtHead(head,d);
        return; 
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    //creating new node for data d
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}
void deleteAtHead(Node* &head){
    Node* temp=head;
    head=head->next;
    free(temp);
}
void deleteAtTail(Node* &head,Node* &tail){
    Node* temp=head;
    Node* prev;
    while(temp->next!=NULL){        //going to tail node
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    tail=prev;
    free(temp);
}
void deleteAtPosition(Node* head,int position){
    Node* temp=head;
    Node* prev;
    for(int i=0;i<position-1;i++){
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
    free(temp); 
}
void print(Node* &head){
    Node* temp=head;        //so that we don't forget address of first node
    while(temp!= NULL){
        cout<<temp->data<<' ';
        temp=temp->next;    //incrementing temp node to next node
    }
    cout<<endl;
}

int main(){
    int n,data;
    cout<<"Enter size of linked list:"<<endl;
    cin>>n;
    cout<<"Enter elements of node:"<<endl;
    Node* head,*tail;
    for (int i = 0; i < n; i++)
    {
        cin>>data;
        if(i==0){
            Node* newNode = new Node(data);
            head = newNode;
            tail = head;
            continue;
        }
        insertAtTail(tail,data);
    }
    print(head);
    deleteAtPosition(head,3);
    print(head);
}