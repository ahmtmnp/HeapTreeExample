	/**
* @file BST.hpp
* @description  Dosyadan veri çekip, çekilen verileri belli kurallar dahilinde  Heap Tree ve Binary Search Tree ye ekleme.
* @course 1. öğretim B grubu
* @assignment 4. Ödev
* @date 1.13.2014
* @author Ahmet Münip Şitoğlu - ahmetmsitoglu@hotmail.com
*/
#ifndef BST_H
#define BST_H
#include"Dugum.hpp"
//BST class
class BST {
private:
	Dugum* root;
public:
	BST();
	~BST();
	Dugum* Root();
	void addNode(string country,string city);
	void inOrder(Dugum* n);
	void freeNode(Dugum* leaf);

private:
	void addNode(string country,string city,Dugum* leaf);

};
#endif