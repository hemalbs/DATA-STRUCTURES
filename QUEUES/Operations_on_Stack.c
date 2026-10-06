#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void insert(int element)
{
    if (rear == MAX - 1)
    {
        printf("Queue is full\n");
        return;
    }

    if (front == -1)
        front = 0;

    rear++;
    queue[rear] = element;

    printf("%d inserted successfully\n", element);
}

int deleteElement()
{
    int element;

    if (front == -1 || front > rear)
    {
        printf("Queue is empty\n");
        return -1;
    }

    element = queue[front];
    front++;

    if (front > rear)
    {
        front = -1;
        rear = -1;
    }

    return element;
}

void display()
{
    int i;

    if (front == -1 || front > rear)
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements are:\n");

    for (i = front; i <= rear; i++)
    {
        printf("%d\n", queue[i]);
    }
}

int main(void)
{
    int choice;
    int data;
    int deletedElement;

    while (1)
    {
        printf("\n1. Insertion\n");
        printf("2. Deletion\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter the element to insert: ");
                scanf("%d", &data);
                insert(data);
                break;

            case 2:
                deletedElement = deleteElement();

                if (deletedElement != -1)
                {
                    printf("The element deleted is %d\n", deletedElement);
                }
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting...\n");
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
