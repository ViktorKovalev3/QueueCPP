#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>  //cerr stream
#include <stdlib.h>  //abort()
template <typename T>

/*---------------------------------------------------------*/
class Queue
{
private:
    struct QueueItem{
        T value;
        QueueItem *nextAdr;
    };
    QueueItem *first, *last;
    size_t size;

public:
    Queue(const T &);
    ~Queue();
    void enqueue(T value);  //Add new last item to end
    T dequeue (  void   );  //Request first item and del
    size_t getSize (  void   );
};

/*---------------------------------------------------------*/
template <typename T>
Queue<T>::Queue(const T & initiatingItem)
{
    first = new (QueueItem);
    first->nextAdr = 0;
    last  = first;           //Because one item
    first->value = initiatingItem;
    size = 1;
}

template<typename T>
Queue<T>::~Queue()
{
    first = 0;
    last = 0;
    delete first;
    delete last;
}

template <typename T>
void Queue<T>::enqueue(T value){
    QueueItem *newTmpLast = new(QueueItem);
    newTmpLast->nextAdr = 0;
    newTmpLast->value   = value;

    last->nextAdr = newTmpLast;
    last = newTmpLast;
    size++;
}

template <typename T>
T Queue<T>::dequeue(void){
    if(size == 0){
        std::cerr << "!!\t dequeue Empty Queue \t!! \n";
        abort();
    }
    T tmpVal = first->value;
    QueueItem *tmpPointerToFirst = first; // Need for delete old First Queue Item
    first = first->nextAdr;               // Change new adress for First
    delete tmpPointerToFirst;             // Delete old First Item
    size--;

    return tmpVal;
}

template <typename T>
size_t Queue<T>::getSize(void){
    return size;
}

#endif // QUEUE_H
