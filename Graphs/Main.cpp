//
//
//Ryan Slipher
//
//

#include <iostream>
#include <fstream>
#include <string>
#include "DLList.hpp"
#include "Node.hpp"
#include "Graph.hpp"
#include "Queue.hpp"

using namespace std;

int main(int argc, const char* argv[]) {

	string line;
	ifstream outFile;
	outFile.open("C:\\Users\\rslip\\source\\repos\\Graphs\\GraphsProject.txt");
	if (!outFile) {
		cout << "Unable to open GraphsProjext.txt" << endl;
		exit(1);
	}
	while (getline(outFile, line)) {


	}
	Graph myGraph(6);
	myGraph.addEdge(5, 1);

	myGraph.addEdge(1, 3);

	myGraph.addEdge(1, 0);

	myGraph.addEdge(0, 3);

	myGraph.addEdge(0, 2);

	myGraph.addEdge(4, 0);

	myGraph.addEdge(4, 3);


	myGraph.BFS(3);
	







	cin.get();
	return 0;
}
