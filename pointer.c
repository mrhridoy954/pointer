// #include<stdio.h>
// int main()
// {
//     int x=10;
//     int *p;
//     printf("Value of x :%d\n",x);
//     p=&x;
//     *p=20;
//     printf("Value of x : %d\n",x);
//     x=15;
//     printf("Value of x :%d\n",x);
//     printf("Value sorted at location %p is %d\n", p, *p);
//     printf("Address of x: %p\n",&x);
//     printf("Value of p:%p \n",p);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int x=10,y;
//     int *p,*q;
//     p=&x;
//     y=*p;
//     *p=15;
//     *q=20;
//     printf("Value of x : %d\n",x);
//     printf("Value of y :%d\n",y);
//     printf("Value of *p: %d\n", *p);
//     printf("Value of *q: %d\n",*q);
//     return 0;
// }




//Null pointer
// #include<stdio.h>
// int main()
// {
//     int x=100;
//     int*p =NULL;
    
//     printf("Value of x: %d\n",x);
//     p=&x;
//     printf("Value of *P:%d\n",*p);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int*p =NULL;
    
//     p=&x;
//     printf("Value of *P:%d\n",*p);
//     return 0;
// }


//
//String pointer
// #include<stdio.h>
// int main()
// {
//     char s[]="Bangladesh";
//     char *p;
//     p=s;
//     printf("Name of our country:%s",p);


//        return 0;
// }


// #include<stdio.h>
// int main()
// {
//     char c1= 'A',c2='B',c3='C';
//     char *p1,*p2,*p3;
//     p3=&c3;
//     p2=&c2;
//     p1=&c1;
//     printf("%c,%c,%c\n",*p1,*p2,*p3);
//     return 0;
// }


// Pointer of pointer
// #include<stdio.h>
// int main()
// {
//     char c ='A';
//     char *p;
//     p=&c;
//     printf("Address of c : %p\n",p);
//     printf("Address of p : %p\n",&p);

//     return 0;
// }





#include<stdio.h>
int main()
{
    char c='A';
    char *p,**q;
    p=&c;
    q=&p;
    printf("Value of c : %c \n",c);
    printf("Value of c: %c\n",*p);
    printf("Value of c: %c",**q);
    return 0;
}


// #include<stdio.h>
// int main()
// {
//     char c='A';
//     char *p,**q;
//     p=&c;
//     q=&p;
//     **q='B';
//     printf("Value of c: %c\n",c);
//     printf("Value of c:%c\n",*p);
//     printf("Value of c: %c\n",**q);
//     return 0;
// }