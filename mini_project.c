#include <stdio.h>

int main() {

    /* Variable Declarations */
    int totalSeconds;      // Stores user input
    int hours;             // Stores calculated hours
    int minutes;           // Stores calculated minutes
    int seconds;           // Stores remaining seconds

    /* Program Title */
    printf("=====================================\n");
    printf("        TIME CONVERSION TOOL\n");
    printf("      Seconds to HH:MM:SS Format\n");
    printf("=====================================\n\n");

    /* Step 1: User Input */
    printf("Enter the total number of seconds: ");
    scanf("%d", &totalSeconds);

    /* Step 3: Calculate Hours */
    hours = totalSeconds / 3600;

    /* Step 4: Calculate Remaining Seconds */
    seconds = totalSeconds % 3600;

    /* Step 5: Calculate Minutes */
    minutes = seconds / 60;

    /* Step 6: Calculate Remaining Seconds */
    seconds = seconds % 60;

    /* Display Result */
    printf("\n-------------------------------------\n");
    printf(" Time Conversion Result\n");
    printf("-------------------------------------\n");

    /* Step 8 & 9: Formatted Output */
    printf("Total Seconds : %d\n", totalSeconds);
    printf("Formatted Time: %02d:%02d:%02d\n", hours, minutes, seconds);

    printf("-------------------------------------\n");
    printf("Program executed successfully.\n");

    /* Step 10: End of Program */
    return 0;
}
