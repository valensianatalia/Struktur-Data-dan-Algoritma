#include <iostream>
#include "BinaryTree.h"

using namespace std;

void BinaryTree::insertNode(int insertData){
	root = insertNodeRecursive(root, insertData);
}

// bila node=null maka binary tree kosong. bila currentroot = null, maka node yang baru diletakan di currentroot.

Node *BinaryTree::insertNodeRecursive(Node *currentRoot, int insertData){
	//diakses melalui void BinaryTree
	if (currentRoot==NULL){
		currentRoot = new Node();
		currentRoot->data = insertData;
		return currentRoot; // mengembalikan ke parentnya.
	}
	
	if (insertData < currentRoot ->data){
		currentRoot->left = insertNodeRecursive(currentRoot->left, insertData); //memanggil subtree sebelah kiri
	}
	
	else if (insertData > currentRoot->data){
		currentRoot->right = insertNodeRecursive(currentRoot->right, insertData);
	}
	
	return currentRoot;
}


void BinaryTree::inOrder(){
	inOrderRecursive(root);
}

void BinaryTree::inOrderRecursive(Node *currentRoot){
	if (currentRoot!=NULL){
		inOrderRecursive(currentRoot->left);
		cout << currentRoot->data << ", ";
		inOrderRecursive(currentRoot->right);
	}
}

void BinaryTree::preOrder(){
	preOrderRecursive(root);
}

void BinaryTree::preOrderRecursive(Node *currentRoot){
	if(currentRoot!=NULL){
		cout << currentRoot->data << ", ";
		preOrderRecursive(currentRoot->left);
		preOrderRecursive(currentRoot->right);
	}
}

void BinaryTree::postOrder(){
	postOrderRecursive(root);
}

void BinaryTree::postOrderRecursive(Node *currentRoot){
	if(currentRoot!=NULL){
		postOrderRecursive(currentRoot->left);
		postOrderRecursive(currentRoot->right);
		cout << currentRoot->data << ", ";
	}
}

Node *BinaryTree::findMin(){
	findMin(root);
	return root;
}
Node *BinaryTree::findMin(Node* currentRoot){
	if (currentRoot == NULL){
		cout << "Tree masih kosong";
	}
	else if (currentRoot->left == NULL){
		cout << currentRoot->data;
	}
	else{
		currentRoot->left = findMin(currentRoot->left);
		}
	return currentRoot;
}

Node *BinaryTree::findMax(){
	findMax(root);
	return root;
}
Node *BinaryTree::findMax(Node* currentRoot){
	if (currentRoot == NULL){
		cout << "Tree kosong";
	}
	else if (currentRoot->right == NULL){
		cout << currentRoot->data;
	}
	else{
		currentRoot->right = findMax(currentRoot->right);
	}
	return currentRoot;
	
}

void BinaryTree::searchNode(int data){
	searchNodeRecursive(root, data);
}

Node *BinaryTree::searchNodeRecursive(Node* currentRoot, int data){
	if(currentRoot == NULL){
		cout << "Node tidak ada pada Binary Tree" << endl;
	}
	else if(currentRoot->data == data){
		cout << "Node " << currentRoot->data << " Node ada di Binary Tree" << endl;
	}
	else if(currentRoot->data == data){
		currentRoot->left = searchNodeRecursive(currentRoot->left, data);
	}
	else if(data < currentRoot->data){
		currentRoot->left = searchNodeRecursive(currentRoot->left, data);
	}
	else{
		currentRoot->right = searchNodeRecursive(currentRoot->right, data);
	}
	return currentRoot;
}
 
