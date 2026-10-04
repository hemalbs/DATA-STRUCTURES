#include <stdio.h>
#include <ctype.h>

#define MAX 100

char STACK[MAX];
int TOP = -1;

void PUSH(char ITEM)
{
    if (TOP == MAX - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        TOP = TOP + 1;
        STACK[TOP] = ITEM;
    }
}

char POP()
{
    char ITEM;

    if (TOP == -1)
    {
        printf("Stack Underflow\n");
        return '\0';
    }
    else
    {
        ITEM = STACK[TOP];
        TOP = TOP - 1;
        return ITEM;
    }
}

int PRECEDENCE(char SYMBOL)
{
    if (SYMBOL == '^')
        return 3;
    else if (SYMBOL == '*' || SYMBOL == '/')
        return 2;
    else if (SYMBOL == '+' || SYMBOL == '-')
        return 1;
    else
        return 0;
}

void INFIX_TO_POSTFIX(char INFIX[], char POSTFIX[])
{
    int i = 0, j = 0;
    char SYMBOL;

    PUSH('(');

    while (INFIX[i] != '\0')
        i++;

    INFIX[i] = ')';
    INFIX[i + 1] = '\0';

    i = 0;

    while (INFIX[i] != '\0')
    {
        SYMBOL = INFIX[i];

        if (SYMBOL == ' ')
        {
            i++;
            continue;
        }

        else if (SYMBOL == '(')
        {
            PUSH(SYMBOL);
        }

        else if (isalnum(SYMBOL))
        {
            POSTFIX[j] = SYMBOL;
            j++;
        }

        else if (SYMBOL == ')')
        {
            while (TOP != -1 && STACK[TOP] != '(')
            {
                POSTFIX[j] = POP();
                j++;
            }

            POP();
        }

        else
        {
            while (TOP != -1 &&
                   PRECEDENCE(STACK[TOP]) >= PRECEDENCE(SYMBOL))
            {
                POSTFIX[j] = POP();
                j++;
            }

            PUSH(SYMBOL);
        }

        i++;
    }

    POSTFIX[j] = '\0';
}

int main()
{
    char INFIX[MAX], POSTFIX[MAX];

    printf("Enter the Infix Expression: ");
    scanf(" %[^\n]", INFIX);

    printf("Infix Expression: %s\n", INFIX);

    INFIX_TO_POSTFIX(INFIX, POSTFIX);

    printf("Postfix Expression: %s\n", POSTFIX);

    return 0;
}