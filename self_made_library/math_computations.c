#include <stdio.h>
#include "formula.h"

int main() {
    char choice;
    double numero, total, exponent, answer;
    char continueChoice = 'y';  
    

        printf("  J.V. MENDIOLA\n");
        
        while (continueChoice == 'y' || continueChoice == 'Y') {
        printf("==============================================\n");
        printf("CHOOSE THE FUNCTION YOU WANT TO USE:\n");
        printf("a. Square\n");
        printf("b. Square Root\n");
        printf("c. Factorial\n");
        printf("d. Cube Root\n");
        printf("e. Percentage\n");
        printf("f. Power\n");
        printf("==============================================\n");
        printf("What function will you use, my Master? ");
        scanf(" %c", &choice);  
        printf("==============================================\n");
        
        switch (choice) {
            case 'a': {
                printf("Input the number you want to square: ");
                scanf("%lf", &numero);
                answer = square(numero);
                printf("Answer: %.2lf\n", answer);
              printf("==============================================\n");
                break;
            }
            case 'b': {
                printf("Input the number you want to square root: ");
                scanf("%lf", &numero);
                answer = squareRoot(numero);
                printf("Answer: %lf\n", answer);
                printf("==============================================\n");
                break;
            }
            case 'c': {
                printf("Input the number you want to factorial: ");
                scanf("%lf", &numero);
                answer = factorial(numero);
                printf("Answer: %lf\n", answer);
                printf("==============================================\n");
                break;
            }
            case 'd': {
                printf("Input the number you want to cube root: ");
                scanf("%lf", &numero);
                answer = cubeRoot(numero);
                printf("Answer: %lf\n", answer);
                printf("==============================================\n");
                break;
            }
            case 'e': {
                printf("Input the total number: ");
                scanf("%lf", &total);
                printf("Input the number you want to get the percent of: ");
                scanf("%lf", &numero);
                answer = percentage(numero, total);
                printf("Answer: %lf percent\n", answer);
                printf("==============================================\n");
                break;
            }
            case 'f': {
                printf("Input the number: ");
                scanf("%lf", &numero);
                printf("Input the power you want to raise it to: ");
                scanf("%lf", &exponent);
                answer = power(numero, exponent);
                printf("Answer: %lf\n", answer);
                printf("==============================================\n");
                break;
            }
            default: {
                printf("huuuuuyyyy!!! wala yan sa choices\n");
                printf("==============================================\n");
                break;
            }
        }
        
        printf("Do you want to perform another calculation? (Y or N):");

        scanf(" %c", &continueChoice);
    }
    
    printf("SALAMAT SIR LUIS!!!\n");
    return 0;
}
