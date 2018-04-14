#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LAENGE 16

//schreibt das 'zeichen' in alle Speicherzellen zwischen start und ende
void schreibeZeichen(char* start, char* end, char zeichen)
{
	if(start > end)
	{
		char* tmp = start;
		start = end;
		end = tmp;
	}
	while(start <= end)
	{
		*start = zeichen;
		start++;
	}
}

int main()
{
	char* stringArray[LAENGE];
	for(int i = 0; i < LAENGE; ++i)
	{
		int blockGroesse = (i+1)*8;
		stringArray[i] = malloc(blockGroesse * sizeof(char));
		strcpy(stringArray[i], "...");
		if(i == 0)
		{
			printf("Speicher (%3d Byte): %p\n", blockGroesse, stringArray[i]);
		}
		else
		{
			printf("Speicher (%3d Byte): %p (%ld Byte von vorigem Block entfernt)\n", blockGroesse, stringArray[i], stringArray[i]-stringArray[i-1]);
		}
	}
	
	char* start = stringArray[0];
	char* ende = stringArray[LAENGE-1] + LAENGE*8;
	
	schreibeZeichen(start, ende, '0');

	return 0;
}
