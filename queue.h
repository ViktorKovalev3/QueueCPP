#ifndef QUEUE_H
#define QUEUE_H


class Queue
{
<<<<<<< HEAD
private:
    struct QueueItem{
        int value;
        QueueItem *next;
    };
    QueueItem* first, last;

public:
    Queue(int initiatingItem);
    void enqueue();  //Add last item to end
    void dequeue();  //Request first item and del
=======
public:
    Queue();
>>>>>>> f4e49ad7a3c78e8e564ebfaa443a54cd6af49d55
};

#endif // QUEUE_H
