#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
int n=0,odd,even=0;
pid_t q,p;
printf("Enter Limit of Numbers:");
scanf("%d",&n);
int array[n];
for(int i=0;i<n;i++)
{
   array[i]=0;
   printf("Enter Numbers: ");
   scanf("%d",&array[i]);
   
}
q=fork();
if(q == 0)
{
         printf("odd of child1: %d",odd);
         printf("Child 1\n");
         printf("Child 1 id : %d\n",getpid());
         printf("parent of child 1 is %d\n",getppid());
         printf("%d\n",q);
           for(int i=0;i<n;i++)
           {
              if(array[i] % 2 == 0)
               {
                 even++;
               }
               else
               {
                  array[i]*=2;
               }
               printf("array *2 = %d\n",array[i]);
             }
        printf("even : %d\n",even);
for(int i=0;i<n;i++)
           {
               printf("array %d\n",array[i]);
             }

}
else
{
p=fork();
if(p == 0)
{
         printf("odd of child2: %d",odd);
         printf("Child 2\n");
         printf("Child 2 id : %d\n",getpid());
         printf("parent of child 2 is %d\n",getppid());
         printf("%d\n",q);
              if(odd == 0)
               {
                 printf("NO odd number");
               }
               else if(odd > 0)
               { 
                  printf("Some Odd numbers");
               }
for(int i=0;i<n;i++)
           {
               printf("array %d\n",array[i]);
             }

}
else
{
printf("parent is %d\n",getpid());
         for(int i=0;i<n;i++)
         {
          if(array[i]%2 != 0) 
           {
              odd++;
           }
          }
        printf("odd : %d\n",odd);
}
}
}
