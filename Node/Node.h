#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Node
{
public:
	Node(void);
	~Node(void);
private:
	int data;
	Node* next;
public:
	// Initializing constructor
	Node(int value, Node* np);

	int getData(void);
	Node* getNext(void);
	friend class List;
	void setNext(Node* np);
};

