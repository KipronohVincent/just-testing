#include <iostream>
#include <queue>
#include <string>

// Implementing Queue using a linked list
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


// Implementation of clinic check-in software.
using namespace std;

void addPatient(queue<string> &q) {
    string patient;
    cout << "Enter the name of the patient: ";
    cin >> patient;
    q.push(patient);
    cout << "Patient added to queue successfully." << endl;
}

void nextPatient(queue<string> &q) {
    if (q.empty()) {
        cout << "No patients in queue." << endl;
        return;
    }
    cout << "Next patient: " << q.front() << endl;
}

void removePatient(queue<string> &q) {
    if (q.empty()) {
        cout << "No patients in queue." << endl;
        return;
    }
    cout << "Patient being treated: " << q.front() << endl;
    q.pop();
}

// Test Cases
// Test case for the implemented Queue
// int main() {
//   Queue q;
//   q.enqueue(1);
//   q.enqueue(2);
//   q.enqueue(3);
//   std::cout << "Dequeue: " << q.dequeue() << std::endl;
//   std::cout << "Dequeue: " << q.dequeue() << std::endl;
//   std::cout << "Front: " << q.front() << std::endl;
//   q.enqueue(4);
//   std::cout << "Front: " << q.front() << std::endl;
//   std::cout << "Dequeue: " << q.dequeue() << std::endl;
//   std::cout << "Dequeue: " << q.dequeue() << std::endl;
//   std::cout << "Dequeue: " << q.dequeue() << std::endl;
//   return 0;
// }

// Test case for the clinic check-in software.
int main() {
    queue<string> patientQueue;
    int choice;
    while (true) {
        cout << "What would you like to do?" << endl;
        cout << "1. Add a patient" << endl;
        cout << "2. See next patient" << endl;
        cout << "3. Remove patient" << endl;
        cout << "4. Exit" << endl;
        cin >> choice;
        switch (choice) {
            case 1:
                addPatient(patientQueue);
                break;
            case 2:
                nextPatient(patientQueue);
                break;
            case 3:
                removePatient(patientQueue);
                break;
            case 4:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    }
    return 0;
}
