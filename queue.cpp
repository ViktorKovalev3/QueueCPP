#include "queue.h"

Queue::Queue()
{
    first = new (QueueItem);
    last  = first;           //Because first item
    first->value = initiatingItem;
}

Queue::enqueue(){

}
