#include <stdio.h>
int main()
{
    char o;
    int a,b,i,c=0;
     for(i=0;;i++){
printf("choose the operation\n");
printf("for division enter d\n");
printf("for multiplication enter m\n");
printf("for addition enter a\n");
printf("for subtraction enter s\n");
scanf("\n%c" , &o);

if(o== 'd'){
  printf("enter first number\n");
scanf("\n%d" , &a);
printf("enter another number\n");
scanf("\n%d" , &b);
printf("the result is %d.\n\n", a/b);
continue;
}
else if(o== 'm'){
   printf("enter first number\n");
scanf("\n%d" , &a);
printf("enter another number\n");
scanf("\n%d" , &b);
printf("the result is %d.\n\n",a*b);
continue;
}
else if(o== 'a'){
   printf("enter first number\n");
scanf("\n%d" , &a);
printf("enter another number\n");
scanf("\n%d" , &b);
printf("enter another number\n");
scanf("\n%d" , &c);
printf("the result is %d.\n\n",a+b+c);
continue;
}
else if(o== 's'){
   printf("enter first number\n");
scanf("\n%d" , &a);
printf("enter another number\n");
scanf("\n%d" , &b);
printf("the result is %d.\n\n",a-b);
continue;
}
else{
  printf("input is wrong.\n");
  continue;
 }
return 0;


          }        
}
