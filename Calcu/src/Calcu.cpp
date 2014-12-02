//============================================================================
// Name        : Calcu.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a,b,result;
	char oper;
	cout<<" Input A: ";
	cin>>a;
	cout<<"Input B: " ;
	cin>>b;
	cout << "Input Operator" << endl;
	cin >> oper;
	switch(oper)
	{
	case '+':
		result = a + b;
		break;


	default:
		break;
	}
	cout<<"The result is: "<<result<<endl;

	return 0;
}
