//
//Node.hpp
//

#include <string>
using namespace std;

#ifndef Node_hpp
#define Node_hpp

class Node {

private:

	int _verticeID;

	Node* _next;
	Node* _prev;

public:
	Node();
	Node(int VerticeID);
	~Node();

	int getVerticeID();

	Node*getNext();
	Node*getPrev();

	void setNext(Node* newNext);
	void setPrev(Node* newPrev);

	string toString();
};
#endif // !Node.hpp