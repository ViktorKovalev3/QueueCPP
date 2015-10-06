#include <iostream>
#include "queue.h"

using namespace std;

int main()
{
    int a = 2;
    Queue<int> myIntQueue(1);
    myIntQueue.enqueue(a);
    myIntQueue.enqueue(3);
    myIntQueue.enqueue(4);

    while (myIntQueue.getSize()) {
        cout << myIntQueue.dequeue() << endl;
    }
    cout << myIntQueue.dequeue() << endl; //Error, because queue is empty

    Queue<string> myStrQueue("one");
    myStrQueue.enqueue      ("two");
    myStrQueue.enqueue      ("three");

    while (myStrQueue.getSize()){
        cout << myStrQueue.dequeue() << endl;
    }

    //system("PAUSE"); //For windows :C
    return 0;
}
