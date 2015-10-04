#ifndef QUEUE_H
#define QUEUE_H


class Queue
{
private:
    struct QueueItem{
        int value;
        QueueItem *prevAdr;
    };
    QueueItem *first, *last;

public:
    Queue(int initiatingItem);
    void enqueue(int value);  //Add new last item to end
    void dequeue(void        );  //Request first item and del
};

#endif // QUEUE_H
