//
//Graph.cpp
//

#include <iostream>
#include "Graph.hpp"
#include "DLList.hpp"

using namespace std;

Graph::Graph(int size) {
	_size = size;
	_listArray = new DLList[_size];

}

void Graph::addEdge(int VerticeID, int adjVertexID) {
	_listArray[VerticeID].add(adjVertexID);
}

int Graph::getSize() {
	return _size;
}

void Graph::print() {
	cout << "adjacency list contains" << endl;
	for (int i = 0; i < _size; i++) {
		_listArray[i].print();
	}
}

void Graph::BFS() {

}