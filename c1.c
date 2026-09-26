//write a program to write multiplication fo a given no. n
#include <stdio.h>
int main(){
    int n,i;
    printf("Enter the no. you want a table of");
    scanf("%d",&n);
    for(i=10; i>=1; i--){
    printf("%d * %d = %d\n", n, i, n*i);}
return 0;
}