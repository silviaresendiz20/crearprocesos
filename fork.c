#include <stdio.h>
#include <unistd.h>

int main() {
    int value = 20; // Shared variable
    int process_id = fork(); // Create a new process
    
    if (process_id == 0) { // Child process
        printf("I am the child process, value=%d\n", value);
        sleep(20); // Pause execution for 20 seconds
        return 0;
    }
    
    // Parent process
    printf("I am the parent process, value=%d\n", value);
    printf("My child's process ID is %d\n", process_id);
    sleep(20); // Pause execution for 20 seconds

    return 0;
}
