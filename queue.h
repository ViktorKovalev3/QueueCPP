#ifndef QUEUE_H
#define QUEUE_H

class Queue
{
private:
    struct QueueItem{
        int value;
        QueueItem *nextAdr;
    };
    QueueItem *first, *last;
    int size;

public:
    Queue(int initiatingItem);
    void enqueue(int value);  //Add new last item to end
    int dequeue (  void   );  //Request first item and del
    int getSize (  void   );
};

#endif // QUEUE_H
