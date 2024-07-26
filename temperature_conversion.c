#include <stdio.h>

int main ()
{
    char choice;
    float temp, converted;
    char loop;
    
    do{
        printf("=================================================\n");
        printf("TEMPERATURE CONVERSION\n");
        printf("a. Celsius to Farenheit\n");
        printf("b. Farenheit to Celsius\n");
        printf("c. Celsius to Kelvin\n");
        printf("d. Kelvin to Celsius\n");
        printf("e. Farenheit to Kelvin\n");
        printf("f. Kelvin to Farenheit\n");
        printf("=================================================\n");
        printf("What conversion will you use? ");
        scanf(" %c", &choice);

        switch(choice)
        {
            case 'a':
            {
                printf("Enter temperature in Celsius: ");
                scanf("%f", &temp);
                converted = (1.8*temp) + 32;
                printf("%.2f °C is %.2f °F\n", temp, converted);
            }
            break;
            
            case 'b':
            {
                printf("Enter temperature in Farenheit: ");
                scanf("%f", &temp);
                converted = (temp - 32)/1.8;
                printf("%.2f °F is %.2f °C\n", temp, converted);
            }
            break;

            case 'c':
            {
                printf("Enter temperature in Celsius: ");
                scanf("%f", &temp);
                converted = temp + 273.15;
                printf("%.2f °C is %.2f K\n", temp, converted);
            }
            break;

            case 'd':
            {
                printf("Enter temperature in Kelvin: ");
                scanf("%f", &temp);
                converted = temp - 273.15;
                printf("%.2f K is %.2f °C\n", temp, converted);
            }
            break;

            case 'e':
            {
                printf("Enter temperature in Farenheit: ");
                scanf("%f", &temp);
                converted = ((temp - 32)/1.8) + 273.15;
                printf("%.2f °F is %.2f K\n", temp, converted);
            }
            break;

            case 'f':
            {
                printf("Enter temperature in Kelvin: ");
                scanf("%f", &temp);
                converted = ((temp - 273.15)*1.8) + 32;
                printf("%.2f K is %.2f °F\n", temp, converted);
            }
            break;

            default:
                printf("Invalid choice\n");
        }
            printf("=================================================\n");
            printf("Do you want to perform another conversion? (Y/N): ");
            scanf(" %c", &loop); 

    } while(loop == 'y' || loop == 'Y'); 

        if (loop == 'n' || loop == 'N') {
        printf("=================================================\n");
        printf("Thank you for using this conversion!\n");   
    }
}
