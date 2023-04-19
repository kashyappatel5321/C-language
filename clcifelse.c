#include<stdio.h>
#include<conio.h>
int main(){
float a,s;
char op;
printf("enter frist num:");
scanf("%f",&a);
printf("enter second num:");
scanf("%f",&s);
printf("choose needed expression:");
scanf("%c",&op);
if(op =='+'){
    printf("%f",a+s);
}else if(op =='-'){
    printf("%f",a-s);
}else{
    printf("your expression is not in program.");
}
return 0;
}