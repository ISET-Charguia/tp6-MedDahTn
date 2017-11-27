#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 void conjuguer( char *ve );
 void cpoy(char *x,char l);
int main()
{
    char *ch;
    ch=malloc(20);
    fgets(ch,20,stdin);
    conjuguer(ch);

}
void copy(char *x,char *l){
int i;
for(i=0;i<strlen(l)-3;i++){
    x[i]=l[i];
}

}
void conjuguer(char *ve){
    char *k;
    k=malloc(strlen(ve));
   copy(k,ve);
    if((ve[strlen(ve)-3]!='e')&&(ve[strlen(ve)-2]!='r'))
        printf("erreur");
        else
        printf("\nje %se\ntu %ses \nil %se \nnous %sons \nvous %s ez \nils %s ent",k,k,k,k,k,k);
}
