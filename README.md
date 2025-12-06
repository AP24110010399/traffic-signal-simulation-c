Traffic Signal Simulation in C

This project simulates a traffic signal using queues in the C programming language.
Cars arriving at the signal are added to a queue, and when the signal turns green, cars move one by one from the queue.
This program is menu-driven and demonstrates the real-time working of queue operations such as enqueue and dequeue.

Features

Cars arriving at the signal are added to a queue

When the signal becomes green, the first car in the queue moves

Shows all waiting cars

Simple and easy-to-understand implementation

Demonstrates queue operations in real-life simulation

How to Run

Clone the repository:

git clone https://github.com/YOUR-USERNAME/traffic-signal-simulation-c.git


Compile the code:

gcc traffic.c -o traffic


Run the program:

./traffic

Sample Output
--- Traffic Signal Simulation ---
1. Car Arrives
2. Signal Green (Car Moves)
3. Show Waiting Cars
4. Exit
Enter choice: 1
Car 1 arrived and is waiting

Enter choice: 1
Car 2 arrived and is waiting

Enter choice: 3
Cars in Queue: Car 1 Car 2

Enter choice: 2
Car 1 passed the signal

Enter choice: 3
Cars in Queue: Car 2

Enter choice: 4

License

This project is open-source and can be used for academic purposes.
