#include<stdio.h>
void main()
{
 int i,j,k,a[10][10],b[10][10],c[10][10],p,q,n,m;
printf("enter the value of m & n : ");
scanf("%d%d",&m,&n);
printf("enter the value of p & q : ");
scanf("%d%d",&p,&q);
if(p=n)
{
  printf("enter the elements of 1st matrix :");
  for(i=0;i<m;i++)
   { 
     for(j=0;j<n;j++)
      { 
         scanf("%d",a[i][j]);
       }
}
printf("the first matrix is :");
 for(i=0;i<m;i++)
   { 
     for(j=0;j<n;j++)
      { 
         printf("%d",a[i][j]);
       }
printf("\n");
}
 