#include<iostream>
using namespace std;
int main(){
	double op1, op2, r;
	char op;
		cout<<"\t CALCULADORA"<<endl;
		cout<<"Digite el primer numero: ";cin>>op1;
		cout<<"Digite el segundo numero: ";cin>>op2;
		cout<<"Digite el operador: ";cin>>op;
	
	switch(op){
	case '+': r=op1+op2;
				cout<<"El resultado es: "<<r;break;
	case '-': r=op1-op2;
				cout<<"El resultado es: "<<r;break;		
	case '*': r=op1*op2;
				cout<<"El resultado es: "<<r;break;
	case '/': r=op1/op2;
				cout<<"El resultado es: "<<r;break;	
	default: cout<<"El operador es erroneo ";		
	}
	
	return 0;
}