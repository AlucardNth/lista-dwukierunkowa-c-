#include <iostream>
#include "Node.h"
#include "NodeFactory.h"

using namespace std;

int main() {
    cout << "TEST WEZLOW I FABRYKI\n";

    Node* firstNode = NodeFactory::createNode(10);
    Node* secondNode = NodeFactory::createNode(20);

    firstNode->next = secondNode;
    secondNode->prev = firstNode;

    cout << "Pierwszy wezel wartosc: " << firstNode->data << "\n";
    cout << "Drugi wezel (przez next) wartosc: " << firstNode->next->data << "\n";
    cout << "Drugi wezel poprzedni (przez prev) wartosc: " << secondNode->prev->data << "\n";

    delete firstNode;
    delete secondNode;

    return 0;
}