## Programming Assignment 2
- Implementation of Linked-List Based Queue

## Tasks :page_with_curl:

-For this assignment you will be implementing your own version of a Linked-List based Queue.
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
- In this code, I used the `queue` class from the Standard Template to implement a queue of patients waiting at a clinic. The main function prompts the user to choose one of the operations (add a patient, see next patient, remove patient, or exit) and calls the appropriate function. The `addPatient` function prompts the user for the name of the patient and adds it to the end of the queue. The `nextPatient` function prints the name of the next patient in the `queue`, and the `removePatient` function removes the front patient from the queue. The program runs until the user chooses to exit.

- Execute using this commands 
`g++ queue.cpp -o queue`
`./queue`
`g++ patient.cpp -o patient`
`./patient`
