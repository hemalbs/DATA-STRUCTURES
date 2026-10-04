# Stack Implementation in C

This program implements a **Stack** using an array in C.

## Features

The program supports the following operations:

1. **PUSH** – Inserts an element into the stack.
2. **POP** – Removes the top element from the stack.
3. **DISPLAY** – Displays all elements in the stack.
4. **EXIT** – Terminates the program.

## Stack Details

- Stack size: `MAX = 10`
- Array used to store stack elements: `S[MAX]`
- `TOP` represents the position of the top element.
- Initially, `TOP = -1`.

## PUSH Operation

The PUSH operation inserts an element at the top of the stack.

If the stack is full:

```text
STACK OVERFLOW
```

Otherwise:

```text
TOP = TOP + 1
S[TOP] = X
```

## POP Operation

The POP operation removes the top element from the stack.

If the stack is empty:

```text
STACK UNDERFLOW ON POP
```

Otherwise, the top element is removed and `TOP` is decremented.

## DISPLAY Operation

The DISPLAY operation prints the stack elements from **TOP to the bottom**.

## Program Structure

```text
Stack
│
├── PUSH()
├── POP()
├── DISPLAY()
└── main()
     └── while(1)
          └── switch-case
```

## Example

```text
--- STACK OPERATIONS ---
1. PUSH
2. POP
3. DISPLAY
4. EXIT

Enter your choice: 1
Enter the element: 10

Enter your choice: 1
Enter the element: 20

Enter your choice: 3

Stack elements are:
20
10

Enter your choice: 2
Deleted element: 20
```

## Concepts Used

- Arrays
- Functions
- Stack data structure
- `TOP` variable
- `while(1)` infinite loop
- `switch-case`
- Stack Overflow
- Stack Underflow

