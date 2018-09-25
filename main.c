#include "main.h"



typedef struct lookup
{
	void (*func1)(void);
	char name[10];
}table;	



void main()
{
	char input[10];
	
	printf("\n********************* Welcome******************************\n");

	while(1)
	{
		printf("\nTo invoke the help function, type \"help\"\n");
		printf("\nEnter your option:\n1. To allocate memory - \"allocate\"\n2. To free memory - \"free\"\n3. To display allocated memory - \"display\"");
		printf("\n4. To write memory - \"write\"\n5. To invert block \"invert\"\n6. To generate a pattern \"generate\"\n7. To Verify pattern \"verify\"");
		printf("\n8. To Exit \"exit\"\n");

		memset(input,0,sizeof(input));
		scanf("\n%s",input);

		if(strcmp(input,"exit")==0)
			exit(1);
	
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
		for(int i=0;(table_lookup[i].func1)!=NULL ; i++)
		{
			if(strcmp((table_lookup[i].name),(input))==0)
			{
				
				(table_lookup[i].func1)();
				break;

			}
		}
	}
}
			
	
	

	 



