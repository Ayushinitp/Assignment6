//1
// #include <stdio.h>
// int main(){
//     int a;
//     printf("Enter a number : ");
//     scanf("%d",&a);
//     if(a>99 && a<1000)
//     printf("%d is a three digit number",a);
//     else
//     printf("%d is not a 3 digit number ",a);
//     return 0;
// }




//3
// #include <stdio.h>
// int main(){
//     int a,b,c,d,e;
//     printf("Enter marks of 5 subjects respectively : ");
//     scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
//     if(a>=33 && b>=33 && c>=33 && d>=33 && e>=33)
//     printf("Passed!!!!!!!!");
//     else
//     printf("Failed!!!!!!!!!!!!!!!!!!");
//     return 0;

// }




//4
#include <stdio.h>
 int main(){
    char x;
    printf("Enter a character : ");
    scanf("%c",&x);
    if(x>=65 && x<=90)
    printf("Upper case");
    else if(x>=97 && x<=122)
    printf("Lower case");
    else
    printf("Invalid entry");
    return 0;
    
 }