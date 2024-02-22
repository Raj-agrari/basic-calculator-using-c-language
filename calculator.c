#include <stdio.h>

int main() {
    char op;
    int a,b;
    printf("enter the operand,'+','-','*','/'\n");
    scanf("%c", &op);
    printf("enters the numbers:");
    scanf("%d %d",&a,&b);

switch (op) {
case '+':
printf("%d + %d = %d", a , b ,a+b);
break;
case '-':
printf("%d - %d = %d", a , b ,a-b);
break;
case '*':
printf("%d * %d = %d", a , b ,a*b);
break;
case '/':
printf("%d / %d = %d", a , b ,a/b);
break;
default:
printf("invalid operand");
}
return 0;
}