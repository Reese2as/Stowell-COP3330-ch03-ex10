/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Reese Stowell
 */
#include <iostream>
#include "std_lib_facilities.h"

int main()
{
	string operation;
	double num = 0;
	double num2 = 0;
	cout << "Please enter an operation +, -, *, /, plus, minus, mul, div followed by two values ";
	
	while(cin >> operation >> num >> num2) {			
		double result = 0;
		if(operation=="plus" || operation=="+")
        { 
            result = num + num2;
        }
		else if (operation=="minus" || operation=="-")
        {
        result = num - num2;
        }
		else if (operation=="mul" || operation=="*")
        {
        result = num * num2;
        }
		else if (operation=="div" || operation=="/") 
        {
			if (num2==0) error("cant divide by zero");
			result = num/num2;
		}
		cout << num << operation << num2 << " = " << result <<'\n';
		cout << "Please enter a new opperation ";
	}
}
