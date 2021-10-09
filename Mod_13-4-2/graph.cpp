#include "graph.h"
#include <iostream>

using namespace std;

Graph::Graph() {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            matrix[i][j] = 0;
    vertexCount = 0;
}
// добавление вершины
void Graph::addVertex(int vnumber)
{
    vertexes[vertexCount] = vnumber;
    vertexCount++;
}
// добавление ребра
void Graph::addEdge(int v1, int v2, int weight)
{
    matrix[v1][v2] = weight;
    matrix[v2][v1] = weight;
}

// удаление вершины
void Graph::delVertex(int vnumber)
{
   cout << "Удалить вершину  " << vnumber << "     (вершин " << vertexCount << ")" << endl;
 
    for (int j = 0; j < vertexCount ; j++) 
        for (int i = vnumber; i < vertexCount - 1; i++) matrix[i][j] = matrix[i+1][j];
    
    for (int i = 0;  i < vertexCount - 1; i++)
        for (int j = vnumber; j < vertexCount - 1; j++) matrix[i][j] = matrix[i][j + 1];

    vertexes[vertexCount - 1] = 0;

    vertexCount--;
}
// удаление ребра
void Graph::delEdge(int v1, int v2)
{
    matrix[v1][v2] = 0;
    matrix[v2][v1] = 0;
}

// проверка существования ребра
bool Graph::edgeExists(int v1, int v2)
{
    return matrix[v1][v2] > 0;
}
// проверка существования вершины
bool Graph::vertexExists(int v)
{
    for (int i = 0; i < vertexCount; i++)
        if (vertexes[i] == v)
            return true;
    return false;
}

void Graph::showGraph() {
    setlocale(LC_ALL, "");
    cout << vertexCount << endl;
    for (int i = 0; i < vertexCount; i++) cout << vertexes[i] << "     ";
    cout << endl;
    cout << endl;

    for (int i = 0; i < vertexCount; i++) {
        for (int j = 0; j < vertexCount; j++)  cout << matrix[i][j] << "     ";
        cout << endl;
    }
}