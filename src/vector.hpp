#include <string>


class Vector {

public:
    Vector(const uint8_t* data, size_t length);
	//Vector operator=(std::initializer_list<template> ilist); //maybe Vector&
	~Vector();
	std::string toString();
	void sort(bool reversed = false);
	void get(int position = 0);
	void pop(int position = 0);
	//void add(void data, int position=0);
	void operator[](size_t n);
	size_t lenth();


private:
	void*  data;
	size_t length;
	size_t size;
	void resize();

}typedef(Vector);

class Map {

public:
    Map();
	//Map operator=(std::initializer_list<template> ilist); //maybe Map&
	~Map();
	std::string toString();
	void get(int position = 0);
	void pop(int position = 0);
	//void add(void data, int position=0);
	void operator[](size_t n);
	size_t size();


private:
	void*  data[2]; //array of string void
	size_t length;
	size_t s;
	void resize();

}typedef(Map);





