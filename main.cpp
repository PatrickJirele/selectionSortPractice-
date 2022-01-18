#include <iomanip>
#include <iostream>

using namespace std;

struct Node {
	int data;
	Node* next;
};

Node* searchList(Node* list, int target) {
	while (list != nullptr && list->data != target)
		list = list->next;
	return list;
}  //searchList


int main() 
{
	cout << "Node Practice Stoof" << endl;
	/*
	Node* p; //p can contain the memory address of a node???? still dont know what that means

	p = (Node*)malloc(sizeof(Node));
	(*p).data = 10;
	//(*p).next = nullptr;
	p->next = nullptr;  	//alternate notation for (*p).next = nullptr;

	cout << p->data;
	

	Node* p1, * p2, * p3;

	p1 = (Node*)malloc(sizeof(Node));  //C technique
	p1->data = 10;
	p1->next = nullptr;  //alternate notation

	p2 = new Node;  //C++ technique
	p2->data = 20;
	p2->next = p1;

	p3 = new Node;
	p3->data = 30;
	p3->next = p2;

	cout << "P3 data: " << p3->data << endl;
	cout << "P2 data: " << p3->next->data << endl;
	cout << "P1 data: " << p3->next->next->data << endl;
	

	int i;
	Node* top = nullptr, * p;

	//build linked list
	do {
		cout << "Enter an integer: (0 to quit) ";
		cin >> i;
		if (i != 0) {
			p = new Node;
			p->next = top;
			p->data = i;
			top = p;
		} //else
	} while (i != 0);

	//display linked
	cout << endl;
	Node* runner = top;
	while (runner != nullptr) {
		cout << runner->data << endl;
		runner = runner->next;
	}  //while

	
	// search linked list
	cout << endl;
	cout << "Enter search value: ";
	cin >> i;

	runner = top;

	while (runner != nullptr) {
		if (runner->data == i) {
			cout << "Found the value: " << i;
			break;
		}
		else
			runner = runner->next;  //note we are losing top of the list
	}  //while

	if (runner == nullptr)
	{
		cout << "Search value not found." << endl;
	}
	*/

	int i;
	Node* top = nullptr, * p, * result;

	do {
		cout << "Enter an integer (0 to quit): ";
		cin >> i;
		if (i != 0) {
			p = new Node;
			p->next = top;
			p->data = i;
			top = p;
		} //if
	} while (i != 0);

	cout << "Enter search value: ";
	cin >> i;

	if ((result = searchList(top, i)) == nullptr)
	{
		cout << "Not on list" << endl;
	}
	else
	{
		cout << "Found value: " << result->data << endl;
	}
} //main



