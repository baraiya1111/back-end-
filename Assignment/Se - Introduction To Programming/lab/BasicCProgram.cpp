#include <stdio.h>



int main() {
   
    const int LEVEL_CAP = 100; 

    
    int playerLevel = 15;          
    float healthPoints = 85.5f;     
    char rankGrade = 'A';           

    
    
    printf("--- Player Stats ---\n");
    printf("Current Level: %d\n", playerLevel);      
    printf("Health: %.1f\n", healthPoints);        
    printf("Rank Grade: %c\n", rankGrade);          
    printf("Max Possible Level: %d\n", LEVEL_CAP);

    // Demonstration of a variable change
    playerLevel = playerLevel + 1; 
    printf("\nLevel Up! New Level: %d\n", playerLevel);

    return 0;
}
