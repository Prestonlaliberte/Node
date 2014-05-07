#include "Node.h"

Node::Node(void)
	: data(0)
	, next(NULL)
{
}

Node::~Node(void)
{
	//return unneeded memory	
	cout << "Node containing " << data << " destroyed\n";
	delete next;
}

// Initializing constructor
Node::Node(int value, Node* np)
{
	data=value;
	next = np;
}


int Node::getData(void)
{
	return data;
}

Node* Node::getNext(void)
{
	return next;
}


void Node::setNext(Node* np)
{
	next = np;
}
