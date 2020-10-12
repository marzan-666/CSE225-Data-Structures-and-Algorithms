#include <iostream>
#include "GraphType.cpp"

using namespace std;

int main()
{
    GraphType <string> g;

    g.AddVertex("Dhaka");

    g.AddVertex("Khulna");

    g.AddVertex("Rajshahi");

    g.AddVertex("Barishal");

    g.AddEdge("Dhaka", "Rajshahi", 300);

    g.AddEdge("Dhaka", "Khulna", 250);

    g.AddEdge("Barishal", "Rajshahi", 150);

    g.GetToVertices("Dhaka");

    cout<<endl<<endl;

    g.GetToVertices("Barishal");

    g.GetToVertices("Rajshahi");








}
