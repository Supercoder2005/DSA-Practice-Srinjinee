#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *start = NULL;
void create_list
(int m) {
    struct node *temp, *q;
    temp = malloc(sizeof(struct node));
    temp->data = m;
    temp->next = NULL;
    if (start == NULL)
        start = temp;
    else {
        q = start;
        while (q->next != NULL)
            q = q->next;
        q->next = temp;
    }
}
void disp() {
    struct node *q;

    if (start == NULL) {
        printf("No linked list created.\n");
    } else {
        q = start;
        while (q != NULL) {
            printf("%d\t", q->data);
            q = q->next;
        }
        printf("\n");
    }
}
void add_any() {
    if (start == NULL) {
        printf("No linked list created.\n");
    } else {
        int m, p;
        printf("Enter position: ");
        scanf("%d", &p);
        printf("Enter Element: ");
        scanf("%d", &m);

        struct node *q, *temp;
        temp = malloc(sizeof(struct node));
        temp->data = m;
        q = start;
        if (p == 1) {
            temp->next = start;
            start = temp;
        } else {
            int i;
            for (i = 0; i < p - 2 && q != NULL; i++)
                q = q->next;
            if (q == NULL) {
                printf("Position out of range.\n");
                free(temp);
                return;
            }
            temp->next = q->next;
            q->next = temp;
        }
    }
}
void searchItem(int item) {
    struct node *temp = start;
    int pos = 1;
    while (temp != NULL) {
        if (temp->data == item) {
            printf("Item found at position %d.\n", pos);
            return;
        }
        temp = temp->next;
        pos++;
    }
    printf("Item not found in the linked list.\n");
}
void delpos() {
    if (start == NULL) {
        printf("No linked list created.\n");
    } else {
        int pos;
        printf("Enter position: ");
        scanf("%d", &pos);

        struct node *q, *temp;
        q = start;
        if (pos == 1) {
            start = q->next;
            free(q);
        } else {
            int i;
            for (i = 0; i < pos - 2 && q != NULL; i++)
                q = q->next;
            if (q == NULL || q->next == NULL) {
                printf("Position out of range.\n");
                return;
            }
            temp = q->next;
            q->next = temp->next;
            free(temp);
        }
    }
}
int main() {
    int ch, m, p;
    while (1) {
        printf("\nEnter 1 to create node:\n");
        printf("Enter 2 to insert at nth position:\n");
        printf("Enter 3 to display:\n");
        printf("Enter 4 to delete at nth position:\n");
        printf("Enter 5 to search the element:\n");
        printf("Enter 6 to exit:\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter initial population: ");
                scanf("%d", &p);
                int i;
                printf("Enter Elements: ");
                for (i = 0; i < p; i++) {
                    scanf("%d", &m);
                    create_list(m);
                }
                break;
            case 2:
                add_any();
                break;
            case 3:
                disp();
                break;
            case 4:
                delpos();
                break;
       case 5:
                printf("Enter the element to search: ");
                scanf("%d", &m);
                searchItem(m);
                break;
             case 6:
                exit(0);
            default:
                printf("Invalid Input\n");
        }
    }
    return 0;
}  