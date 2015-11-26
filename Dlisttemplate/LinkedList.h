//--- a class template for holding a linked list
//--- the node type is also a class template
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
template <class T>
class ListNode {
public:
	T value;
	ListNode<T> *next;
	ListNode<T> *previous;
	ListNode(T v) {
		value = v;
		next = NULL;
		previous = NULL;
	}
};
template <class T>
class LinkedList {
private:
	ListNode<T> *head;
public:
	LinkedList() { head = NULL; }
	//~LinkedList();
	void insertNode(T);
	void add(T);
	void remove(T);
	void display() const;
};

template <class T>
void LinkedList<T>::insertNode(T v)
{
	ListNode<T> *newNode = new ListNode<T>(v); // A new node
	ListNode<T> *nodePtr = head;               // To traverse the list
	ListNode <T>*previousNode = NULL;          // The previous node




	/*The code works fine now , my friend told me that what needed to be added is a caps to lowercase conversion such as
	:The incoming string to be outputted first gets assigned to the ret variable and 
	for(int i = 0; i < ret.size; i++)
	{ if(ret[i]>= 'A' && ret[i]<= 'Z')
      {ret[i] = ret[i] - 'A' + 'a';}
	}
	this will convert all caps letters in the set [A,Z] into the set of [a,z].

	For the while loop , lets say for example that we have node A and C but we want to insert B between A and C. On the first iteration
	the first statement nodePtr!=NULL remains true and value is < v remains true.nodePtr->value is pointing to A and v is pointing 
	to B because its the node we want to insert. since A < B the loop runs its first iteration. A gets assigned to previousNode and C which is
	nodePtr->next, gets assigned to nodePtr. Now it checks to make the second iteration, nodePtr !=NULL remains true because it points to C but
	nodePtr->value is now pointing to C and v is pointing to B. so is C < B? no so the loop terminates. Now just like we predicted , B can now be
	inserted inbetween A and C.
	*/


	while (nodePtr != NULL && nodePtr->value < v)
	{
		previousNode = nodePtr;
		nodePtr = nodePtr->next;
		//exercise 4
	}

	/*If nodePtr is true, that means we connect nodePtr to newNode(and vice versa)*/
	if (nodePtr)
	{
		newNode->next = nodePtr;
		nodePtr->previous = newNode;
	}
	// if previousNode is true, that means we connect previousNode to newNode(and vice versa), if its the last node then if (previousNode) will execute
	if (previousNode)
	{
		newNode->previous = previousNode;
		previousNode->next = newNode;
	}
	/*in the case that the loop never gets a chance to run because nodePtr->value > v, that means 
	the value to be inserted(v) has to be inserted as the first node and previousNode is initialized
	to a NULL value so if the while loop never runs, then previousNode remains NULL and head = newNode executes.*/
	else
		head = newNode;
}
template <class T>
void LinkedList<T>::remove(T v)
{
	ListNode<T> *nodePtr;        // To traverse the list
								 //ListNode *previousNode;  // To point to the previous node
								 // If the list is empty, do nothing.
	if (!head)
		return;



	// Initialize nodePtr to head of list
	nodePtr = head;

	// Skip all nodes whose value member is 
	// not equal to num.
	while (nodePtr != NULL && nodePtr->name != v)
	{

		nodePtr = nodePtr->next;
	}
	//if the name is not in the list then return
	if (!nodePtr)
		return;

	if (nodePtr->next)
		nodePtr->next->previous = nodePtr->previous;
	if (nodePtr->previous)
		nodePtr->previous->next = nodePtr->next;
	else
		head = head->next;


	delete nodePtr;
}

template <class T>
void LinkedList<T>::display() const {
	ListNode<T> *nodePtr;
	nodePtr = head;
	while (nodePtr != NULL) {
		std::cout << nodePtr->value << std::endl;
		nodePtr = nodePtr->next;
	}
	cin.get();
}
#endif

