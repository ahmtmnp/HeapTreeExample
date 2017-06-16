	/**
* @file Dugum.hpp
* @description  Dosyadan veri çekip, çekilen verileri belli kurallar dahilinde  Heap Tree ve Binary Search Tree ye ekleme.
* @course 1. öğretim B grubu
* @assignment 4. Ödev
* @date 1.13.2014
* @author Ahmet Münip Şitoğlu - ahmetmsitoglu@hotmail.com
*/
// Dugum class
#ifndef DUGUM_HPP
#define DUGUM_HPP
#include <iostream>
#include "Heap.h"
#include "Ulke.hpp"
#include "Sehir.hpp"
using namespace std;
class Dugum {
private:
	string data;
    Dugum* left;
    Dugum* right;
	Heap* heap;

public:
    Dugum();
    void setData(string data);
    void setLeft(Dugum* left);
    void setRight(Dugum* right);
	void setSehirData(string data);
    string getData(); 	
    Dugum* getLeft();
    Dugum* getRight();
	Heap* getDataOfCity();
	
};
#endif