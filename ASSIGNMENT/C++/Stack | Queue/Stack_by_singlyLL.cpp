#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};
 
Node* createNewNode(int val){
	Node *temp = new Node;
	temp->data = val;
	return temp;
}


class Stack{
	Node *head;
	Node *tail;
	int s;
	
	public:

	Stack(){
		
		tail=NULL;
		s=0; 
	}
	
	
	void push(int val){
		cout<<val<<"\n";
	}
	
	int top(){
		cout<<"\n";
		return 0;
	}
	
	void pop(){
		cout<<"\n";
	}
	
	int size(){
		cout<<"\n";
		return 0;
	}
	
	bool isEmpty(){
		cout<<"\n";
		return true;
	}
};

int main() {
	Stack s; 
	s.push(10);
	cout<<"top: "<<s.top()<<"\n";
	s.pop();
	cout<<"size: "<<s.size()<<"\n";
	cout<<"empty: "<<s.isEmpty()<<"\n";
	
	s.push(20);
	s.push(30);
	cout<<"front: "<<s.top()<<"\n";
	s.pop();
	cout<<"size: "<<s.size()<<"\n";
	cout<<"empty: "<<s.isEmpty()<<"\n";
	
	return 0;
}
