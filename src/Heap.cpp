	/**
* @file Heap.cpp
* @description  Dosyadan veri çekip, çekilen verileri belli kurallar dahilinde  Heap Tree ve Binary Search Tree ye ekleme.
* @course 1. öğretim B grubu
* @assignment 4. Ödev
* @date 1.13.2014
* @author Ahmet Münip Şitoğlu - ahmetmsitoglu@hotmail.com
*/
#include "Heap.h"
 
 Heap::Heap(int size) {
	   data = new string();
       heapSize = 0;
       arraySize = size;
 }   

 void Heap::insert(string city) 
{
		if (heapSize == arraySize)
            throw string("Heap's underlying storage is overflow");
		else 
		{
			arraySize++;
            heapSize++;
            data[heapSize - 1] = city;
            siftUp(heapSize - 1);
		}
} 
  
void Heap::removeMin() 
{
      if (isEmpty())
            throw string("Heap is empty");
      else 
	  {
			for(int i=0;heapSize>0;i++)
			{
			cout<<data[0]<<"\t";
            data[0] = data[heapSize - 1];
            heapSize--;
            if (heapSize > 0)
                  siftDown(0);
			}
      }
}


 Heap::~Heap() {
       delete[] data;
 }
 
 int Heap::getLeftChildIndex(int nodeIndex) {
       return 2 * nodeIndex + 1;
 }
 
 int Heap::getRightChildIndex(int nodeIndex) {
       return 2 * nodeIndex + 2;
 }
 
 int Heap::getParentIndex(int nodeIndex) {
       return (nodeIndex - 1) / 2;
 }
 


 
 
 bool Heap::isEmpty() 
{
      return (heapSize == 0);
}
	
void Heap::siftUp(int nodeIndex) 
{
		int parentIndex;
		string tmp;
		if (nodeIndex != 0) 
		{
			parentIndex = getParentIndex(nodeIndex);
			if (data[parentIndex] > data[nodeIndex]) 
			{
				tmp = data[parentIndex];
				data[parentIndex] = data[nodeIndex];
				data[nodeIndex] = tmp;
				siftUp(parentIndex);
			}
		}
}	
 


void Heap::siftDown(int nodeIndex) 
{
	  
      int leftChildIndex, rightChildIndex, minIndex;
	  string tmp;
	  
      leftChildIndex = getLeftChildIndex(nodeIndex);
      rightChildIndex = getRightChildIndex(nodeIndex);
     
	 if (rightChildIndex >= heapSize) 
	 {
            if (leftChildIndex >= heapSize)
                  return;
            else
                  minIndex = leftChildIndex;
      } 
	  else 
	  {
            if (data[leftChildIndex] <= data[rightChildIndex])
                  minIndex = leftChildIndex;
            else
                  minIndex = rightChildIndex;
      }
      if (data[nodeIndex] > data[minIndex]) 
	  {
            tmp = data[minIndex];
            data[minIndex] = data[nodeIndex];
            data[nodeIndex] = tmp;
            siftDown(minIndex);
      }
}


	  
