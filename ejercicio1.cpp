#include<iostream>
using namespace std;
int main(){
	double op1, op2, r;
	char op;
		cin>>op1;
		cin>>op2;
		cin>>op;
	
	switch(op){
	case '+': r=op1+op2;
				cout<<r;break;
	case '-': r=op1-op2;
				cout<<r;break;		
	case '*': r=op1*op2;
				cout<<r;break;
	case '/': r=op1/op2;
				cout<<r;break;	
	}
	
	return 0;
}