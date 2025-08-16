#include <stdio.h>
#include <string.h>
#include <ctype.h>

void encrypt(char *text, int key);
void decrypt(char *text, int key);

int main() {
    char message[1024];
    int option, key;
    char repeat = 'y';

    while (repeat == 'y' || repeat == 'Y') {
        printf(" CAESAR CIPHER \n");
        printf("1 Encrypt\n");
        printf("2 Decrypt\n");
        printf("Choose an option: ");
        scanf("%d", &option);

       
        while ((getchar()) != '\n');

        printf("Enter the message: ");
        fgets(message, sizeof(message), stdin);
        message[strcspn(message, "\n")] = '\0'; 

        printf("Enter the integer: ");
        scanf("%d", &key);

        if (option == 1) {
            encrypt(message, key);
            printf("Encrypted message: %s\n", message);
        } else if (option == 2) {
            decrypt(message, key);
            printf("Decrypted message: %s\n", message);
        } else {
            printf("Invalid option.\n");
        }

        printf("\nAnother operation? (y/n): ");
        scanf(" %c", &repeat); 
    }

    return 0;
}

void encrypt(char *text, int key) {
    for (int i = 0; text[i] != '\0'; i++) {
        if (isalpha(text[i])) {
            char base = islower(text[i]) ? 'a' : 'A';
            text[i] = (text[i] - base + key) % 26 + base;
        }
    }
}

void decrypt(char *text, int key) {
    encrypt(text, 26 - (key % 26)); 
}
