/***********************************************************************
 * Module:
 *    Week 08, Huffman
 *    Brother Helfrich, CS 235
 * Author:
 *    <your name>
 * Summary:
 *    This program will implement the huffman() function
 ************************************************************************/

#include <iostream>        // for CIN and COUT
#include <fstream>         // for IFSTREAM
#include <cassert>         // for ASSERT
#include <string>          // for STRING: binary representation of codes
#include "bnode.h"         // for BINARY_NODE class definition
#include <vector>        // for VECTOR container                           !!!will need to include vector.h and change this!!!
#include "pair.h"          // for PAIR container
#include "huffman.h"       // for HUFFMAN() prototype
#include <algorithm>       // for std::sort()

using std::cout;
using std::cin;
using std::ifstream;
using std::endl;
using std::string;
using std::bad_alloc;
using namespace std;

/*******************************************
 * HUFFMAN
 * Driver program to exercise the huffman generation code
 *******************************************/
void huffman(const string & fileName)
{
	std::vector<custom::pair<string, float> > huffy;

	std:ifstream fin(fileName.c_str());
	if (fin.fail())
		cout << "Error: could not read file.\n";
	custom::pair<string, float> p;
	while (!fin.eof())
	{
		fin >> p;
		huffy.push_back(p);
	}
	fin.close();

	std::sort(huffy.begin(), huffy.end());
	
	std::cout << "Testing file extraction and sorting: ";
	for (int i = 0; i < huffy.size(); i++)
	{
		cout << huffy[i];
	}
   return;
}
