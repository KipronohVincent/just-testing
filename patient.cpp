#include <iostream>
#include <queue>
#include <string>

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
