//
//DLList.hpp
//

#ifndef DLList_h
#define DLList_h

#include <string>
#include "Node.hpp"

class DLList {

private:
	Node * _head;
	int _size;

public:
	DLList();

	void add(Node* newNode);
	void add(int VerticeID);
	void remove(int VerticeID);
	Node* find(int VerticeID);
	void print();
	int getSize();


};
#endif // !DLList_h