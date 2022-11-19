#include<iostream>
using namespace std;

class stack{
int *data;
int nextindex;
int capacity;

public:
stack(int totalsize){
data=new int[totalsize];
capacity=totalsize;
 nextindex=0;
}

//return Number Of element
int size(){
    return nextindex;
}
//return is emppty
bool isEmpty(){
    /*
    if(nextindex==0){
        return true;
    }
    else {
        return false;
    }
    */
   return (nextindex==0);
}
// insert the elements in Stack
void push(int element){
    if(nextindex==capacity){
        cout<<"Stack is Full"<<endl;
return;
    }
    data[nextindex]=element;
    nextindex++;
}
// delete the element
int pop(){
   if(nextindex==0){
cout<<"Stsack is epmpty"<<endl;
return -1;
    }
    nextindex--;
    return data[nextindex];
}
//Access top element
int top(){
    if(nextindex==0){
cout<<"Stsack is epmpty"<<endl;
return -1;
}
    
  return data[nextindex-1];
}

};
int main(){
    stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.size()<<endl;
    cout<<s.pop()<<endl;
}
