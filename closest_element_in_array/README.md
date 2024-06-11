Tom is working in a warehouse inventory system, where the item IDs are assigned sequentially in ascending order.
He wants to develop a program using binary search to efficiently determine the closest item ID that is less than or equal to a given target ID.
The program takes the total number of items and their sorted IDs as input, assisting warehouse staff in quickly identifying the closest available item less than or equal to the target ID. Help Tom in this program.

input:
4
1 2 3 4
5
output:
The closest item ID less than or equal to 5 is 4

input:
5
11 23 33 45 78
23
output:
The closest item ID less than or equal to 23 is 23

input:
5
13 42 63 74 98
5
output:
No closest item with an ID less than or equal to 5 exists in the wardobe
