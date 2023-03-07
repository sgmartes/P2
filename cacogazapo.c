#include<stdio.h>
int main (){
    
    int original=1;
    int* p1=&original;
    int** p2=&p1;
    int*** p3=&p2;
    int**** p4=&p3;
    
    printf("val or = %d\n",original);
    printf("val p1 = %p\n",p1);
    printf("val p2 = %p\n",p2);
    printf("val p3 = %p\n",p3);
    printf("val p4 = %p\n",p4);
    
    printf("\n");

    printf("dir or = %p\n",&original);
    printf("dir p1 = %p\n",&p1);
    printf("dir p2 = %p\n",&p2);
    printf("dir p3 = %p\n",&p3);
    printf("dir p4 = %p\n",&p4);

    printf("\n");

    printf("val ****p4 = %d\n",****p4);
    printf("val ***p4 = %p\n",***p4);
    printf("val **p4 = %p\n",**p4);
    printf("val *p4 = %p\n",*p4);
    printf("val p4 = %p\n",p4);

    printf("\n");

    printf("dir ****p4 = %p\n",&****p4);
    printf("dir ***p4 = %p\n",&***p4);
    printf("dir **p4 = %p\n",&**p4);
    printf("dir *p4 = %p\n",&*p4);
    printf("dir p4 = %p\n",&p4);
}