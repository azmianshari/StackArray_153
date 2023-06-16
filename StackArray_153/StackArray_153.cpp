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
		