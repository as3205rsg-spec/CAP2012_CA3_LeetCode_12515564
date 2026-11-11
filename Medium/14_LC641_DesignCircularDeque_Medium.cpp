// LeetCode 641 - Design Circular Deque
// Approach: Array with front index and current element count.
// All operations: O(1) | Space: O(k)

#include <bits/stdc++.h>
using namespace std;

class MyCircularDeque {
private:
    vector<int> data;
    int capacity;
    int frontIndex;
    int count;

public:
    MyCircularDeque(int k) {
        capacity = k;
        data.resize(k);
        frontIndex = 0;
        count = 0;
    }

    bool insertFront(int value) {
        if (isFull()) return false;

        frontIndex = (frontIndex - 1 + capacity) % capacity;
        data[frontIndex] = value;
        count++;
        return true;
    }

    bool insertLast(int value) {
        if (isFull()) return false;

        int rearIndex = (frontIndex + count) % capacity;
        data[rearIndex] = value;
        count++;
        return true;
    }

    bool deleteFront() {
        if (isEmpty()) return false;

        frontIndex = (frontIndex + 1) % capacity;
        count--;
        return true;
    }

    bool deleteLast() {
        if (isEmpty()) return false;

        count--;
        return true;
    }

    int getFront() {
        if (isEmpty()) return -1;
        return data[frontIndex];
    }

    int getRear() {
        if (isEmpty()) return -1;

        int rearIndex = (frontIndex + count - 1) % capacity;
        return data[rearIndex];
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == capacity;
    }
};
