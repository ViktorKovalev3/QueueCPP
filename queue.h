#ifndef QUEUE_H
#define QUEUE_H


class Queue
{
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> 9bb61b04d1f5f95c26d457577bd175e2791fde3c
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
<<<<<<< HEAD
=======
=======
public:
    Queue();
>>>>>>> f4e49ad7a3c78e8e564ebfaa443a54cd6af49d55
>>>>>>> 9bb61b04d1f5f95c26d457577bd175e2791fde3c
};

#endif // QUEUE_H
