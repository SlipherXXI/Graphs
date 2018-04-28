//
//
//Ryan Slipher
//
//

#include <iostream>
#include "DLList.hpp"
#include "Node.hpp"
#include "Graph.hpp"

using namespace std;

int main(int argc, const char* argv[]) {

	Node* nodePtr = new Node(5);
	cout << nodePtr->toString() << endl;

	DLList* myList = new DLList();
	myList->add(nodePtr);
	myList->print();
	myList->add(4);
	myList->print();
	myList->add(1);
	myList->print();
	cout << "============================" << endl;
	myList->find(4);
	cout << "============================" << endl;

	DLList* listArray = new DLList[5];
	listArray[0].add(1);
	listArray[0].print();
	listArray[1].add(5);
	listArray[1].print();
	cout << "============================" << endl;

	Graph A = Graph(5);
	A.addEdge(0, 1);
	A.addEdge(1, 2);
	A.addEdge(2, 3);
	A.addEdge(4, 0);

	A.print();

	cin.get();
	return 0;
}