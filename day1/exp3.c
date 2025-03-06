#include<stdio.h>
#define MAX_USERS 2
struct user{
    int id;
    int balance;
};
int main()
{
 struct user users[MAX_USERS];
for(int i=0;i<MAX_USERS;i++)
{
   printf("enter the id:");
   scanf("%d",&users[i].id);
   printf("\nenter the balance:");
   scanf("%d",&users[i].balance);
}
 for(int i=0;i< MAX_USERS;i++){
    printf("userid:%d\n",users[i].id);
     printf("balance:%d\n",users[i].balance);
 }
 int find;
 printf("enter the userid to check the balance:");
 scanf("%d",&find);
 for(int i=0;i<MAX_USERS;i++){
    if(find==users[i].id){
        printf("balance of user %d:%d",find,users[i].balance);

    }
 }


}
