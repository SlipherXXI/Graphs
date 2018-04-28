//
//Queue.cpp
//

#include <iostream>
#include <string>
#include "Queue.hpp"
#include "Node.hpp"

using namespace std;

Queue::Queue() {
	_head = NULL;
	_tail = NULL;
	_size = 0;
}

void Queue::enQueue(Node* newNode) {
	if (_tail == NULL) {
		_tail = _head;
		_head = newNode;
		_tail = newNode;

	}
	else {
		newNode->setPrev(_tail);
		_tail->setNext(newNode);
		_tail = newNode;
	}
	_size++;
}

void Queue::enQueue(int VerticeID) {
	Node* newNode = new Node(VerticeID);
	enQueue(newNode);
}

void Queue::deQueue(int VerticeID) {
	if (_head != NULL) {
		Node* currentPtr = _head;

		while (currentPtr != NULL && currentPtr->getVerticeID() != VerticeID) {
			//update
			currentPtr = currentPtr->getNext();
		}
		if (currentPtr != NULL) {
			cout << "current " << currentPtr->toString() << endl;
			if (currentPtr == _head) {
				_head = currentPtr->getNext();
				_head->setPrev(NULL);
				currentPtr->setNext(NULL);
				currentPtr->setPrev(NULL);
				delete currentPtr;
			}
			else {
				//->setNext(currentPtr->getNext());
				currentPtr->getPrev()->setNext(currentPtr->getNext());
				currentPtr->getNext()->setPrev(currentPtr->getPrev());
				currentPtr->setNext(NULL);
				currentPtr->setPrev(NULL);

				delete currentPtr;
			}
		}
	}
}

Node* Queue::find(int VerticeID) {
	if (_head == NULL) {
		return NULL;
	}
	else {
		Node* currentPtr = _head;
		while (currentPtr != NULL) {
			//cout << "current" << endl;
			//cout << "key:" << currentPtr->getKey() << endl;
			//cout << "test key:" << key << endl;

			if (currentPtr->getVerticeID() == VerticeID) {
				return currentPtr;
			}
			//update
			currentPtr = currentPtr->getNext();
		}
		return NULL;
	}
}

void Queue::print() {
	cout << "List contains" << endl;
	if (_head == NULL) {
		cout << "list is empty" << endl;
	}
	else {
		Node* _current = _head;
		while (_current != NULL) {
			//cout << "ptr address "  << _current << endl;
			cout << "(" << _current->toString() << ")" << " --> ";
			//update
			_current = _current->getNext();
		}
		cout << 0 << endl;
	}
}

int Queue::getSize() {
	return _size;
}
