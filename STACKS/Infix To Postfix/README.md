# Infix to Postfix Conversion Using Stack

This C program converts a valid **infix arithmetic expression** into its equivalent **postfix expression** using a stack.

## Problem Statement

Write a C program to convert a given valid parenthesized infix arithmetic expression to a postfix expression.

The expression can contain:

- Single-character operands (A-Z, a-z, 0-9)
- `+` Addition
- `-` Subtraction
- `*` Multiplication
- `/` Division
- `^` Exponent
- Parentheses `(` and `)`

## Example

### Input

```text
(A+B)*(C-D)
```

### Output

```text
AB+CD-*
```

## Algorithm

1. Define a character stack of maximum size `MAX`.
2. Initialize `TOP = -1`.
3. Use `PUSH()` to insert an element into the stack.
4. Use `POP()` to remove an element from the stack.
5. Use `PRECEDENCE()` to determine the priority of operators.
6. Start with `(` in the stack.
7. Add `)` at the end of the infix expression.
8. Scan the infix expression from left to right.
9. If the symbol is an operand, add it directly to the postfix expression.
10. If the symbol is `(`, push it onto the stack.
11. If the symbol is `)`, pop operators until `(` is found.
12. If the symbol is an operator, pop operators having higher or equal precedence and then push the current operator.
13. Continue until the complete expression is processed.
14. Add the null character `\0` at the end of the postfix expression.

## Operator Precedence

| Operator | Precedence |
|----------|------------|
| `^`      | 3          |
| `*`, `/` | 2          |
| `+`, `-` | 1          |

## Functions Used

### PUSH()

Inserts an element into the stack.

### POP()

Removes and returns the top element from the stack.

### PRECEDENCE()

Returns the precedence value of an operator.

### INFIX_TO_POSTFIX()

Converts the given infix expression into postfix form.

## Concepts Used

- Stack
- Arrays
- Functions
- Character handling
- Operator precedence
- Infix expression
- Postfix expression
- `isalnum()`

## Sample Execution

```text
Enter the Infix Expression: (A+B)*(C-D)

Infix Expression: (A+B)*(C-D)
Postfix Expression: AB+CD-*
```

