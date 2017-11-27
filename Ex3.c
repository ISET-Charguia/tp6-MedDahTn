#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *remplace(char *ch,char o,char n);
int main()
{
    char *ch,o,n;
    ch=malloc(50);
    fgets(ch,50,stdin);
    printf("taper taper ma cara old");
    scanf("%c %c",&o,&n);

   printf("%s",remplace(ch,o,n));
}
char *remplace(char *ch,char o,char n){
    char *k;
    int i;
    k=malloc(strlen(ch));
    for(i=0;i<strlen(ch);i++){

        if(ch[i]!=o)
            k[i]=ch[i];
        else k[i]=n;

    }
    return k;

}
