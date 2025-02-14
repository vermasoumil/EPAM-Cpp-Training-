#include<stdio.h>
int main()
{
    FILE* fptr;
//fptr=fopen("file.txt","r");
fptr=fopen("newfile.txt","w");
fputs("It is a great environment to work here\n",fptr);
fputs("C is the programming we are currently learning\n",fptr);

char data[1000];
if(fptr!=NULL)
{
   while( fgets(data,1000,fptr)){
    printf("File open successful");
   printf("%s",data);
   }
}
else{
    printf("File open is unsuccessful");
}
fclose(fptr);
    return 0;
}
