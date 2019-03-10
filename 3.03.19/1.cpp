#include <iostream>

using namespace std;

class double_stack
{
    struct Node
    {
    int data;
    Node* next=NULL;
    };

Node* head;
public:

     double_stack():head(NULL){}

     void push(int a)
     {
         Node*temp= new Node;
         temp->data=a;
         temp->next=head;
         head=temp;
     }
     int pop()
     {
     if(head==NULL){
        return 0;
     }
     int a = head->data;
     Node*temp=head;
     head=head->next;
     delete temp;
     return a;
     }

};
int main()
{

    return 0;
}
