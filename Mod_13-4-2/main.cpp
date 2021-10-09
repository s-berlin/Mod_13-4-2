#include <iostream>
#include "graph.h"
#include "task.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "");

	Graph g;
	cifr(g);

	g.showGraph();
	g.delVertex(1);
	g.showGraph();
/*
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << g::matrix[i][j] << "    ";
		}
		cout << endl;
	}
*/

	return 0;
}