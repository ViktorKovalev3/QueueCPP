#include <iostream>
#include "queue.h"

using namespace std;

int main()
{
    int a = 1;
    Queue myQueue(2);
    myQueue.enqueue(a);
    myQueue.enqueue(1024);
    cout << myQueue.dequeue() << endl;
    cout << myQueue.dequeue() << endl;
    cout << myQueue.dequeue() << endl;
    cout << myQueue.dequeue() << endl; //Error, because queue is empty
    return 0;
}
