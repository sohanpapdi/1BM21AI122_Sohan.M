#include <iostream>

using namespace std;

void moveDisk(int disk, char source, char destination) {
    cout << "Move disk " << disk << " from " << source << " to " << destination << endl;
}

void towersOfHanoi(int numDisks, char source, char auxiliary, char destination) {
    if (numDisks == 1) {
        moveDisk(1, source, destination);
    } else {
        towersOfHanoi(numDisks - 1, source, destination, auxiliary);
        moveDisk(numDisks, source, destination);
        towersOfHanoi(numDisks - 1, auxiliary, source, destination);
    }
}

int main() {
    int numDisks;

    cout << "Enter the number of disks: ";
    cin >> numDisks;

    towersOfHanoi(numDisks, 'A', 'B', 'C');

    return 0;
}
