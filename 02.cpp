#include<stdio.h>
#include<string.h>
int a,b;
int *z=&a;//&a��ַһ�㲻�øı䣬���Ǽ���const���б�֤ 
const int *x=&b;//const ��̬������&b�����ַ���ɸı䣬��b��ֵ���Ըı� 
int main()
{
	//int����ռ�ĸ�bit��ָ��ȡ�׵�ַ�� 
	printf("sizeof(int)=%d\n\n",sizeof(int));
	a=1;b=10;
	printf("*z=%d,z=%d\n*x=%d,x=%d\n",*z,z,*x,x);
	printf("sizeof(*z)=%d,sizeof(z)=%d\n\n",sizeof(*z),sizeof(z));
	a=2;b=20;
	printf("*z=%d,z=%d\n*x=%d,x=%d\n",*z,z,*x,x);
	printf("sizeof(*x)=%d,sizeof(x)=%d\n\n",sizeof(*x),sizeof(x));
	return 0;
}
