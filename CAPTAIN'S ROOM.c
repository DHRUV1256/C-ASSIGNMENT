#include <stdio.h>

int findCaptainsRoom(int k, int *roomNumbers, int size) {
    int xorResult = 0;

    for (int i = 0; i < size; i++) {
        xorResult ^= roomNumbers[i];
    }

    return xorResult;
}

int main() {
    // Input
    int k;
    printf("Enter the size of each group (K): ");
    scanf("%d", &k);

    printf("Enter the room numbers (separated by space): ");
    
    // Assuming room numbers are entered with space separation
    int maxSize = 1000; // You can adjust this based on the maximum number of tourists
    int roomNumbers[maxSize];

    int currentSize = 0;
    while (scanf("%d", &roomNumbers[currentSize]) == 1) {
        currentSize++;
    }

    // Output
    int captainsRoom = findCaptainsRoom(k, roomNumbers, currentSize);
    printf("Captain's room number: %d\n", captainsRoom);

    return 0;
}
