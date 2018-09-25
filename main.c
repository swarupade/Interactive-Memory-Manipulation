



// Header files
#include "main.h"


//creating a structure for lookup table
typedef struct lookup
{
	void (*func1)(void);
	char name[10];
}table;	


// main function
int  main()
{
	char input[10];//for the user input
	
	printf("\n********************* Welcome******************************\n");


	printf("\nTo invoke the help function, type \"help\"\n");

	while(1)
	{
		printf("\nEnter your option:\n1. To allocate memory - \"allocate\"\n2. To free memory - \"free\"\n3. To display allocated memory - \"display\"");
		printf("\n4. To write memory - \"write\"\n5. To invert block \"invert\"\n6. To generate a pattern \"generate\"\n7. To Verify pattern \"verify\"");
		printf("\n8. To Exit \"exit\"\n");

		//resetting the input variable
		memset(input,0,sizeof(input));
		scanf("\n%s",input);

		//to exit from the program
		if(strcmp(input,"exit")==0)
			exit(1);
	
		//look up table
		table table_lookup[] =
		{
			{help,"help"},
			{free_memory,"free"},
			{allocate,"allocate"},
			{display,"display"},
			{invert,"invert"},
			{write_memory,"write"},
			{generate,"generate"},
			{verify,"verify"},
			{NULL," "}
		};

		uint32_t flag = 0;//used to set when user enters an invalid command
		for(int i=0;(table_lookup[i].func1)!=NULL ; i++)
		{
			//comparing the user option in the lookup table
			if(strcmp((table_lookup[i].name),(input))==0)
			{
				//calling the function
				(table_lookup[i].func1)();
				flag = 1;//sets 1 if match is found in lookup table
				break;

			}
		}
		if(flag == 0)//enters if the user entered an invalid command
		      printf("\nYou have entered an invalid command\nPlease type \"help\" for help\n");

	}
	return 0;
}
			
	
	

	 



