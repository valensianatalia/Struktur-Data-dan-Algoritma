#include <iostream>
#include "BinaryTree.h"

using namespace std;

int main(int argc, char** argv){
	BinaryTree bin;
	
	bin.insertNode(10); // menginput angka sblm dicetak.
	bin.insertNode(5);
	bin.insertNode(3);
	bin.insertNode(2);
	bin.insertNode(6);
	bin.insertNode(15);
	bin.insertNode(20);
	
	bin.inOrder(); //mencetak inorder.
	cout << endl;
	
	bin.preOrder();
	cout << endl;
	
	bin.postOrder();
	cout << endl;
	
	bin.findMin();
	cout << endl;
	
	bin.findMax();
	cout << endl;
	
	int searchNode;
	cout << "\n Insert Node : ";
	cin >> searchNode;
	bin.searchNode(searchNode)	
	//implementasi search, findmin(jika kosong, return node), findmax(jika kosong maka return value
	
	return 0;
}
