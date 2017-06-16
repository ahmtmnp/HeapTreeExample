	/**
* @file Sehir.hpp
* @description  Dosyadan veri çekip, çekilen verileri belli kurallar dahilinde  Heap Tree ve Binary Search Tree ye ekleme.
* @course 1. öğretim B grubu
* @assignment 4. Ödev
* @date 1.13.2014
* @author Ahmet Münip Şitoğlu - ahmetmsitoglu@hotmail.com
*/
#ifndef  SEHIR_HPP
#define SEHIR_HPP
#include<string>
using namespace std;
class Sehir
{
	private:
	string sehir;
	
	public:
	string getSehir();
	void setSehir(string sehir);
};
#endif