#include <iostream>
using namespace std;
 
struct Node{
	int data;
	Node *next;
};
 
Node* createNode(int val){
	Node *temp = new Node;
	temp->data = val;
	return temp;
}
 
 
 
class Queue{
	Node *head;
	Node *tail;
	int size;
 
	public:
 
	Queue(){
		cout<<"constructor is Called\n";
		size=0;
		head=NULL;
		tail=NULL;
	}
 
	void push(int val){
cout<<val;
 
	}
 
	int front(){
		cout<<"returning the value at front\n";
 
		return 0;
	}
int getsize(){
		cout<<"return the size of the queue\n";
		return 0;
}
 
	void pop(){
		cout<<"removing the first element\n";
	}
 
 
 
 
	bool isEmpty(){
		cout<<"returning if the queue is empty\n";
		return true;
	}
};
 
int main() {
	Queue q; 
	q.push(10);
	q.pop();
	cout<<"size: "<<q.getsize()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
 
	q.push(20);
cout<<"front"<<q.front()<<"\n";
	q.push(30);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.getsize()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
 
	return 0;
}
