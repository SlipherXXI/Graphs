//
//Queue.cpp
//

#include <iostream>
#include <string>
#include "Queue.hpp"
#include "Node.hpp"
#include "DLList.hpp"

using namespace std;

//default constructure
Queue::Queue() {
	
	_head = NULL;
	_tail = NULL;
	_size = 0;
}

Queue::~Queue() {
	delete _head;
}

//Methods
bool Queue::isEmpty() {
	if (_head == NULL) {
		cout << "Queue is empty" << endl;
	}
	return true;
}

void Queue::enQueue(int VerticeID) {
	Node * temp = new Node(VerticeID);
	
	if (_head == NULL) {
		_head = _tail;
		_tail = temp;
	}
	else {
		temp->setNext(_tail);
		_tail = temp;
	}
	_size++;
}

int Queue::deQueue() {
	Node *temp = new Node();
	int value = temp->getVerticeID();
	if (_head == NULL) {
		cout << "\nQueue is Emtpty\n";
	}
	else {
		temp = _head;
		value = temp->getVerticeID();
		_head = _head->getNext();
		delete temp;
	}
	return value;
}

void Queue::display() {
	Node* newNode = new Node;
	newNode = _head;
	if (_head == NULL) {
		cout << "Nothing in Queue" << endl;
	}
	else {
		while (newNode != NULL) {
			cout << newNode->getVerticeID() << endl;
			newNode = newNode->getNext();
		}
	}
}

int Queue::getSize() {
	return _size;
	
}
