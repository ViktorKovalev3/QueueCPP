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
    void enqueue();  //Add last item to end
    void dequeue();  //Request first item and del
};

#endif // QUEUE_H
