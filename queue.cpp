#include "queue.h"

Queue::Queue(int initiatingItem)
{
    first = new (QueueItem);
    first->prevAdr = 0;
    last  = first;           //Because one item
    first->value = initiatingItem;
}

void Queue::enqueue(int value){
    QueueItem *newTmpLast = new(QueueItem);
    newTmpLast->prevAdr = 0;
    newTmpLast->value   = value;

    last->prevAdr = newTmpLast;
    last = newTmpLast;
}
