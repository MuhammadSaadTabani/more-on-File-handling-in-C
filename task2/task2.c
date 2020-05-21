#include <stdio.h>
#include <stdlib.h>

void main(void) {
	
	FILE *fptr= fopen("file.txt", "r");
    int nchar=0, nword=0, nline=0;
    int ch, in_word=0;

    while ((ch= getc(fptr)) != EOF) {
             nchar++;
         if (ch == '\n')
            nline++;
           if (in_word == 0) {
              if (!isspace(ch)) {
                 in_word = 1;
                 nword++;
              }
          }
        else if (isspace(ch))
                 in_word = 0;
     }

    printf("Characters: %d Words: %d Lines: %d\n",nchar, nword, nline);
	fclose(fptr);
}
