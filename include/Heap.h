	/**
* @file Dugum.h
* @description  Dosyadan veri çekip, çekilen verileri belli kurallar dahilinde  Heap Tree ve Binary Search Tree ye ekleme.
* @course 1. öğretim B grubu
* @assignment 4. Ödev
* @date 1.13.2014
* @author Ahmet Münip Şitoğlu - ahmetmsitoglu@hotmail.com
*/
#ifndef  HEAP_H
#define HEAP_H
#include<iostream>
#include<string>
using namespace std;
class Heap
{
private:
      string *data;
      int heapSize;
      int arraySize;
	  int getLeftChildIndex(int nodeIndex);
	  int getRightChildIndex(int nodeIndex);
	  int getParentIndex(int nodeIndex);

public:
      Heap(int size);
	  ~Heap();
	  bool isEmpty();
	  void siftUp(int nodeIndex);
	  void insert(string city);
	  void siftDown(int nodeIndex);
	  void removeMin();
	  
};
#endif