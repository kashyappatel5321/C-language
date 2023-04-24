#include<stdio.h>
#include<conio.h>
 
int main(){
int op,x=1,y=2,z=3,v=4;
int a,s;
printf("enter frist num:");
scanf("%d",&a);
printf("enter second num:");
scanf("%d",&s);
printf("put your epression from 1,2,3 or 4\n where (1 for + ,2 for - ,3 for * ,4 for /)\n");
scanf("%d",&op);
printf("your answer is:");
if(op == x)
{
   printf("%d",a+s);
}
else if(op == y)
{
    printf("%d",a-s);
}
else if(op == z){
    printf("%d",a*s);
}
else if(op == v){
    printf("%d",a/s);
}
else{
    printf("your expression is not in program.");
}
getch();

}