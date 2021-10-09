#ifndef __GRAPH__
#define __GRAPH__

#define SIZE 10


class Graph {
public:
    Graph();
    // ���������� �������
    void addVertex(int vnumber);
    // ���������� �����
    void addEdge(int v1, int v2, int weight);
    // �������� �������
    void delVertex(int vnumber);
    // �������� �����
    void delEdge(int v1, int v2);

    void showGraph();

    friend bool test(Graph& g);
private:
    bool edgeExists(int v1, int v2);
    bool vertexExists(int v);

    int matrix[SIZE][SIZE]; // ������� ���������

    int vertexes[SIZE]; // ��������� ������
    int vertexCount; // ���������� ����������� ������
};
#endif