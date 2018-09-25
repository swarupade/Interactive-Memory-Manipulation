#include<stdio.h>
#include<string.h>



//typedef void  (*func_ptr) (void);

void help(void);

typedef struct lookup
{
	void *func_ptr;
	char name[10];
}table;	


void help()
{
	printf("\n Entered help function\n");
}

int main()
{
	char input[10];
	
	printf("\n********************* Welcome******************************\n");
	printf("\n To invoke the help function, type \"help\"\n");

	printf("\nEnter your option:\n1. To allocate memory - \"allocate\"\n2. To free memory - \"free\"\n3. To display allocated memory - \"display\"\
			\n4. To write memory - \"write\"\n5. To invert block \"invert\"\n6. To generate a pattern \"generate\"\n 7. To Verify pattern \"verify\"\n\
			8. To Exit \"exit\"\n");

	scanf("\n%s",input);

	
	table table_lookup[] =
	{
		{&help,"help"}
	//	{&free,"free"},
	//	{allocate,"allocate"},
	//	{display,"display"},
	//	{invert,"invert"},
	//	{exit,"exit"}
	};

	int n = sizeof(table_lookup)/sizeof(*table_lookup);
	for(int i =0; i<n;i++)
	{
		printf("\n input  %s \n",input);
		printf("\n i = %s",table_lookup[i].name);
		if(strcmp((table_lookup[i].name),(input))==0)
		{
			printf("\n entered if\n");
			(table_lookup[i].func_ptr)();
			

		}
	}
	return 0;
}
			
	
	

	 



