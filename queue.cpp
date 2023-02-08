#include <iostream>

class Node {
 public:
  int data;
  Node* next;
  Node(int data) {
    this->data = data;
    this->next = nullptr;
  }
};

class Queue {
 private:
  Node* head;
  Node* tail;

 public:
  Queue() {
    head = nullptr;
    tail = nullptr;
  }

  ~Queue() {
    Node* temp = head;
    while (temp) {
      head = head->next;
      delete temp;
      temp = head;
    }
  }

  void enqueue(int data) {
    Node* temp = new Node(data);
    if (tail) {
      tail->next = temp;
    }
    tail = temp;
    if (!head) {
      head = tail;
    }
  }

  int dequeue() {
    if (!head) {
      std::cout << "Queue is empty" << std::endl;
      return -1;
    }
    int data = head->data;
    Node* temp = head;
    head = head->next;
    delete temp;
    return data;
  }

  int front() {
    if (!head) {
      std::cout << "Queue is empty" << std::endl;
      return -1;
    }
    return head->data;
  }
};

int main() {
  Queue q;
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  std::cout << "Dequeue: " << q.dequeue() << std::endl;
  std::cout << "Dequeue: " << q.dequeue() << std::endl;
  std::cout << "Front: " << q.front() << std::endl;
  q.enqueue(4);
  std::cout << "Front: " << q.front() << std::endl;
  std::cout << "Dequeue: " << q.dequeue() << std::endl;
  std::cout << "Dequeue: " << q.dequeue() << std::endl;
  std::cout << "Dequeue: " << q.dequeue() << std::endl;
  return 0;
}

