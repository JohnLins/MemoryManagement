#include <stdio.h>



int tape[] = {};

int *ptr = tape;

void up(){
ptr += 1;
}

void down(){
    ptr -= 1;
}

void add(){
   *ptr += 1;
}

void sub(){
   *ptr -= 1;   
}

void out(){
   printf("%d\n", *ptr);
}

int main(){
up(); up(); add(); add(); sub(); out();
return 0;
}
