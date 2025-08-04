//que 5.
/*#include <stdio.h>

int main() {
    FILE *src, *dest;
    char ch;
    // Step 1: Create and write sample content to source.txt
    src = fopen("source.txt", "w");
    if (src == NULL) {
        printf("Error creating source.txt\n");
        return 1;
    }
    fprintf(src, "Hello, this is a sample file.\nThis text will be copied.\n");
    fclose(src);
    src = fopen("source.txt", "r");       // Open source file for reading
    dest = fopen("copy.txt", "w");        // Open destination file for writing
    if (src == NULL || dest == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);                 // Copy each character
    }
    fclose(src);
    fclose(dest);
    printf("File copied successfully.\n");
    return 0;
}*/


//que 6
/*#include <stdio.h>

int main() {
    FILE *fp;
    int id;
    char name[50], post[50];
    float salary;
    fp = fopen("employees.txt", "w");    // Create or open file for writing
    if (fp == NULL) {
        printf("Error creating file.\n");
        return 1;
    }
    printf("Enter Employee ID: ");
    scanf("%d", &id);
    printf("Enter Name: ");
    scanf("%s", name);  // Simple version: no space
    printf("Enter Post: ");
    scanf("%s", post);
    printf("Enter Salary: ");
    scanf("%f", &salary);
    fprintf(fp, "ID: %d\nName: %s\nPost: %s\nSalary: %.2f\n", id, name, post, salary);
    fclose(fp);
    printf("Employee data written to employees.txt\n");
    return 0;
}*/


//que 7

#include <stdio.h>
int main() {
    FILE *dataFile, *oddFile, *evenFile;
    int n,i, num;
    // Step 1: Write N integers to data.txt
    printf("Enter how many numbers (N): ");
    scanf("%d", &n);
    dataFile = fopen("data.txt", "w");
    if (dataFile == NULL) {
        printf("Error creating data.txt\n");
        return 1;
    }
    printf("Enter %d integer numbers:\n", n);
    for ( i = 0; i < n; i++) {
        scanf("%d", &num);
        fprintf(dataFile, "%d ", num);  // Write each number to the file
    }
    fclose(dataFile);
    // Step 2: Read from data.txt and separate into even and odd
    dataFile = fopen("data.txt", "r");
    oddFile = fopen("odd.txt", "w");
    evenFile = fopen("even.txt", "w");
    if (dataFile == NULL || oddFile == NULL || evenFile == NULL) {
        printf("Error opening one or more files.\n");
        return 1;
    }
    while (fscanf(dataFile, "%d", &num) != EOF) {
        if (num % 2 == 0) {
            fprintf(evenFile, "%d ", num);
        } else {
            fprintf(oddFile, "%d ", num);
        }
    }
    fclose(dataFile);
    fclose(oddFile);
    fclose(evenFile);
    printf("Numbers written to odd.txt and even.txt successfully.\n");
    return 0;
}



   

