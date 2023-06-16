#include <iostream>
#include <string>
using namespace std;

class StackArray {
private:
	string stack_array[5];
	int top;
public:
	//Konstruktor
	StackArray() {
		top = -1;
	}
	void push() {
		cout << "\nEnter a element :";
		string element;
		getline(cin, element);
		if (top == 4) { //Step 1
			cout << "Number of data exceeds the limit." << endl;
			return;
		}
		top++; //Step 2
		stack_array[top] = element; //Step 3
		cout << endl;
		cout << element << "Ditambahkan(Pushed)" << endl;

	}
	void pop() {
		if (empty()) { //Step 1. a
			cout << "\nStack is empty. Cannot pop." << endl; //Step 1.a
			return; //Step 1.b
		}
		cout << "\nThe popped element is :" << stack_array[top] << endl; //Step 2
		top--; //Step 3	
	};
	