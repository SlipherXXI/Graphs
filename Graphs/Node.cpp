//
//Node.cpp
//

#include <iostream>
#include <string>
#include "Node.hpp"


Node::Node() {
	_verticeID = 0;
	_next = NULL;
	_prev = NULL;
}

Node::Node(int VerticeID) {
	_verticeID = VerticeID;
	_next = NULL;
	_prev = NULL;
}

Node::~Node() {

}

int Node::getVerticeID() {
	return _verticeID;
}

Node* Node::getNext() {
	return _next;
}

Node* Node::getPrev() {
	return _prev;
}

void Node::setNext(Node* newNext) {
	_next = newNext;
}

void Node::setPrev(Node* newPrev) {
	_prev = newPrev;
}

string Node::toString() {
	string outputStr = "VerticeID: ";
	outputStr.append(to_string(_verticeID));
	return outputStr;
}