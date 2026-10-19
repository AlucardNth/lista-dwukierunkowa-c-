#include <iostream>
#include "Node.h"
#include "NodeFactory.h"

using namespace std;

int main() {
    cout << "TEST WĘZŁÓW I FABRYKI\n";

    Node* firstNode = NodeFactory::createNode(10);
    Node* secondNode = NodeFactory::createNode(20);

    firstNode->next = secondNode;
    secondNode->prev = firstNode;

    cout << "Pierwszy węzeł wartość: " << firstNode->data << "\n";
    cout << "Drugi węzeł (przez next) wartość: " << firstNode->next->data << "\n";
    cout << "Drugi węzeł poprzedni (przez prev) wartość: " << secondNode->prev->data << "\n";

    delete firstNode;
    delete secondNode;

    return 0;
}