#include <stdio.h>


struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
   
    struct Student list[3];

   
    for (int i = 0; i < 3; i++) {
        printf("--- Entering Details for Student %d ---\n", i + 1);
        
        printf("Name: ");
        scanf("%s", list[i].name); 
        
        printf("Roll Number: ");
        scanf("%d", &list[i].rollNumber);
        
        printf("Marks: ");
        scanf("%f", &list[i].marks);
        printf("\n");
    }

  
    printf("--- Student Records ---\n");
    printf("%-20s %-10s %-5s\n", "Name", "Roll No", "Marks");
    printf("----------------------------------------\n");

    for (int i = 0; i < 3; i++) {
       
        printf("%-20s %-10d %-5.2f\n", list[i].name, list[i].rollNumber, list[i].marks);
    }

   
    printf("\nPress Enter to exit...");
    fflush(stdin);
    getchar();

    return 0;
}
