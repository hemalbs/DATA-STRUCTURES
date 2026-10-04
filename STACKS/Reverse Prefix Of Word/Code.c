#include <stdio.h>
#include <string.h>

#define MAX 1000

char STACK[MAX];
int TOP = -1;

void PUSH(char X)
{
    TOP = TOP + 1;
    STACK[TOP] = X;
}

char POP()
{
    char X;

    X = STACK[TOP];
    TOP = TOP - 1;

    return X;
}

char* reversePrefix(char* word, char ch)
{
    int index = -1;

    /* Find the first occurrence of ch */
    for (int i = 0; i < strlen(word); i++)
    {
        if (word[i] == ch)
        {
            index = i;
            break;
        }
    }

    /* Character not found */
    if (index == -1)
    {
        return word;
    }

    /* Push the prefix into the stack */
    for (int i = 0; i <= index; i++)
    {
        PUSH(word[i]);
    }

    /* Pop from stack and reverse the prefix */
    for (int i = 0; i <= index; i++)
    {
        word[i] = POP();
    }

    return word;
}

int main()
{
    char word[MAX];
    char ch;

    printf("Enter the word: ");
    scanf("%s", word);

    printf("Enter the character: ");
    scanf(" %c", &ch);

    printf("Original word: %s\n", word);

    reversePrefix(word, ch);

    printf("After reversing prefix: %s\n", word);

    return 0;
}