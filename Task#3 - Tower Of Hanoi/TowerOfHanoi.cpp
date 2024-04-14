#include <iostream>
using namespace std;
//Task 3 ODC: Solve the Tower of Hanoi problem in C++ Using Recursive function
//The program should calculate and display the total number of moves
//Function "towerOfHanoi" that takes the number of disks, source peg, destination peg, and auxiliary peg as arguments.

void towerOfHanoi(char sourcePeg, char auxiliaryPeg, char destinationPeg, int numOfDisks, int& totalMoves)
{
    if(numOfDisks > 1)
        towerOfHanoi(sourcePeg, destinationPeg, auxiliaryPeg, numOfDisks - 1, totalMoves);
        cout << "Move disk " << numOfDisks << " from tower " << sourcePeg << " to tower " << destinationPeg << '\n';
        totalMoves++;
    if(numOfDisks > 1)
        towerOfHanoi(auxiliaryPeg, sourcePeg, destinationPeg, numOfDisks - 1, totalMoves);
}

int main() 
{
    int numOfDisks;
    cout << "Enter number of disks: ";
    cin >> numOfDisks;

    int totalMoves = 0;
    towerOfHanoi('A', 'B', 'C', numOfDisks, totalMoves);
    cout << "Total moves required: " << totalMoves << '\n';

    return 0;
}