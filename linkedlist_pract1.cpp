#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* link;
};
typedef struct node *s1;
s1 head=NULL;

void create()
{
    int n=0;
    cout<<"Enter the number of nodes:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the data for node "<<i+1<<endl;
        s1 ns = new node;
        cin>>ns->data;
        ns->link=head;
        head=ns;
    }
}
void display()
{
    s1 temp = new node();
    if(head==NULL)
    {
        cout<<"Empty"<<endl;
        return;
    }
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->link;
    }
    cout<<endl;
}

void reverse()
{
    struct node* cur=head;
    struct node* prev=NULL;
    struct node* next=NULL;
    while(cur!=NULL)
    {
        next=cur->link;
        cur->link=prev;
        prev=cur;
        cur=next;
    }
    head=prev;
    display();
}
void insert_front()
{
    cout<<"Enter the data of the front-node:";
    s1 new_node= new node();
    cin>>new_node->data;

    if(head==NULL){
            head=new_node;
            return;
    }
    else{
        new_node->link=head;
        head=new_node;
    }
}

void delete_front()
{
    if(head==NULL)
    {
        cout<<"Empty list, no items to delete"<<endl;
        return;
    }
    struct node* cur=head;
    head=head->link;
    cout<<"Deleted VALUE:";
    cout<<cur->data<<endl;
    free(cur);
}
void insert_end()
{
    if(head==NULL){
            struct node* cur=new node();
            head=cur;
            cout<<"Enter the node details:";
            cin>>head->data;
            head->link=NULL;
            return;
    }
   struct node *ptr=head;
   while(ptr->link!=NULL)
   {
       ptr=ptr->link;
   }
    cout<<"Enter the node details:";
    s1 new_node=new node();
    cin>>new_node->data;
    ptr->link=new_node;
    new_node->link=NULL;
}
void delete_end()
{
    if(head==NULL)
    {
        cout<<"Empty list, no items to delete"<<endl;
        return;
    }
    struct node* cur=head;
    struct node* prev=NULL;
    while(cur->link!=NULL)
    {
        prev=cur;
        cur=cur->link;
    }
    cout<<"Deleted VALUE:";
    cout<<cur->data<<endl;
    free(cur);
    prev->link=NULL;

}
int main()
{
    for(;;){
    int choice=0;
    cout<<"Enter the options:\n 1:create\n 2:reverse\n 3:insert_front\n 4:delete_front\n 5:insert_end\n 6:delete_end\n 7:display\n 8:exit\n";
    cin>>choice;
    switch(choice)
    {
        case 1:create();break;
        case 2:reverse();break;
        case 3:insert_front();break;
        case 4:delete_front();break;
        case 5:insert_end();break;
        case 6:delete_end();break;
        case 7:display();break;
        case 8:exit(0);
        default:cout<<"Invalid option !!!"<<endl;
    }
    }
    return 0;
}
