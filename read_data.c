#include <stdlib.h>
#include <stdio.h>


/*read a file*/
/*determine the size of what its reading*/

/*
"r" read (text file)
"w" write (text file)
atoi text to interger
atof text to float
*/

int read_data(FILE* data_file,float* data, int max_data)
{

char line[32];
int count=0;

while(fgets(line,sizeof line,data_file)!=NULL && count<max_data)
	{
		data[count]=atof(line);
		count++;
	}

return count;

}
