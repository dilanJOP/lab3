#include<stdio.h>
void main()
{
int in,out,store=0,bsize,n;
printf("enter bucket size,outgoing rate and no. of inputs\n");	
scanf("%d%d%d",&bsize,&out,&n);
while(n!=0)
{
printf("Enter the incoming packet size:\n");
scanf("%d",&in);
printf("Incoming packet:%d\n",in);
if (in<=(bsize-store))
{
store=store+in;
printf("Bucket Buffer size %d out of %d",store,bsize);
}
else
{
printf("Dropped %d no.of packets\n",in-(bsize-store));
printf("Bucket Buffer size %d out of %d",store,bsize);
store=bsize;
}
store=store-out;
printf("After outgoing %d packets left out of %d in buffer \n",store,bsize);
n--;
}
}


