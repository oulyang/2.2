#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//int main()
//{
//	char arr[] = "abcdef"; 
//	//��������������һ��  '\0'��������,��ʵ�� a b c d e f \0
//	printf("%d\n", sizeof(arr)); // �����С 7*1=7
//	printf("%d\n", sizeof(arr+0)); //��Ԫ�ص�ַ 4/8
//	printf("%d\n", sizeof(*arr));//��Ԫ��       1
//	printf("%d\n", sizeof(arr[1]));//�ڶ���Ԫ��  1
//	printf("%d\n", sizeof(&arr));//�����ַ     4/8
//	printf("%d\n", sizeof(&arr+1));//�������������ĵ�ַ 4/8
//	printf("%d\n", sizeof(&arr[0]+1));// �ڶ���Ԫ�ص�ַ 4/8
//	return 0;
//}


//int main()
//{
//	char arr[] = "abcdef";
//	//��������������һ��  '\0'��������,��ʵ�� a b c d e f \0
//	printf("%d\n", strlen(arr)); //  6
//	printf("%d\n", strlen(arr + 0)); // 6
//	printf("%d\n", strlen(*arr));// err
//	printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//�������׵�ַ��ʼ6
//	printf("%d\n", strlen(&arr + 1));//���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));//  �ӵڶ���Ԫ�ؿ�ʼ5
//	return 0;
//}


//int main()
//{
//	char* p = "abcdef";
//	//�ѳ����ַ������ַ�a�ĵ�ַ����p��
//	printf("%d\n", sizeof(p)); // ����ָ�����p�Ĵ�С 4/8
//	printf("%d\n", sizeof(p + 1)); // p+1�õ��ַ�b�ĵ�ַ 4/8
//	printf("%d\n", sizeof(*p));//  ���ַ�a�Ĵ�С  1
//	printf("%d\n", sizeof(p[0]));// arr[0]==*(arr+0)   p[0]==*(p+0) �ַ�a�Ĵ�С  1
//	printf("%d\n", sizeof(&p));//  p�ĵ�ַ   4/8
//	printf("%d\n", sizeof(&p + 1));// ��ַ 4/8
//	printf("%d\n", sizeof(&p[0] + 1));//  �ַ�b�ĵ�ַ 4/8
//	return 0;
//}


//int main()
//{
//	char* p = "abcdef";
//	//�ѳ����ַ������ַ�a�ĵ�ַ����p��
//	printf("%d\n", strlen(p)); //   6
//	printf("%d\n", strlen(p + 1)); //   5
//	printf("%d\n", strlen(*p));//  err
//	printf("%d\n", strlen(p[0]));// err
//	printf("%d\n", strlen(&p));//  �ַ�a�ĵ�ַ��ȷ������Ϊ���ֵ
//	printf("%d\n", strlen(&p + 1));//   ���ֵ
//	printf("%d\n", strlen(&p[0] + 1));//   5
//	return 0; 
//}


//int main()
//{
//	int a[3][4] = { 0 }; 
//
//	printf("%d\n", sizeof(a)); // �����ܴ�С 3*4*4=48
//	printf("%d\n", sizeof(a[0][0])); // a[0][0]�Ĵ�С 4
//	printf("%d\n", sizeof(a[0]));//  ��һ�У�a[0]���飩�Ĵ�С 4*4=16
//	//a[0]�൱�ڵ�һ����Ϊһά�������������sizeof��arr[0]������������������sizeof�����У�������ǵ�һ�еĴ�С
//	printf("%d\n", sizeof(a[0]+1));//   a[0]��ʾ��һ�е�һ��Ԫ�صĵ�ַ��a[0]+1��ʾ��һ�еڶ���Ԫ�ص�ַ  4/8
//	printf("%d\n", sizeof(*(a[0]+1)));//  ��һ�еڶ���Ԫ��a[0][1]��С   4
//	printf("%d\n", sizeof(a + 1));//   �ڶ���a[1]�ĵ�ַ               4/8
//	//a�Ƕ�ά������������û��sizeof������������&������������a����Ԫ�ص�ַ
//	//���Ѷ�ά���鿴��һά����ʱ����ά�������Ԫ���ǵ�һ�С�
//	printf("%d\n", sizeof(*(a + 1)));//�ڶ��еĴ�С 16
//	printf("%d\n", sizeof(&a[0] + 1));//  �ڶ��еĵ�ַ          4/8
//	printf("%d\n", sizeof(*(&a[0] + 1))); //�ڶ��д�С  16
//	printf("%d\n", sizeof(*a));   //��һ�д�С  16
//	printf("%d\n", sizeof(a[3]));//  16
//	return 0;
//}


//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);//ptr ָ������ĩ
//	printf("%d,%d", *(a + 1), *(ptr - 1));  //ptr-1ָ������ĩ��ǰһ�� //2  5
//	return 0;
//}


//struct Test
//{
//	int num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sDa[4];
//}*p;
////����p��ֵΪ0x100000�����±��ʽ��ֵ�ֱ�Ϊ
////��֪Test���ͱ�����СΪ20�ֽ�
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//0x100000+20=0x00100014  
//	printf("%p\n", (unsigned long)p + 0x1);//1048576+1=1048577= 0x0010001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x00100000=4=0X00100004
//	return 0;
//}


//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);//ptr1ָ������ĩ
//	int* ptr2 = (int*)((int)a + 1);//ptr2ֻ�ƶ���һ���ֽڣ�ָ��
//	printf("%x,%x", ptr1[-1], *ptr2);// ptr1[-1]==*(ptr1-1)  4   0x02 00 00 00
//	//->01 ->00 00 00 02 00 00 00 03 00 00 00-> 04 00 00 00->
//	//a   ptr2								ptr1[-1]		ptr1
//	//�͵�ַ                                                 �ߵ�ַ(С�˴洢��
//	return 0;
//}


//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//���ű��ʽ ��ʵ����a[3][2]={1��3��5}
//	int* p;
//	p = a[0];//��һ����Ԫ�ص�ַ
//	printf("%d", p[0]); //1
//	return 0;
//}


//int main()
//{
//	int a[5][5];
//	int(*p)[4];//p��ָ�룬ָ�����飬������4��Ԫ�أ�ÿ��Ԫ������Ϊint
//	p = a;//p������int (*)[4]		a�ĵ�һ����5��intԪ�ص����鼴int (*)[5]
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//p[4]==*(p+4)  p[4][2]==*(*(p+4)+2)
//	//->[][][][][] [][][][][] [][][][][] [][][][#][] [][]->[*][][]   *=a[4][2]
//	//p
//	//  [][][][] [][][][] [][][][] [][][][] [][]->[#][] [][]->[*][][]    #=p[4][2]
//	//ָ��-ָ���Ԫ�ظ���=-4  
//	//-4�Ĳ���Ϊ1111 1111 1111 1111 1111 1111 1111 1100=ff ff ff fc 
//	return 0;
//}


//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10  5
//	return 0;
//
//	//[1][2][3][4][5] ->[6][7][8][9][10]->
//	//			      ptr2			   ptr1
//}


//int main()
//{
//	char* a[] = { "work","art","alibaba" };
//	char* *pa = a;
//	pa++;
//	printf("%s\n", *pa); // at 
//	return 0;
//	//->[w�ĵ�ַ]->[a�ĵ�ַ][a�ĵ�ַ]  a[]
//	//pa		 pa++
//}


//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//1 POINT
//	printf("%s\n", *--*++cpp+3);//2  ER
//	printf("%s\n", *cpp[-2]+3);//3 ST *cpp[-2]== * *(cpp-2)
//	printf("%s\n", cpp[-1][-1]+1);//4 EW cpp[-1][-1]==*(*(cpp-1)-1)
//	return 0;
//	//->[E�ĵ�ַ]->[N�ĵ�ַ]->[P�ĵ�ַ]->[F�ĵ�ַ]  c[char*]
//	//c			c+1			c+2			c+3
//	//->[c+3�ĵ�ַ]->[c+2�ĵ�ַ]->[c+1�ĵ�ַ(2.c�ĵ�ַ��][c�ĵ�ַ]		cp[char**]
//	//cpp		  1++cpp		2++cpp
//	//[cp����Ԫ�ص�ַ] cpp
//}