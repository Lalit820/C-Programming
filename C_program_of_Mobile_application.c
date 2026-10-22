#include <stdio.h>
#include <string.h>

#define MAX_RECORDS 10

// Login
struct login {
    char User_name[20];
    char password[10];
};

// Record
struct record {
    int id;
    char name[30];
    int Mobile_piece;
};

int main() {
    struct login log = {"Lalit", "123456"};

    struct record rec[MAX_RECORDS];

    char username[20];
    char password[10];
    int i,choice,index;
    int recordCount = 0;
    int loggedIn = 0;

    // Login system
    printf("===== LOGIN =====\n");

    for (i = 0; i < 3; i++) {
        printf("Enter Username: ");
        scanf("%19s", username);

        printf("Enter Password: ");
        scanf("%9s", password);

        if (strcmp(username, log.User_name) == 0 &&
            strcmp(password, log.password) == 0) {
            printf("\nLogin successful!\n");
            loggedIn = 1;
            break;
        } else {
            printf("Invalid username or password!\n");
        }
    }

    if (!loggedIn) {
        printf("Too many failed attempts. Exiting...\n");
        return 0;
    }

    // Record management menu
    do {
        printf("\n===== MENU =====\n");
        printf("1. Show Record\n");
        printf("2. Edit Record\n");
        printf("3. Delete Record\n");
        printf("4. Add new Record\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (recordCount == 0) {
                    printf("No records available!\n");
                    break;
                }

                printf("\n--- Record Details ---\n");

                for (i = 0; i < recordCount; i++) {
                    printf("\nRecord Number: %d\n", i + 1);
                    printf("ID     : %d\n", rec[i].id);
                    printf("Name   : %s\n", rec[i].name);
                    printf("Mobile : %d\n", rec[i].Mobile_piece);
                }
                break;

            case 2:
                if (recordCount == 0) {
                    printf("No records to edit!\n");
                    break;
                }

                printf("Enter record number (1-%d): ",
                       recordCount);
                scanf("%d", &index);

                if (index < 1 || index > recordCount) {
                    printf("Invalid record number!\n");
                    break;
                }

                index--;

                printf("Enter new name: ");
                scanf("%29s", rec[index].name);

                printf("Enter Mobile Piece: ");
                scanf("%d",&rec[index].Mobile_piece);

                printf("Record updated successfully!\n");
                break;

            case 3:
                if (recordCount == 0) {
                    printf("No records to delete!\n");
                    break;
                }

                printf("Enter record number (1-%d): ",
                       recordCount);
                scanf("%d", &index);

                if (index < 1 || index > recordCount) {
                    printf("Invalid record number!\n");
                    break;
                }

                index--;

                // Shift remaining records left
                for (i = index; i < recordCount - 1; i++) {
                    rec[i] = rec[i + 1];
                }

                recordCount--;

                printf("Record deleted successfully!\n");
                break;

            case 4:
                if (recordCount >= MAX_RECORDS) {
                    printf("Record storage is full!\n");
                    break;
                }

                printf("Enter new ID: ");
                scanf("%d", &rec[recordCount].id);

                printf("Enter Mobile Brand: ");
                scanf("%29s", rec[recordCount].name);

                printf("Enter Mobile Piece: ");
                scanf("%d",&rec[recordCount].Mobile_piece);

                recordCount++;

                printf("Record added successfully!\n");
                break;

            case 5:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 5);

    return 0;
}
