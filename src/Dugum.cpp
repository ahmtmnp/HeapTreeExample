	/**
* @file Dugum.cpp
* @description  Dosyadan veri çekip, çekilen verileri belli kurallar dahilinde  Heap Tree ve Binary Search Tree ye ekleme.
* @course 1. öğretim B grubu
* @assignment 4. Ödev
* @date 1.13.2014
* @author Ahmet Münip Şitoğlu - ahmetmsitoglu@hotmail.com
*/
	#include"Dugum.hpp"
    Dugum::Dugum() 										
	{
		data="";
		left=NULL; 
		right=NULL; 
		heap = new Heap(1);
	}
    
	void Dugum::setData(string data) 				
	{ 
		this->data=data;  
	}
	
	void Dugum::setLeft(Dugum* left) 				
	{
		this->left = left; 	
	}
    
	void Dugum::setRight(Dugum* right) 			
	{
		this->right = right; 
	}
    
	string Dugum::getData() 							
	{
		return data;	
	}
	
	Dugum* Dugum::getLeft()					 		
	{
		return left;   
	}
    
	Dugum* Dugum::getRight() 						
	{
		return right;	
	}
	
	Heap* Dugum::getDataOfCity()					
	{
		return heap; 
	}

