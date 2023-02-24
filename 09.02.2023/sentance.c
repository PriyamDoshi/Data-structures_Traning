#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>


int main ()
{
 char *art[5] = {"the", "a", "one","some","any"};
 char *noun[5] = {"boy","girl","dog","town","car"};
 char *varb[5] = {"drove","jumped","ran","walked","skipped"};
 char *pre[5] = {"to","from","over","under","on"};
srand(time(NULL));

char sentance[80];

 for(int i = 1; i <= 20 ; i++ ){
     
      art[rand()%5];
     
      sprintf( sentance, "%s %s %s %s %s %s. \n ",art[rand()%5],noun[rand()%5] ,varb[rand()%5],pre[rand()%5],art[rand()%5],noun[rand()%5] );
      sentance[0]=toupper(sentance[0]);
      puts(sentance);
     
 }
 return 0;
}


