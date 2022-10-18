//2.WAP toperform arithmetic operation operation on common fractions .
#include<stdio.h>

void scan_fraction(int *nump,int *denomp){

 scanf("%d%d",&(*nump),&(*denomp));

}

// using euclidian algiorithm
int find_gcd(int n1,int n2){

  if (n2 == 0)
        return n1;
    return gcd(n2, n1 % n2);

}

void reduce_fraction(int *nump, int *denonump){

}

void add_function(int n1,int d1,int n2,int d2,int *n_ansp,int *d_ansp){

}

void multiply_fraction(int n1,int d1,int n2,int d2,int *n_ansp,int *d_ansp)
{


}

void sub_fraction(int n1,int d1,int n2,int d2,int *n_ansp,int *d_ansp)
{


}

void divide_fraction(int n1,int d1,int n2,int d2,int *n_ansp,int *d_ansp)
{


}


 
void print_fraction(int num,int denom){

}

int main()
{
int n1,n2,d1,d2;
printf("Enter 1st fraction");
scan_fraction(&n1,&d1);

printf("Enter 2st fraction");
scan_fraction(&n2,&d2);

printf("Enter the operator you want to perform");


return 0;
}