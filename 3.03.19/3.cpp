#include <iostream>

using namespace std;

struct node{
int data;
node* next;
node* prev;
};

class char_deque{
node* head;
node* tail;
int size=0;
public:
    char_deque(){
    this->head=NULL;
    this->tail=NULL;
    }
    
    void push_back(int a){
    node* temp = new node;
    temp->data=a;
    size++;
    if(head==NULL){
        head=temp;
        tail=head;
    }
    else{
        temp->prev=tail;
        tail->next=temp;
        tail=temp;
    }
    }
    
    void push_front(int a){
    node* temp = new node;
    temp->data=a;
    size++;
    if(head==NULL){
        head=temp;
        tail=head;
    }
    else{
        temp->prev=head;
        head->next=temp;
        head=temp;
    }
    }
    
    void pop_back(){
     if(size!=0){
            cout<<tail->data<<" ";
            if(size>1){
                node *temp=tail;
                tail=tail->prev;
                tail->next=NULL;
                delete temp;
                size--;
            }
            else{
                head=tail=NULL;
                size--;
            }
    }
    else cout<<"error"<<endl;
    }
    
    void pop_front(){
    if(size!=0){
        cout<<head->data<<" ";
        if(size>1){
            node* temp=head;
            head=head->next;
            head->prev=NULL;
            delete temp;
            size--;
        }
        else{
            head=tail=NULL;
            size--;
        }
    }
    else cout<<"error"<<endl;
    }
    
    ~char_deque(){
    while(head!=NULL){
        node* temp = head;
        head=head->prev;
        delete temp;
    }
    }
};

int main()
{

    return 0;
}
