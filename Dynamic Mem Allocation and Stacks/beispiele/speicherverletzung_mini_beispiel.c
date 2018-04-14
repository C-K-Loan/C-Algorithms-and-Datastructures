int i = 12;
char* string = malloc(i);
string[i+1] = ~string[i+1];
free(string);

