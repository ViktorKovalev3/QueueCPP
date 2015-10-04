#include <iostream>
#include "queue.h"

using namespace std;

int main()
{
    int a = 2;
    Queue<int> myIntQueue(1);
    myIntQueue.enqueue(a);
    myIntQueue.enqueue(3);

    cout << myIntQueue.dequeue() << endl;
    cout << myIntQueue.dequeue() << endl;
    cout << myIntQueue.dequeue() << endl;
    //cout << myIntQueue.dequeue() << endl; //Error, because queue is empty

    Queue<string> myStrQueue("one");
    myStrQueue.enqueue      ("two");
    myStrQueue.enqueue      ("three");

    for (size_t i = 0; i < myStrQueue.getSize(); i++){
        cout << myStrQueue.dequeue() << endl;
    }
    return 0;
}
