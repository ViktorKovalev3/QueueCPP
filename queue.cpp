#include "queue.h"

Queue::Queue(int initiatingItem)
{
    first = new (QueueItem);
    first->prevAdr = 0;
    last  = first;           //Because one item
    first->value = initiatingItem;
}

void Queue::enqueue(){
}
