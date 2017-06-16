	/**
* @file test.cpp
* @description  Dosyadan veri çekip, çekilen verileri belli kurallar dahilinde  Heap Tree ve Binary Search Tree ye ekleme.
* @course 1. öğretim B grubu
* @assignment 4. Ödev
* @date 1.13.2014
* @author Ahmet Münip Şitoğlu - ahmetmsitoglu@hotmail.com
*/
#include <iostream>
#include <fstream>
#include "BST.hpp"
#include "Ulke.hpp"
#include "Sehir.hpp"

using namespace std;

int main() {
    ifstream dosya("bilgi.txt");
	 string veriler;
	Ulke* ulke = new Ulke();
	Sehir* sehir = new Sehir();
	 BST* tree = new BST();
	int sayac=0;

	
    while (!dosya.eof ()) 
    {
		
		if(sayac%2==0)
		{
			    getline (dosya, veriler,'#');
				ulke->setUlke(veriler);
				sayac++;
		}
		else
		{
			 getline (dosya, veriler,'\n');
			 sehir->setSehir(veriler);
			 tree->addNode(ulke->getUlke(),sehir->getSehir());
			 sayac++;
		}	

	}
	

   cout << "INORDER OKUMA";
   tree->inOrder(tree->Root());
   cout << endl;
  // tree->freeNode(tree->Root());
   return 0;
}