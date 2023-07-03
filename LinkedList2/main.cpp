#include <iostream>
#include"LinkedList.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	LinkedList list1;
	
	list1.insertToHead(10);
	list1.insertToHead(20);
	list1.insertToHead(30);
	list1.insertToHead(50);
	
	cout << "head : " << list1.head->value << endl;
	cout << "tail : " << list1.tail->value << endl;
	cout << list1.head->next->next->value << endl;
	
	list1.printAll();
	
	return 0;
}
