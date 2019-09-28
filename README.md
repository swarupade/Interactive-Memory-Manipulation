# PES-Project1

For the project 1, the program has been chopped down into different sub files namely allocate.c, display.c, free.c, generate.c, help.c, invert.c, verify.c, write.c and str_to_int.c
And each .c file has its declaratons in its corresponding .h file.

Make file is used to generate the executable.

For Extra credits, Unit testing of all functions is implemented using CUnit framework.

-----------------------------------------------------------------------------------------------
To execute the program,
>> make
>> ./project1

To clean the .o files,
>> make clean

To input the test cases for testing,
>> make test

To execute unit test file
>>make unit
>>./unit

To clean the unit test file executable
>> make uclean
-------------------------------------------------------------------------------------------------
Implemented functions:
---------------------

main.c
--------
- The main function dispatches and calls the commands based on the user inputs. Keeping in mind that the program can be extended for numerous other commands, lookup table and function pointers have been used for efficient dispatch of the commands.
- For every function, the parameters are inputted as a string and passed.

help.c 
-------
- This functions prints the content of file help.txt which has guidlines about using this program and how to inovke each and every function.
-Format of calling the function
>>help

allocate.c
-----------
- Inputs required:
	- No. of 32 bit blocks to be allocated

- Displays the starting address of the allocated block.
- Each block can hold 32 bit unsigned integer
- malloc is used for dynamically allocating a continous set of block
- Format of calling the function
>> allocate 
>>Parameter - ("no_of_blocks")


free.c
-------
- frees the previously allocated block. 
- It can be invoked after invoking allocate
- It is meaningless to invoke free before allocate.
- Format of calling the function
>>free

display.c
---------
- Inputs required:
	- Address of the block in which the data stored has to be display.
	  ( Address can be specified either as absolute hexadecimal value or interms of block number)
 	- Number of 32 bit words to display from the address given

- It displays the data in hexadecimal format
-Format of calling the function
>>display 
>>parameters - ("address_type" "no_of_block/absolute_address" "total_blocks_to_display")
             -address type must be either "abs" or "block"
             - abs address must be in hexadecimal format.
	     - block address input must be in integer format. The block number starts from 1.

Boundary checks implemented
- The absolute address can only be the start address of any block. If not, an error prompts.
- The block address range starts from 1. The maximum range should be less than or equal to the total blocks allocated.
- The total number of blocks to display should be within the allocated block range. If not, an error prompts.

write.c
-------
- Inputs required
	- Address of the block where the data has to be written
	  (Address can be specified either as absolute hexadecimal value or interms of block number)
	- Data

- The input data has to be in hexadecimal format

- allocate has to be invoked before invoking write

-Format of calling the function
>>write 
>> parameters - ("address_type" "no_of_block/abs_address" "data")
	      -address_type must be either "abs" or "block"
	      - abs address must be in hexadecimal format.
              - block address input must be in decimal format
	      - data must be in hexadecimal format

- The absolute address can only be the start address of any block. If not, an error prompts.
- The block address range starts from 1. The maximum range should be less than or equal to the total blocks allocated.

invert.c
---------
- Inputs required
	- Address of the block from which data has to be inverted
	- Number of block to invert from the address specified

- It calculates and displays the time taken to invert the data in the blocks specified.
- For inverting the memory content, the content is exored with the full range value of unsigned 32 bit integer value.

-Format of calling the function
>>invert
>> Parameters -  ("address_type" "block_number/abs_address" "total_blocks_to_invert")
		-address_type must be either "abs" or "block"
		- abs address must be in hexadecimal format.
                - block address input must be in decimal format
		- total_blocks_to_invert must be in decimal format

- The absolute address can only be the start address of any block. If not, an error prompts.
- The block address range starts from 1. The maximum range should be less than or equal to the total blocks allocated.


generate.c
----------
- Inputs required
	- address of the block where the pattern has to be stored
	  (address can be given either as abosulte hexadecimal value or interms of block number)
	- seed value of the pattern
	- length of the pattern

- It calculates and displays the time taken to generate the pattern.

- Formula used for pseudo random number generation is  (7 * prev. value) % 8191
- Random prime numbers such as 7 and 8191 are chosen.
- Pattern generated is unique for each seed value.

Reference : https://cdsmith.wordpress.com/2011/10/10/build-your-own-simple-random-numbers/

- The pattern generated will be the same each time for a specific seed value.

-Format of calling the function
>>generate
>> Parameters -  ("address_type" "block_number/abs_address" "seed_value" "Length_of_pattern")
		-address_type must be either "abs" or "block"
                - abs address must be in hexadecimal format.
                - block address input must be in decimal format. Block number starts from 1.
                - seed_value must be in decimal format
		- Length_of_pattern must be in decimal format

verify.c
--------
- Inputs required
	- address of the block where the pattern stored has to be verified
        	(address can be given either as abosulte hexadecimal value or interms of block number)
	- seed value of the pattern
	- length of the pattern

-Format of calling the function
>>verify
>> Parameters -  ("address_type" "block_number/abs_address" "seed_value" "Length_of_pattern")
                -address_type must be either "abs" or "block"
                - abs address must be in hexadecimal format.
                - block address input must be in decimal format. Block number starts from 1.
                - seed_value must be in decimal format
                - Length_of_pattern must be in decimal format


- It calculates and displays the time taken to verify the pattern stored in memory.

str_to_int.c
------------
- It is used for converting string to integer.
- It is invoked by other .c files when required for converting the input parameter from string to integer
