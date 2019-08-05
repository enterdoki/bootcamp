class MyCircularQueue {
public:
    /** Initialize your data structure here. Set the size of the queue to be k. */
    MyCircularQueue(int k):queue(k) {
        
        item_count = 0;
        front = 0;
        back = 0;
    }
    
    /** Insert an element into the circular queue. Return true if the operation is successful. */
    bool enQueue(int value) {
        if(isFull())
            return false;
        
        queue[back] = value;
        back++;
        back = back % queue.size();
        item_count++;
        return true;
    }
    
    /** Delete an element from the circular queue. Return true if the operation is successful. */
    bool deQueue() {
        if(isEmpty()) 
            return false; 
       
        queue[front] = -1;
        front++;
        front = front % queue.size();
        item_count--;
        return true;
    }
    
    /** Get the front item from the queue. */
    int Front() {
        if(isEmpty())
            return -1;
        return queue[front];
    }
    
    /** Get the last item from the queue. */
    int Rear() {
        if(isEmpty())
            return -1;
        else if(back == 0)
            return queue[queue.size()-1];
        return queue[back-1];
    }
    
    /** Checks whether the circular queue is empty or not. */
    bool isEmpty() {
        return item_count == 0;
    }
    
    /** Checks whether the circular queue is full or not. */
    bool isFull() {
         return item_count == queue.size();
    }
private:
    vector<int> queue;
    int item_count;
    int front;
    int back;
};