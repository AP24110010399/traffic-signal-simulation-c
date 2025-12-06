#include <stdio.h>

#define MAX 50

typedef struct {
    int data[MAX];
    int front;
    int rear;
} Queue;

void init(Queue *q) {
    q->front = q->rear = -1;
}

int isFull(Queue *q) {
    return q->rear == MAX - 1;
}

int isEmpty(Queue *q) {
    return q->front == -1;
}

void enqueue(Queue *q, int car) {
    if (isFull(q)) return;
    if (isEmpty(q)) q->front = 0;
    q->rear++;
    q->data[q->rear] = car;
}

int dequeue(Queue *q) {
    if (isEmpty(q)) return -1;
    int car = q->data[q->front];
    if (q->front == q->rear)
        q->front = q->rear = -1;
    else
        q->front++;
    return car;
}

void showQueue(Queue *q) {
    if (isEmpty(q)) {
        printf("No cars waiting\n");
        return;
    }
    for (int i = q->front; i <= q->rear; i++)
        printf("Car %d ", q->data[i]);
    printf("\n");
}

int main() {
    Queue lane;
    init(&lane);

    int choice, car = 1;

    while (1) {
        printf("\n--- Traffic Signal Simulation ---\n");
        printf("1. Car Arrives\n");
        printf("2. Signal Green (Car Moves)\n");
        printf("3. Show Waiting Cars\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            enqueue(&lane, car);
            printf("Car %d arrived and is waiting\n", car);
            car++;
        }
        else if (choice == 2) {
            int moved = dequeue(&lane);
            if (moved == -1)
                printf("No cars to move\n");
            else
                printf("Car %d passed the signal\n", moved);
        }
        else if (choice == 3) {
            printf("Cars in Queue: ");
            showQueue(&lane);
        }
        else if (choice == 4)
            break;
        else
            printf("Invalid choice\n");
    }

    return 0;
}