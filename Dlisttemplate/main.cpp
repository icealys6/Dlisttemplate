#include "DE.h"
#include "MyEntry.h"
#include "LinkedList.h"
using namespace std;

int main() {
	/*cout << "First list : int\n";

	LinkedList<int> list;
	list.append(120);
	list.display();

	cout << "Second list: string\n";
	LinkedList<string> list2;
	list2.append("This is a string\n");
	list2.display();

	cout << "Third list: string, int, char\n";
	*/

	/*LinkedList<MyEntry> myList;
	myList.insertNode(MyEntry("Aloha", "123", 1111, 'A'));
	*/

	//	myList.append ("Aloha", "123", 222, 'A');
	//	myList.append (new MyEntry("Aloha", "123", 222, 'A'));
	//myList.display();


	LinkedList<DirectoryEntry> myListDE;
	char myArray[] = { 'g', 'o', 'o', 'b', 'y' };
	myListDE.insertNode(DirectoryEntry("Good Bye", "123", 1111, 'A', myArray, 5));
	myListDE.insertNode(DirectoryEntry("aurora", "123", 1111, 'A', myArray, 5));
	myListDE.insertNode(DirectoryEntry("zelda", "123", 1111, 'A', myArray, 5));
	myListDE.insertNode(DirectoryEntry("Tom", "123", 1111, 'A', myArray, 5));
	myListDE.insertNode(DirectoryEntry("Nelson", "123", 1111, 'A', myArray, 5));
	myListDE.display();

	return 0;
}

