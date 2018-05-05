//
//Graph.cpp
//

#include <iostream>
#include "Graph.hpp"
#include "DLList.hpp"
#include "Queue.hpp"

using namespace std;

//default constructure
Graph::Graph(int size) {
	_size = size;
	_listArray = new DLList[_size];
}

//Methods
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
	
	bool * visited = new bool[_size];
	for (int i = 0; i < _size; i++) {
		visited[i] = false;
	}
		visited[s] = true;
		bfsQueue.enQueue(s);
		cout << s << ":" << endl;
	while (bfsQueue.getSize() != NULL) {
		s = bfsQueue.deQueue();
		cout << s << " " << endl;
		for (int i = _listArray[s].getSize(); i != _listArray[s].getSize(); i++) {
			if (!visited[i]) {
				bfsQueue.enQueue(i);
				visited[i] = true;
				cout << "Visited:" << visited[i] << endl;
				bfsQueue.enQueue(i);
			}
		}
	}
}
