//#include <stdio.h>
//int main()
//{
//    FILE *file =fopen("example.txt","r+");
 //   if(file == NULL){
  //    printf("ERROR OPENING FILE FOR WRITING.\n");
 //       return 1;
  //  }
 //   fseek(file,0,SEEK_SET);
 //  fprintf(file,"UPDATED CONTENT: HELLO,UPDATED WORLD!\n");
//    fclose(file);
 //   printf("DATA UPDATED IN THE FILE SUCCESSFULLY.\n");
 //   return 0;
//}
#include<stdio.h>
int main()
{
    FILE *file;
    char type[10];
    float amount;
    file=fopen("bank.txt","a");
    if(file==NULL)
    {
        printf("error opening file!");
        return 1;
    }
    printf("credit or debit");
    scanf("%s",&type);
    printf("enter amount:");
    scanf("%f",&amount);
     fprintf(file,"%s:%2f\n",type,amount);
     fclose(file);
     printf("transaction success.\n");
     return 0;
}

