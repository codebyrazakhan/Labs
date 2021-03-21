 #include<stdio.h>
 #include<stdlib.h>

 int main(){
int m , n;
int random_number, num;
printf("Enter the lowest number of range : \n");
scanf("%d",&m);
printf("\nEnter the highest number of range : \n");
scanf("%d",&n);
printf("\nHow many random numbers you want to print : \n");
scanf("%d",&num);
printf("\n");
printf("The range of numbers is [%d], [%d] \n", m, n);
for( int i=1 ; i <= num ; i++ )
{
random_number =(rand()%(n-m+1))+m;
printf("%d\t", random_number);
}
printf("\n");
return 0;
}