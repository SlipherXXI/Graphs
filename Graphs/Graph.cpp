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
	Queue bfsQueue;
	bfsQueue.enQueue(s);
	bool * visited = new bool[_size];
	for (int i = 0; i < _size; i++) {
		visited[i] = false;
	}
		visited[s] = true;
	
	while (bfsQueue.getSize() > 0) {
		s = bfsQueue.deQueue(0);
		cout << s << " ";
		for (int i = _listArray[s].getSize(); i != _listArray[s].getSize(); i++) {
			if (!visited[i]) {
				visited[i] = true;
				bfsQueue.enQueue(i);
			}
		}
	}
}
