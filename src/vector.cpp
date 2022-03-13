#include "vector.hpp"


Vector::Vector(const uint8_t * data, size_t length){}
std::string Vector::toString() {}
void Vector::operator[](size_t n){}
void Vector::sort(bool reversed = false){}
void Vector::get(int position = 0){}
void Vector::pop(int position = 0){}
size_t Vector::lenth(){}
Vector::~Vector(){}


Map::Map(){}
//Map operator=(std::initializer_list<template> ilist); //maybe Map&
Map::~Map(){}
std::string Map::toString(){}
void Map::get(int position = 0){}
void Map::pop(int position = 0){}
//void add(void data, int position=0){}
void Map::operator[](size_t n){}
size_t Map::size(){}
