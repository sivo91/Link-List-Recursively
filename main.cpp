
first print then call itself funtion with pointer to next link/node.

  
#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node* Link;
};

/*
void printList(Node* n)
{
    if (n == NULL) {
        return;
    }
    cout << n->value << endl;
    printList(n->Link);
}
*/

// call recursively
void printList(Node* n)
{
    if (n != NULL) {
        cout << n->value << endl;
        printList(n->Link);
    }
   
}

int main() {

   /*
    int Arr[] = { 4, 6, 3, 7, 55, 23, 63 };
    int size = sizeof(Arr) / sizeof(Arr[0]);

    cout << "sizeof Arr " << sizeof(Arr) << endl;
    cout << "sizeOf Arr[0] " << sizeof(Arr[0]) << endl;
    cout << "size of Arr[] " << size << endl;
   */



    const int SIZE = 7;
    Node nodes[SIZE];

    int values[] = { 4, 6, 3, 7, 55, 23, 63 };

    for (int i = 0; i < SIZE; i++) {
        nodes[i].value = values[i];
        nodes[i].Link = (i < SIZE - 1) ? &nodes[i + 1] : NULL;
    }

    printList(nodes);

    return 0;
}






**********************    first call itself with pointer to next node , then print value ***************************






#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node* Link;
};

/*
void printList(Node* n)
{
    if (n == NULL) {
        return;
    }
    cout << n->value << endl;
    printList(n->Link);
}
*/

// call recursively
void printList(Node* n)
{
    cout << "call print function " << endl;

    if (n != NULL) {
        
        printList(n->Link);
        cout << n->value << endl;
       
    }
   
}

int main() {

   /*
    int Arr[] = { 4, 6, 3, 7, 55, 23, 63 };
    int size = sizeof(Arr) / sizeof(Arr[0]);

    cout << "sizeof Arr " << sizeof(Arr) << endl;
    cout << "sizeOf Arr[0] " << sizeof(Arr[0]) << endl;
    cout << "size of Arr[] " << size << endl;
   */



    const int SIZE = 7;
    Node nodes[SIZE];

    int values[] = { 4, 6, 3, 7, 55, 23, 63 };

    for (int i = 0; i < SIZE; i++) {
        nodes[i].value = values[i];
        nodes[i].Link = (i < SIZE - 1) ? &nodes[i + 1] : NULL;
    }

    printList(nodes);

    return 0;
}

/*
call print function
call print function
call print function
call print function
call print function
call print function
call print function
call print function // now going back to finish cout << "... , each call take space in memory , it make copy to create new data.
63
23
55
7
3
6
4

*/




