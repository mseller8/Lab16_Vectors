//Mckenzie Sellers
//08/11/2020

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void output(vector<double> v) {
	sort(v.begin(), v.end());
	cout << "Your numbers: ";
	for (vector<double>::iterator ip = v.begin();ip != v.end(); ++ip)
		cout << *ip << " ";
	cout << endl;
}

int main() {
	vector<double> v;
	int size = 0;  // setting array size
	double* a = new double[size]; // allocating dynamic array
	double choiceNum;
	char choice;
	while (true) {
		cout << "enter operation[a / r / q] and number:\n";
		cin >> choice >> choiceNum;
		if (choice == 'a') {
			vector<double>::iterator it = v.end();
			it = find(v.begin(), v.end(), choiceNum);
			if (it == v.end()) {
				v.insert(it, choiceNum);
			}
			output(v);
			
		}
		else if (choice == 'r') {
			vector<double>::iterator it;
			it = find(v.begin(), v.end(), choiceNum);
			if (it != v.end()) {
				v.erase(it);
			}
			output(v);
		}
		else
			break;
	}
	//enter operation[a / r / q] and number: a 5.0
	//your numbers : 5
	//enter operation[a / r / q] and number : a 8.0
	//your numbers : 5 8
	//enter operation[a / r / q] and number : a 8.0
	//your numbers : 5 8
	//enter operation[a / r / q] and number : r 8.0
	//your numbers : 5
	//enter operation[a / r / q] and number : a 3.3
	//your numbers : 5 3
	//enter operation[a / r / q] and number : a 12.2
	//your numbers : 5 3.3 12.2
	//enter operation[a / r / q] and number : q
}