#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int *p;
    //p = (int *)malloc(sizeof(int));
    p = new int;
    *p = 40; 
    printf("%d\n", *p);
    //free(p);
    delete p;
    return 0;
}
/* 3 main problems with above - 1) no access to the memory space.
                                2) no access to the data.
                                3) memory space cannot be reused or reset.
                                4) 4 byte of space will be wasted.  */

