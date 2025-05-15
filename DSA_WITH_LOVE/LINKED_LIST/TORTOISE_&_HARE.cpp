//FINDING THE MIDDLE OF THE ELEMENT
// The Tortoise and Hare algorithm (also known as slow and fast pointer technique) is an efficient way to find the middle of a linked list using two pointers. Here's the intuition:
// ✅ Intuition
// You have two pointers:
// Tortoise (slow pointer): Moves one step at a time.
// Hare (fast pointer): Moves two steps at a time.
// By the time the Hare reaches the end of the list, the Tortoise will be at the middle.
// This works because the Hare moves twice as fast as the Tortoise, meaning the Tortoise travels half the distance when the Hare reaches the end.

// 📌 Algorithm Steps
// Initialize both pointers at the head of the linked list.
// Move the Hare two steps and the Tortoise one step until the Hare reaches the end (NULL) or the next node of the Hare is NULL.
// The Tortoise will be at the middle of the list.

// Odd List
// 1 → 2 → 3 → 4 → 5 → NULL
// T   H
// T       H
//     T       H

// Middle Element = 3


// Even List
// 1 → 2 → 3 → 4 → 5 → 6 → NULL
// T   H
// T       H
//     T       H
//         T       H (NULL)

// Middle Element = 4 (For even, usually the second middle is returned)

// ⚙ Time and Space Complexity
// Time Complexity:
// O(N) → The Hare moves through the list at double the speed, making it a linear traversal.
// Space Complexity:
// O(1) → Only two pointers are used, so no extra space is needed.


