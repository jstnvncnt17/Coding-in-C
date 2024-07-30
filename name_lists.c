int main(void){
	char names [20][20];
	int count = 0;
	char first_name[20];
	char last_name[20];
	
	printf("Please enter your first name: ");
	scanf("%s", first_name);
	printf("Please enter yout last name: ");
	scanf("%s", last_name);
	printf("Output: \n");
	strcat(first_name, last_name);
	printf("\t%s", first_name);
	strcpy(names[count], first_name);
	count++;
	
while (1) {

	int choice;
	char name[20];
	char newName [20];
	printf("\n=========================================");
	printf("\n\tOPTIONS:\n");
	printf("\t1. Add Name\n");
	printf("\t2. Edit Name\n");
	printf("\t3. Delete Name\n");
	printf("\t4. List of Names\n");
	printf("\t5. Exit\n"); 
	printf("=========================================\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);
	
	switch (choice) {
		case 1:
			{
				printf("Enter a name to add: ");
				scanf("%s", name);
				strcpy(names [count], name);
				count++;
				printf("Name added !!!");
			}
			break;
		
		case 2:
			{
				displayNames (names, count);
				printf("Enter the number of the name to edit: ");
				
				int editName;
				scanf("%d", &editName);
						
				if (editName >= 1 && editName <= count) {
					printf("Enter the new name: ");
					scanf("%s", newName);
					strcpy(names[editName - 1], newName);
					printf("Name edited !!!");
				} else {
				printf("Invalid selection.\n");
				}
			}
			break;
		
		case 3:
			{
				displayNames(names, count);
				printf("Enter the number of the name to delete: ");

				int deleteName;
				scanf("%d", &deleteName);

				if (deleteName >= 1 && deleteName <= count) {
					for (int i = deleteName - 1; i < count - 1; i++) {
						strcpy(names[i], names[i + 1]);
					}
					count--;
					printf("Name deleted !!!");
				} else {
					printf("Invalid selection.\n");
				}

			}
			break;
		
		case 4:	
			{
				printf("This is the list of the recorded names: \n");
				displayNames(names,count);	

			}
			break;
		
		case 5:
			{
				return 0;
			}
			
		default:
			printf("Invalid choice. Please try again. \n");
		}
	}
	return 0;
}
