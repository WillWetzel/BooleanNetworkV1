#pragma once
#include "TruthTable.h"

using namespace std;

class Node {
public:

	Node(int inputs, TruthTable gate, Node* output);		//Constructor
	Node(Node&);											//Copy Constructor
	~Node();												//Destructor




private:
	int inputs;
	bool state;
	TruthTable gate;
	Node* output;

};
