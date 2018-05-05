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
	//default constructure
	Queue();

	~Queue();

	//Methods
	bool isEmpty();
	void enQueue(int VerticeID);
	int deQueue();
	void display();
	int getSize();
};
#endif // !Queue_hpp
