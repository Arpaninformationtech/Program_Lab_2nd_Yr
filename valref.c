// to illustrate the diff bw pass by value and pass by reference 
#include <stdio.h>

void swap(int a,int b){

  int temp=a;
  a=b;
  b=temp;
}

void ref(int *a,int *b){
  int temp =*a;
  *a=*b;
  *b=temp;
}

int main()
{
int a,b;
printf("Enter the value of a and b\n");
scanf("%d%d",&a,&b);
swap(a,b);
printf("the swap call by value a=%d & b=%d\n",a,b);
ref(&a,&b);
printf("the sum call by reference a= %d & b= %d\n",a,b);

return 0;
}