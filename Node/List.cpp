#include "List.h"

List::List(void)
	: front(NULL)
{
}

List::~List(void)
{
	cout << "List destroyed\n";
	delete front;
}

// Creates a new Node with data=value and inserts it at the front
void List::push_front(int value)
{
	Node* temp = new Node(value,front);
	front=temp;
}

ostream& operator<<(ostream & out, const List & list){
	Node* temp = list.front;
	while(temp!=NULL){
		out << temp->getData()<< "  ";
		temp = temp->getNext();
	}
	out << endl;
	return out;
}

// Returns a pointer to the first node containing the target, or NULL if not found
Node* List::find(int target)
{
	Node* temp = front;
	while(temp!=NULL){
		if(temp->getData()==target)
			return temp;

		temp=temp->getNext();
	}
	return NULL;
}


// if list is not empty it removes and recycles the first node
void List::pop_front(void)
{
	if(front!=NULL){
		Node* temp = front->getNext();
		front->setNext(NULL);
		delete front;
		front=temp;
	}
}


// Adds a new Node containing value at the back
void List::push_back(int value)
{
	if(front==NULL){
		front = new Node(value,NULL);
	}else{
		Node* temp = front;
		while(temp->getNext()!=NULL){
			temp = temp->getNext();
		}
		//now temp points to the last Node
		temp->setNext(new Node(value,NULL));
	}
}


// makes lhs a clean copy of the rhs
void List::operator=(const List & rhs)
{
	delete front;
	front = NULL;
	Node* temp = rhs.front;
	while(temp!=NULL){
		this->push_back(temp->getData());
		temp = temp->getNext();
	}
}
