## Programming Assignment 2
- Implementation of Linked-List Based Queue

## Tasks :page_with_curl:

- For this assignment you will be implementing your own version of a Linked-List based Queue.
- Implement a Queue using a linked list. You will also need to implement the nodes that
are part of your list.
- Exhaustively test your implementation, your queue should be able to enqueue as many
objects as required to and should notify the user when trying to dequeue/front from an
- empty stack. Leave your testing code in your submission just comment it out.
- Add functionally to your program to act as a clinic check-in software. The user of your
program will be an employee at the clinic, prompt the user to ask what operations it
wants to perform, i.e., add a new patient to the queue that just arrived at the clinic, figure
out which patient is next to be seen and/or remove a patient from the queue that is being
treated. Your program should run as long as the user does not choose to exit.
- Add a read me file to your project folder.

## My solution
- The code defines two classes: `Node` and `Queue`.

- The `Node` class has three member variables:

    - `data` of type `int`: the data stored in the node.
    - `next` of type `Node*`: a pointer to the next node in the queue.
    - A constructor that takes an integer value as input and initializes the data variable with this value and next variable with nullptr.
The `Queue` class has the following member variables:

- `head` of type `Node*`: a pointer to the head of the queue.
- `tail` of type `Node*`: a pointer to the tail of the queue.
The `Queue` class has the following member functions:

- A constructor that initializes the `head` and `tail` variables with `nullptr`.
A destructor that frees up the memory occupied by the nodes in the queue.
`enqueue(int data)`: a function that adds a node to the end of the queue.
`dequeue()`: a function that removes a node from the front of the queue and returns its value.
`front()`: a function that returns the value of the node at the front of the queue.

## clinic check-in software.
- I used the `queue` class from the `Standard Template` to implement a queue of patients waiting at a clinic. The main function prompts the user to choose one of the operations (add a patient, see next patient, remove patient, or exit) and calls the appropriate function. The `addPatient` function prompts the user for the name of the patient and adds it to the end of the queue. The `nextPatient` function prints the name of the next patient in the `queue`, and the `removePatient` function removes the front patient from the queue. The program runs until the user chooses to exit.

- Execution 
`g++ linke-list_queue.cpp -o linke-list_queue`
`./linke-list_queue`
