	/**
* @file BST.cpp
* @description  Dosyadan veri çekip, çekilen verileri belli kurallar dahilinde  Heap Tree ve Binary Search Tree ye ekleme.
* @course 1. öğretim B grubu
* @assignment 4. Ödev
* @date 1.13.2014
* @author Ahmet Münip Şitoğlu - ahmetmsitoglu@hotmail.com
*/
#include"BST.hpp"
// Constructor
BST::BST() 
{
     root = NULL;
}

// Destructor
BST::~BST() 
{
     freeNode(root);
}

Dugum* BST::Root() 
{
 return root;
 }


// Free the node
void BST::freeNode(Dugum* leaf)
{
    if ( leaf != NULL )
    {
       freeNode(leaf->getLeft());
       freeNode(leaf->getRight());
       delete leaf;
    }
}


// Add a node
void BST::addNode(string country,string city) 
{
     // No elements. Add the root
     if ( root == NULL ) 
	 {
        Dugum* n = new Dugum();
        n->setData(country);
        root = n;
		root->getDataOfCity()->insert(city);
     }
     else 
	 {
       addNode(country,city, root);       
     }
}

// Add a node (private)
void BST::addNode(string country, string city, Dugum* leaf) 
{
    if ( country < leaf->getData() ) 
	{
       if ( leaf->getLeft() != NULL )
          addNode(country,city, leaf->getLeft());
       else {
          Dugum* n = new Dugum();
          n->setData(country);
          leaf->setLeft(n);
		  n->getDataOfCity()->insert(city);
       }
    }
    else if(country > leaf->getData()) 
	{
       if ( leaf->getRight() != NULL )
          addNode(country,city, leaf->getRight());
       else 
	   {
          Dugum* n = new Dugum();
          n->setData(country);
          leaf->setRight(n);
		  n->getDataOfCity()->insert(city);
       }
    }
	else if(country == leaf->getData())
	{
		leaf->getDataOfCity()->insert(city);
	}
}

// Print the tree in-order
// Traverse the left sub-tree, root, right sub-tree
void BST::inOrder(Dugum* n) 
{
    if ( n ) {
		if(n->getLeft())
			inOrder(n->getLeft());
			
			cout<<endl<< n->getData() << endl;
			
			n->getDataOfCity()->removeMin();
			
			if(n->getRight())
			inOrder(n->getRight());
    }
}