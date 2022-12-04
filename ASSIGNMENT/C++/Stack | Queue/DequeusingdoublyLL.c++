#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node* next_key;
    node* prev_key;
    node(int input)
    {
        val=input;
        next_key=NULL;
        prev_key=NULL;
        return;
    }
};
class DeQueues
{
    node* head;
    node* tail;
    public:
    DeQueues()
    {
        head=NULL;
        tail=NULL;
    }
    void push_back(int val)
    {
       if(head==NULL){
        node* temp=new node(val);
        head=temp;
        tail=head;
       }
       else{
        tail->next_key=new node(val);
        tail->prev_key=tail;
        tail=tail->next_key;
        tail->next_key=NULL;
       }
       cout<<"done";

    }
    void push_front(int val)
    {
       if(head==NULL){
        node* temp=new node(val);
        head=temp;
        tail=head;
       }
       else{
        node* temp= new node(val);
        head->prev_key=temp;
        temp->next_key=head;
        head=temp;
       }
       cout<<"done";
    }
    void pop_front()
    {
      if(head!=NULL){
        head=head->next_key;
        head->prev_key=NULL;
        }
    }
    void pop_back()
    {
        if(tail!=NULL){
            tail=tail->prev_key;
            tail->next_key=NULL;
        }
    }
    int get_front(){
        if(head!=NULL){
            return head->val;
        }
        return 0;
    }
    int get_back(){
        if(tail!=NULL){
            return tail->val;
        }
        return 0;
    }
    void display_queue()
    {
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next_key;
        }
    }
};
int main()
{
    DeQueues s;
    s.push_front(0);
    s.push_front(1);
    s.push_front(2);
    s.push_back(-1);
    cout<<"front: "<<s.get_front()<<"\n";
    cout<<"back: "<<s.get_back()<<"\n";
    s.display_queue();
}
