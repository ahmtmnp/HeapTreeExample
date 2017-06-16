	/**
* @file Ulke.cpp
* @description  Dosyadan veri çekip, çekilen verileri belli kurallar dahilinde  Heap Tree ve Binary Search Tree ye ekleme.
* @course 1. öğretim B grubu
* @assignment 4. Ödev
* @date 1.13.2014
* @author Ahmet Münip Şitoğlu - ahmetmsitoglu@hotmail.com
*/
#include "Ulke.hpp"

string Ulke::getUlke()
{
	return ulke;
}

void Ulke::setUlke(string ulke)
{
	this->ulke = ulke;
}