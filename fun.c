                          // a. Function to Update the Array With Names
                          // b. Function to rearange the Names In Alphabetical Order

#include <stdio.h>
#include <string.h>

char MAX_NAMES; 
char MAX_NAME_LENGTH;
int numNames;

int main() {
    char names[MAX_NAMES][MAX_NAME_LENGTH];
    int numNames = 0;

    char choice;
    do {
        printf("\nMenu:\n");
        printf("1. Update names\n");
        printf("2. Rearrange names in alphabetical order\n");
        printf("3. Exit\n");
        printf("Enter your choice (1/2/3): ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                updateNames(names, &numNames);
                break;
            case '2':
                rearrangeNames(names, numNames);
                break;
            case '3':
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != '3');

    return 0;
}

void updateNames(char (*names)[MAX_NAME_LENGTH], int* numNames) {
    if (*numNames >= MAX_NAMES) {
        printf("Database is full. Cannot add more names.\n");
        return;
    }

    printf("Enter a name to add: ");
    char newName[MAX_NAME_LENGTH];
    scanf("%s", newName);

    strcpy(names[*numNames], newName);
    (*numNames)++;

    printf("Name added successfully.\n");
    }

void rearrangeNames(char (*names)[MAX_NAME_LENGTH], int numNames) {
    int i, j;
    char temp[MAX_NAME_LENGTH];

    for (i = 0; i < numNames - 1; i++){
    for (j = i + 1; j < numNames; j++){
         if (strcmp(names[i], names[j]) > 0) {
               strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                   strcpy(names[j], temp);
                }
                  }
                }  

    printf("Names rearranged in alphabetical order.\n");
}

