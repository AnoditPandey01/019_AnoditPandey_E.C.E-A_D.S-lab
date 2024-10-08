#include <stdio.h>
#include <stdlib.h>

#define MAX_ROWS 10
#define MAX_COLS 10

// Structure to represent a node in the linked list
struct Node {
    int row;
    int col;
    int value;
    struct Node* next;
};

// Function to check if the given matrix is sparse
int isSparseMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    int count = 0;
    
    // Count non-zero elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != 0) {
                count++;
            }
        }
    }
    
    // Determine if the matrix is sparse
    if (count > (rows * cols) / 2) {
        return 0; // Not a sparse matrix
    } else {
        return 1; // Sparse matrix
    }
}

// Function to generate sparse matrix using linked list implementation
struct Node* generateSparseMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    struct Node* head = NULL;
    
    // Traverse the matrix and create nodes for non-zero elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != 0) {
                struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
                newNode->row = i;
                newNode->col = j;
                newNode->value = matrix[i][j];
                newNode->next = NULL;
                
                // Insert node into the linked list
                if (head == NULL) {
                    head = newNode;
                } else {
                    struct Node* temp = head;
                    while (temp->next != NULL) {
                        temp = temp->next;
                    }
                    temp->next = newNode;
                }
            }
        }
    }
    
    return head;
}

// Function to display the sparse matrix
void displaySparseMatrix(struct Node* head) {
    printf("Sparse Matrix Representation:\n");
    printf("Row\tColumn\tValue\n");
    
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d\t%d\t%d\n", temp->row, temp->col, temp->value);
        temp = temp->next;
    }
}

int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols;

    // Input the matrix dimensions and elements
    printf("Enter number of rows and columns of matrix: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is sparse
    if (isSparseMatrix(matrix, rows, cols)) {
        printf("The given matrix is a sparse matrix.\n");
        struct Node* sparseMatrix = generateSparseMatrix(matrix, rows, cols);
        displaySparseMatrix(sparseMatrix);
    } else {
        printf("The given matrix is not a sparse matrix.\n");
    }

    return 0;
}