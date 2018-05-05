//
//DLList.cpp
//

#include <iostream>
#include <string>
#include "DLList.hpp"
#include "Node.hpp"

using namespace std;

//default constructure
DLList::DLList() {
	_head = NULL;
	_size = 0;
}

//Methods
void DLList::add(Node* newNode) {
	if (_head == NULL) {
		_head = newNode;

	}
	else {
		newNode->setNext(_head);
		_head->setPrev(newNode);
		_head = newNode;
	}
	_size++;
}

void DLList::add(int VerticeID) {
	Node* newNode = new Node(VerticeID);
	add(newNode);
}

void DLList::remove(int VerticeID) {
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

Node* DLList::find(int VerticeID) {
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

void DLList::print() {
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

int DLList::getSize() {
	return _size;
}
