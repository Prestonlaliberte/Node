#pragma once
#include "Node.h"

class List
{
public:
	List(void);
	~List(void);
private:
	// points to the head of the list
	Node* front;
public:
	// Creates a new Node with data=value and inserts it at the front
	void push_front(int value);
	friend ostream& operator<<(ostream & out, const List & list);
	// Returns a pointer to the first node containing the target, or NULL if not found
	Node* find(int target);
	// if list is not empty it removes and recycles the first node
	void pop_front(void);
	// Adds a new Node containing value at the back
	void push_back(int value);
	// makes lhs a clean copy of the rhs
	void operator=(const List & rhs);
};

