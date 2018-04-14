#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LAENGE 20

void schreibeZeichen(char* start, char* end, char zeichen)
{
	if(start > end)
	{
		char* tmp = start;
		start = end;
		end = tmp;
	}
	printf("beschreibe Speicher von %p bis %p mit %c..\n", start, end, zeichen);
	while(start <= end)
	{
		*(start++) = zeichen;
		start++;
	}
}

void smash_it(char* speicher_aufrufer){
	char speicher_hier[LAENGE];
	schreibeZeichen(speicher_aufrufer, speicher_hier, '\0');
	printf("Das 'Einführung in die Prorgammierung'-Team wünscht schöne Feiertage und einen guten Rutsch ins neue Jahr!\n");
}


int main(){
	char speicher_hier[LAENGE];
	printf("Nur die letzt genannte Aussage zählt!\n");
	smash_it(speicher_hier);
	printf("Das 'Einführung in die Prorgammierung'-Team wünscht schreckliche Feiertage und einen schlechten Rutsch ins neue Jahr!\n");
	return 0;
}
