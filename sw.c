//go back
#include <stdio.h>
#include<stdlib.h>
void goback(void);
void selrep(void);
void sw(void);
void main()
{
int c;
printf("1.GO BACK ARQ\n2.SELECTIVE REPEAT ARQ\n3.STOP AND WAIT\n4.EXIT\n");
printf("Enter your choice:\n");
scanf("%d",&c);
switch(c){
case 1:
goback();
break;
case 2:
selrep();
break;
case 3:
sw();
break;
case 4:
exit(0);
}
}
void goback(){
int i, windowsize, retransmit;
printf("Enter the window size: ");
scanf("%d", &windowsize);
for (i=1; i<=windowsize; i++) {
printf("frame%d is transmitted\n", i);
}
while (1) {
printf("Enter the frame that didn't receive ack: ");
scanf("%d", &retransmit);
if (retransmit != -1) {
for (i=retransmit; i<=windowsize; i++) {
printf("frame%d is retransmitted\n", i);
}
}
else {
break;
}
}
}
//selrep
void selrep(){
int i, windowsize, retransmit;
printf("Enter the window size: ");
scanf("%d", &windowsize);
for (i=1; i<=windowsize; i++) {
printf("frame%d is transmitted\n", i);
}
while (1) {
printf("Enter the frame that didn't receive ack: ");
scanf("%d", &retransmit);
if (retransmit != -1) {
printf("frame%d is retransmitted\n", retransmit);
}
else {
break;
}
}
}
//stop and wait
