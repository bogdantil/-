#include <iostream>

using namespace std;

struct node{
string data;
node* next=NULL;
};

class string_queue{
node* head;
public:
    string_queue(){
    head=NULL;
    }
    void push(string a){
    node* temp = new node;
    temp->data=a;
    temp->next=head;
    }
    string pop(){
    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    string a = temp->data;
    delete temp;
    return a;
    }
    ~string_queue(){
    while(head!=NULL){
        node* temp = head;
        head=head->next;
        delete temp;
    }
    }
};

int main()
{

    return 0;
}
