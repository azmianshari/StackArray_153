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
	//Method for check if datas is empty
	bool empty() {
		return (top == -1);
	}
	void display() {
		if (empty()) {
			cout << "\nStack is empty." << endl;
		}
		else {
			for (int tmp = 0; tmp <= top; tmp++) {
				cout << stack_array[tmp] << endl;

			}
		}
	}
};
int main() {
	StackArray s;
	char ch;
	while (true) {
		cout << endl;
		cout << "\**stack menu**\n";
		cout << "1.push\n";
		cout << "2.pop\n";
		cout << "3.display\n";
		cout << "4.exit\n";
		cout << "\nEnter your choice:";
		string input;
		getline(cin, input);
		char ch = (input.empty()) ? '0' : input[0];
		switch (ch) {
		case '1': {
			s.push();
			break;
		}
		case'2':
			if (s.empty()) {
				cout << "\nStackt is empty." << endl;
				break;
			}
			s.pop();
			break;
		case '3':
			s.display();
			break;
		case '4':
			return 0;
		
