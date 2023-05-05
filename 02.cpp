#include<stdio.h>
#include<string.h>
int a,b;
int *z=&a;//&a地址一般不该改变，但是加上const更有保证 
const int *x=&b;//const 静态常量，&b储存地址不可改变，但b的值可以改变 
int main()
{
	//int类型占四个bit，指针取首地址； 
	printf("sizeof(int)=%d\n\n",sizeof(int));
	a=1;b=10;
	printf("*z=%d,z=%d\n*x=%d,x=%d\n",*z,z,*x,x);
	printf("sizeof(*z)=%d,sizeof(z)=%d\n\n",sizeof(*z),sizeof(z));
	a=2;b=20;
	printf("*z=%d,z=%d\n*x=%d,x=%d\n",*z,z,*x,x);
	printf("sizeof(*x)=%d,sizeof(x)=%d\n\n",sizeof(*x),sizeof(x));
	return 0;
}
