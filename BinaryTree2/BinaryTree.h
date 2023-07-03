#include <iostream>

using namespace std;

class Node{
	public:
		int data;
		Node *left;
		Node *right;
		
		Node(){
			right = left = NULL;
		}
};


class BinaryTree {
	public:
		Node* root;
		
		BinaryTree(){
			root = NULL;
		}
		
		void insertNode(int);
		Node *insertNodeRecursive(Node*, int); //mengembalikan subtree
		
		void deleteNode(int); // dari node terbesar sebelah kanan dan node terbesar terkecil.		
		
		void inOrder();
		// harus masuk ke subtree
		void inOrderRecursive(Node*);
		
		void preOrder();
		void preOrderRecursive(Node*);
		
		void postOrder();
		void postOrderRecursive(Node*); // recursive ada node untuk currentRoot
		
		void *searchNode(int);
		Node *searchNodeRecursive(Node*, int);
		
		Node *findMin();
		Node *findMinRecursive(Node*);
		
		Node *findMax(); // findmin dan findmax digunakan terlebih dahulu untuk delete.
		Node *findMaxRecursive(Node*);
};

// disetiap subtree ada current root.
