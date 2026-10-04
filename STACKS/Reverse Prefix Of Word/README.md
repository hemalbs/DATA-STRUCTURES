# Reverse Prefix of Word Using Stack

## Problem

Given a string `word` and a character `ch`, reverse the part of the word starting from index `0` up to the **first occurrence** of `ch`.

If `ch` does not exist in the word, return the original word unchanged.

## Approach

A **stack** is used to reverse the prefix.

1. Find the first occurrence of `ch`.
2. Push all characters from index `0` to the index of `ch` into the stack.
3. Pop the characters from the stack.
4. Store the popped characters back into the word.
5. Return the modified word.

Since a stack follows **LIFO (Last In, First Out)**, the prefix gets reversed.

## Example

### Input

```text
Enter the word: abcdefd
Enter the character: d
```

### Output

```text
Original word: abcdefd
After reversing prefix: dcbaefd
```

## Stack Operation

For:

```text
word = abcdefd
ch = d
```

The prefix is:

```text
abcd
```

After PUSH:

```text
d  <- TOP
c
b
a
```

After POP:

```text
d c b a
```

Therefore, the final word is:

```text
dcbaefd
```

## Important Variables

| Variable | Purpose |
|---|---|
| `STACK` | Stores the characters |
| `TOP` | Keeps track of the top of the stack |
| `index` | Stores the first position of `ch` |
| `word` | Original string and final result |

## Functions

### `PUSH()`

Adds a character to the stack.

### `POP()`

Removes and returns the character from the top of the stack.

### `reversePrefix()`

Finds the first occurrence of `ch`, pushes the prefix into the stack, and pops it back to reverse the prefix.

## Concepts Used

- Strings
- Arrays
- Stack
- LIFO
- Functions
- Character searching

