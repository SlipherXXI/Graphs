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
	ifstream inFile;
	inFile.open("C:\\Users\\rslip\\source\\repos\\Graphs\\GraphsProject.txt");
	if (!inFile) {
		cout << "Unable to open GraphsProjext.txt" << endl;
		exit(1);
	}
	while (getline(inFile,line)) {
		
		cout << line << endl;

		DLList* myList = new DLList();
		myList->add(0);
		myList->add(1);
		myList->add(2);
		myList->add(3);
		myList->add(4);
		myList->add(5);
		myList->print();
		
		Graph myGraph(6);
		myGraph.addEdge(5, 1);
		
		myGraph.addEdge(1, 3);
		
		myGraph.addEdge(1, 0);
		
		myGraph.addEdge(0, 3);
	
		myGraph.addEdge(0, 2);
		
		myGraph.addEdge(4, 0);

		myGraph.addEdge(4, 3);


		myGraph.BFS(3);
	}
	inFile.close();

	

	

	

	cin.get();
	return 0;
}
