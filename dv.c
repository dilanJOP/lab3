#include<stdio.h>
struct node{
unsigned dist[20];
unsigned from[20];
}rt[20];
void main()
{
int costmat[20][20];
int n,i,j,k,count=0;
printf("Enter the number of nodes:\n");
scanf("%d",&n);
printf("ENTER THE COST MATRIX:\n");
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  {
  scanf("%d",&costmat[i][j]);
  costmat[i][i]=0;
  rt[i].dist[j]=costmat[i][j];
  rt[i].from[j]=j;
  }
 }
 do
 {
 count=0;
 for(i=0;i<n;i++)
 {
 for(j=0;j<n;j++)
 {
 for(k=0;k<n;k++)
 {
 if(rt[i].dist[j]>costmat[i][k]+rt[k].dist[j])
 {
 rt[i].dist[j]=rt[i].dist[k]+rt[k].dist[j];
 rt[i].from[j]=k;
 count++;
 }
 }
 }
 }
 }while(count!=0);
 for(i=0;i<n;i++)
 {
 printf("\n\nFor Router %d\n",i+1);
 for(j=0;j<n;j++)
 {
 printf("\t\n node %d via %d  Distance %d",j+1,rt[i].from[j]+1,rt[i].dist[j]);
 }
 }
 printf("\n\n");
 }
  
