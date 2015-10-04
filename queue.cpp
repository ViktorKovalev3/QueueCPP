#include "queue.h"

Queue::Queue(int initiatingItem)
{
    first = new (QueueItem);
    last  = first;           //Because one item
    first->value = initiatingItem;
}

void Queue::enqueue(){
}
