#include "Node.h"

using namespace std;

Node::Node(int inputs, TruthTable gate, Node* output) {
	gate = TruthTable(inputs);


	cout << "Constructing node" << endl;
}

Node::Node(Node& node) {
	if (this != &node)
		*this = node;
}

Node::~Node() {
	delete output;
	cout << "Destructing node" << endl;
}
