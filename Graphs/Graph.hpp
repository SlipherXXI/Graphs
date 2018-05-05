//
// Graph.hpp
//

#include "DLList.hpp"
#include "Queue.hpp"

#ifndef Graph_hpp
#define Graph_hpp

class Graph {

private:
	DLList * _listArray;
	int _size;

public:
	//default constructure
	Graph(int size);

	//Methods
	void addEdge(int VerticeID, int adjVertexID);
	int getSize();
	void print();
	void BFS(int s);
};
#endif // !Graph_hpp
