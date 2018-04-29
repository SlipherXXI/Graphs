//
//Graph.cpp
//

#include <iostream>
#include "Graph.hpp"
#include "DLList.hpp"
#include "Queue.hpp"

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

void Graph::BFS(int s) {
	bool * visited = new bool[_size];
	for (int i = 0; i < _size; i++) {
		visited[i] = false;
		_listArray[i].enQueue(i);
		visited[s] = true;
		enQueue(s);
		_listArray[i];
	}
	while (_size != NULL) {
		s = _head;
		cout << s << " ";
		deQueue(s);
		for (i = _listArray[adjVertexID].begin(); i != _listArray[adjVertexID].end(); ++i) {
			if (!visited[*i]) {
				visited[*i] = true;
				enQueue(*i);
			}
		}
	}
}
