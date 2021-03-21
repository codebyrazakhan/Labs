// Online C compiler to run C program online  
#include<stdio.h>
#include<string.h>

#define SOME_SIZE 5    //how many names you need to store
int i, choice=1, count=0;
char * s;
char *names[SOME_SIZE];

void insert()
{
if(count < SOME_SIZE) //if names array has room for new string
   {
       fflush(stdin);
       printf("\nEnter name:");
       scanf("%c", &s);
       gets(s);// store name in s
       names[count] = malloc( strlen(s)+1 );
       if(!names[i])
           printf("Failed ");
     strcpy(names[i],s);// store name in array
       count++;
   }
   else
       printf("\n*** !!! List is full.. ");
   display();
}
void delete()
{
   if(count==0)
   {
       printf("\n** List is Empty");
       return;
   }
   display();
   fflush(stdin);
   printf("\nEnter name to delete:");
   gets(s);// store name in s

   for(i = 0; i < count; ++i)
{
       //printf("\nchecking %s %u", names[i], names[i] );
       if(strcmp(names[i], s)==0)   //if name is present in list
       {
           //printf("\n* Found at = %u\n", names[i] );
           printf("\n* deleted %s\n", s );
           strcpy(names[i],names[count-1]);// copy last name into name to delete
           free(names[count-1]);   //free last location
           names[count-1] = NULL;   //set NULL to last location
           count--;
           display();
           return;   //stop the loop
       }
   }
   if(i == count)//not found
       printf("\n Not found");
}

void display()
{
   if(count==0)
       printf("\n** List is Empty");

   for(i = 0; i < count; i++)
{
       if(names[i] != NULL)
           printf("\n%10s", names[i] );
}
printf("\n-------------");
}
int main()
{
s = malloc(20); // max size for each name set to 20
   while(choice!=4)
   {
       printf("\n1. Insert name");
       printf("\n2. Delete name");
       printf("\n3. Print names");
       printf("\n4. Exit");
       printf("\nEnter your choice: ");
       scanf("%d", &choice);

       switch(choice)
       {
           case 1:
                   insert();
                   break;
           case 2:
                   delete();
                   break;
           case 3:
                   display();
                   break;
           case 4:
                   return 0;
           default:
                   printf("\nInvalid choice. Try again...");
                   break;
       }
   }
return 0;
}