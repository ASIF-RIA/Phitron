#include<iostream>
using namespace std;
int main()
{
    struct node{
    int data;
    node*next;
    };
    node*head,*middle,*last;
    head=new node;
    middle=new node;
    last=new node;

    head->data=10;
    middle->data=45;
    last->data=90;

    head->next=middle;
    middle->next=last;
    last->next=NULL;

    node*temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";


}
