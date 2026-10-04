#include <stdio.h>
#define MAX 10
int S[MAX];
int TOP = -1;

void PUSH(int X)
{
    if (TOP >= MAX - 1)
    {
        printf("STACK OVERFLOW\n");
        return;
    }

    TOP = TOP + 1;
    S[TOP] = X;
}

void POP()
{
    if (TOP == -1)
    {
        printf("STACK UNDERFLOW ON POP\n");
        return;
    }

    printf("Deleted element: %d\n", S[TOP]);
    TOP = TOP - 1;
}

void DISPLAY()
{
    int i;

    if (TOP == -1)
    {
        printf("STACK IS EMPTY\n");
        return;
    }

    printf("Stack elements are:\n");

    for (i = TOP; i >= 0; i--)
    {
        printf("%d\n", S[i]);
    }
}

int main()
{
    int choice, X;

    while (1)
    {
        printf("\n--- STACK OPERATIONS ---\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. DISPLAY\n");
        printf("4. EXIT\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter the element: ");
                scanf("%d", &X);
                PUSH(X);
                break;

            case 2:
                POP();
                break;

            case 3:
                DISPLAY();
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}