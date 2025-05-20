#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define MAX_INPUT 1024
#define MAX_ARGS 64

int main() {
    char input[MAX_INPUT];
    char *args[MAX_ARGS];

    while (1) {
        // Print shell prompt
        printf("mysh> ");
        fflush(stdout);

        // Get user input
        if (!fgets(input, MAX_INPUT, stdin)) {
            break; // EOF
        }

        // Remove newline character
        input[strcspn(input, "\n")] = '\0';

        // Exit command
        if (strcmp(input, "exit") == 0) {
            break;
        }

        // Parse input into args
        int i = 0;
        char *token = strtok(input, " ");
        while (token != NULL && i < MAX_ARGS - 1) {
            args[i++] = token;
            token = strtok(NULL, " ");
        }
        args[i] = NULL;

        // Fork a child process
        pid_t pid = fork();
        if (pid == 0) {
            // Child process
            execvp(args[0], args);
            // If execvp returns, there was an error
            perror("execvp");
            exit(EXIT_FAILURE);
        } else if (pid > 0) {
            // Parent process
            wait(NULL); // Wait for the child to finish
        } else {
            perror("fork");
        }
    }

    return 0;
}

