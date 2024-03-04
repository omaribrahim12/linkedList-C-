//linked list code 
#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node * next;
	Node(int d)
	{
		data = d;
		next = nullptr;
	}

};

class linkedList
{
public:
	Node * head;
	linkedList()
	{
		head = nullptr;
	}

	void append(int number)
	{
		Node * first_node = new Node(number);
		if (head == nullptr)
		{
			head = first_node;
			return;
		}
		Node * last_node = head;
		while (last_node->next != nullptr)
		{
			last_node = last_node->next;
		}
		last_node->next = first_node;
	}
	void printList() {
		Node *current = head;
		while (current != nullptr) {
			cout << current->data << " ";
			current = current->next;
		}
		cout << endl;
	}
	// remove element at index
	void remove(int index) {
		if (head == nullptr) {
			return;
		}
		Node *temp = head;
		if (index == 0)
		{
			head = temp->next;
			delete temp;
			return;
		}
		for (int i = 0; temp != nullptr && i < index - 1; i++) {
			temp = temp->next;
		}
		if (temp == nullptr || temp->next == nullptr) {
			return;
		}
		Node* next_node = temp->next->next;
		delete temp->next;
		temp->next = next_node;
	}
};


int main()
{
	linkedList myList;

	for (int i = 0; i < 11; i++)
	{
		myList.append(i);
	};
	myList.remove(2);
	myList.printList();


	return 0;
}