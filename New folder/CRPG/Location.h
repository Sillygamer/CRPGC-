#pragma once
#include<iostream>
#include"Location.h"
using namespace std;
class Location
{
private:


public:
	int ID;
	string name;
	string Description;
	int IDlocationnorth = NULL;
	int IDlocationsouth = NULL;
	int IDlocationwest = NULL;
	int IDlocationeast = NULL;
	Location();
	virtual ~Location();
};

