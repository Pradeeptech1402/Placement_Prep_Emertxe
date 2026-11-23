# 2D16 — WAP to Allocate a 2D Array Using a Pointer to an Array

- **Topic:** Phase 2 — Pointers & Memory Addressing
- **Level:** 2B
- **Difficulty:** Medium
- **Category:** Dynamic 2D Arrays

## Description

- Read the number of rows from the user. The number of columns is fixed at 3.
- Dynamically allocate memory for this 2D array using a pointer to an array (e.g., int (*ptr)[3]).
- Read the elements into the array, calculate the sum of all elements, and print the total.
- Method Constraint: You must use int (*ptr)[3] and malloc to allocate the memory. Do not use an array of pointers.

**Pre-requisites:** Pointers, Dynamic Memory Allocation, Pointer to Array  
**Objective:** To understand how to allocate a 2D array dynamically when the number of columns is known at compile time.  
**Inputs:** An integer representing the number of rows, followed by the elements of the matrix.  
**Outputs:** `The sum of all elements in the format 'Sum: X'.`

## Sample Execution

### Test Case 1
```text
Enter rows: 2
Enter elements:
1 2 3
4 5 6
Sum: 21
```

### Test Case 2
```text
Enter rows: 1
Enter elements:
10 -5 2
Sum: 7
```
