#include <stdio.h>
#include "libary_h/menu.h"
// #include "sales.h"
// #include "inventory.h"
// #include "history.h"
// #include "utils.h"

int main() {
    int choice;
    while (1) {
        displayMenu();
        printf("Enter option: ");
        scanf("%d", &choice);

        switch (choice) {
            // case 1: startSale(); break;
            // case 2: showHistory(); break;
            // case 3: manageInventory(); break;
            case 4: closeSystem(); return 0;
            default: printf("Invalid choice!\n"); break;
        }
    }
    return 0;
}
