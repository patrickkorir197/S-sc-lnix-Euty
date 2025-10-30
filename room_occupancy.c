#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occupancy[5][10];  // 5 floors × 10 rooms
    int floor, room;
    int occupied, vacant;

    srand(time(0));  // seed random number generator

    printf("=== 2D ARRAY: Room Occupancy (One Branch) ===\n");

    // Assign random occupancy
    for (floor = 0; floor < 5; floor++) {
        for (room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; // 1 = occupied, 0 = vacant
        }
    }

    // Display occupancy count per floor
    for (floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;
        for (room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("Floor %d -> Occupied: %d | Vacant: %d\n", floor + 1, occupied, vacant);
    }

    return 0;
}