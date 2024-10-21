#include <stdio.h>

// Function to perform the Tower of Hanoi move
void towerOfHanoi(int n, char start, char end, char aux) {
    // Base case: If there's only one disk, move it from the source rod to the destination rod
    if (n == 1) {
        printf("Move disk 1 from rod %c to rod %c\n", start, end);
        return;
    }

    // Move n-1 disks from the source rod to the auxiliary rod
    towerOfHanoi(n - 1, start, aux, end);

    // Move the nth disk from the source rod to the destination rod
    printf("Move disk %d from rod %c to rod %c\n", n, start, end);

    // Move the n-1 disks from the auxiliary rod to the destination rod
    towerOfHanoi(n - 1, aux, end, start);
}

int main() {
    int n; // Number of disks

    // Ask the user for the number of disks
    printf("Enter the number of disks: ");
    scanf("%d", &n);

    // Call the function to solve the Tower of Hanoi problem
    towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods

    return 0;
}
