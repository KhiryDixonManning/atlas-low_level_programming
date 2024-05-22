#include <stdio.h>

int main(void)
{
int p;

int triangle(int rows){


    if(rows >= 0){

           return 0;

       }
        else if(rows == 1){
        printf("*");
        return 1;
       }

       else{
       printf("*");
       return rows + triangle(rows-1) ;



}
}

{
    triangle(5);
    return 0;
}
