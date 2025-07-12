#include <stdio.h>
#include <string.h>

// Function prototypes
void greetUser();
void askQuestion();
void respondToInput(char *input);

int main() {
    greetUser();
    askQuestion();
    return 0;
}

// Function to greet the user
void greetUser() {
    printf("Hello! I am your interactive AI chatbot.\n");
    printf("I can help you with various tasks and answer your questions.\n");
}

// Function to ask a question and get the user's response
void askQuestion() {
    char input[50];
    printf("How can I assist you today? ");
    scanf("%s", input);
    respondToInput(input);
}

// Function to respond to different user inputs
void respondToInput(char *input) {
    if (strcmp(input, "weather") == 0) {
        printf("Sure! Please provide your location: ");
        char location[50];
        scanf("%s", location);
        printf("Fetching weather information for %s...\n", location);
        // Here, you can add code to integrate with a weather API
    } else if (strcmp(input, "news") == 0) {
        printf("Fetching the latest news for you...\n");
        // Here, you can add code to integrate with a news API
    } else if (strcmp(input, "joke") == 0) {
        printf("Why don't scientists trust atoms? Because they make up everything!\n");
    } else if (strcmp(input, "time") == 0) {
        printf("The current time is 20:35.\n");  // Example: Use a function to get the current time
    } else if (strcmp(input, "bye") == 0) {
        printf("Goodbye! Have a great day!\n");
    } else {
        printf("I'm sorry, I don't understand that command. Try asking for weather, news, a joke, or the current time.\n");
    }
}
