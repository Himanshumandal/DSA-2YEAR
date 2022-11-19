#include <iostream>
using namespace std;
 
struct DoublyNode{
	int data;
	DoublyNode *next;
	DoublyNode *prev;
};
 
DoublyNode* createNode(int val){
	DoublyNode *temp = new DoublyNode;
	temp->data = val;
	return temp;
}
 
//complete the functions
class Stack{
	DoublyNode *tail;
	int s;
 
	public:
 
	Stack(){
 
		tail=NULL;
		s=0; 
	}
 
	//push the value at the back
	void push(int val){
		cout<<val;
	}
 
	int top(){
	cout<<"\n";
		return 0;
	}
 
	void pop(){
		cout<<"removing the last element\n";
	}
 
	int size(){
		cout<<"\n";
		return 0;
	}
 
	bool isEmpty(){
		cout<<"returning if the stack is empty\n";
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
 
	s.push(50);
	s.push(30);
	cout<<"front: "<<s.top()<<"\n";
	s.pop();
	cout<<"size: "<<s.size()<<"\n";
	cout<<"empty: "<<s.isEmpty()<<"\n";
 
	cout<<"top: "<<s.top()<<"\n";
	s.pop();
	cout<<"size: "<<s.size()<<"\n";
	cout<<"empty: "<<s.isEmpty()<<"\n";
	return 0;
}
