#include<stdio.h>
void main(){
    FILE *fp1 , *fp2;
    char ch;
    fp1 =fopen("Datawrite","r");
    fp2 = fopen("Dataread","w");
    if(fp1 == NULL)
    {
        exit(0);
    }
    if(fp2 == NULL)
    {
        exit(0);
    }
    ch = fgetc(fp1);
    while(ch != EOF)
    {
        fputc(ch,fp2);
        ch = fgetc(fp1);
    }
    printf("Contents Copied..");

    fclose (fp1);
}
