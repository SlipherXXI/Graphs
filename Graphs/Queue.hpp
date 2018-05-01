//
//Queue.hpp
//

#ifndef Queue_hpp
#define Queue_hpp

#include <string>
#include "Node.hpp"

class Queue {

private:
	Node * _head;
	Node* _tail;
	int _size;

public:
	Queue();

	void enQueue(Node* newNode);
	void enQueue(int VerticeID);
	int deQueue(int VerticeID);
	Node* find(int VerticeID);
	void print();
	int getSize();


};
#endif // !Queue_hpp
