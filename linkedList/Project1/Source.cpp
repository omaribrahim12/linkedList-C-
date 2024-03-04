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
};


int main()
{
	linkedList myList;
	myList.append(10);
	myList.append(10);
	myList.append(10);
	myList.append(10);
	myList.printList();


	return 0;
}