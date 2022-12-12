#include <iostream>
#define MAX 5;
using namespace std;
void push(int );
void pop();
void display();
int top=-1;
int stack[MAX];


int main(){
	int ch,data;
	while(1){
		// cout<<"Press 1(push), 2(pop), 3(display), 0(exit) : "<<endl;
		// cout<<"Enter Your Choice : "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1: {
				cout<<"Enter the element to be pushed"<<endl;
				cin>>data;
				push(data);
				break;
			}
			case 2: {
				pop();
				break;
			}
			case 3:{
				display();
				break;
			}
			case 0:{
				exit(0);
			}
			default : cout<<"wrong choice!! Use only above options"<<endl;
		}
	}
	return 0;
}

void push(int element){
	if(top==MAX-1){
		cout<<"Stack Overflow";
	}
	else{
		top=top+1;
		stack[top]=element;
	}
}

void pop(){
	if(top==-1){
		cout<<"stack underflow"<<endl;
	}
	else{
		cout<<stack[top];
		top=top-1;
	}
}

void display(){
	int i;
	if(top==-1){
		cout<<"there is no element in the stack"<<endl;
	}
	else{
		for(int i=top;i>=0;i--){
			cout<<stack[i]<<endl;
		}
	}
}