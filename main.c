#include "main.h" 


int main()
{
	char input[10];


	
	printf("\n********************* Welcome******************************\n");
	while(1)
	{
		printf("\nTo invoke the help function, type \"help\"\n");
		printf("\nEnter your option:\n1. To allocate memory - \"allocate\"\n2. To free memory - \"free\"\n3. To display allocated memory - \"display\"");
		printf("\n4. To write memory - \"write\"\n5. To invert block \"invert\"\n6. To generate a pattern \"generate\"\n7. To Verify pattern \"verify\"");
		printf("\n8. To Exit \"exit\"\n");

		scanf("\n%s",input);

       		if(strcmp(input, "help")==0)
	       		help();
        	else if (strcmp(input,"allocate")==0)
               		allocate();
        	else if (strcmp(input, "free")==0)
               		free_memory();
        	else if(strcmp(input,"display")==0)
               		display();
		else if(strcmp(input,"invert")==0)
			invert();
        	else if(strcmp(input,"generate")==0)
               		generate();
       		else if(strcmp(input,"verify")==0)
               		verify();
       		else if(strcmp(input,"exit")==0)
             		exit(1);
       		else
       	     		printf("\n-----> You have entered an invalid command\n-----> Please type help to get started\n");
	}
}	

	      
      
	
	

	 



