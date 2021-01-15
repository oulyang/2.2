#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//int main()
//{
//	char arr[] = "abcdef"; 
//	//！！！！隐藏了一个  '\0'！！！！,其实是 a b c d e f \0
//	printf("%d\n", sizeof(arr)); // 数组大小 7*1=7
//	printf("%d\n", sizeof(arr+0)); //首元素地址 4/8
//	printf("%d\n", sizeof(*arr));//首元素       1
//	printf("%d\n", sizeof(arr[1]));//第二个元素  1
//	printf("%d\n", sizeof(&arr));//数组地址     4/8
//	printf("%d\n", sizeof(&arr+1));//跳过整个数组后的地址 4/8
//	printf("%d\n", sizeof(&arr[0]+1));// 第二个元素地址 4/8
//	return 0;
//}


//int main()
//{
//	char arr[] = "abcdef";
//	//！！！！隐藏了一个  '\0'！！！！,其实是 a b c d e f \0
//	printf("%d\n", strlen(arr)); //  6
//	printf("%d\n", strlen(arr + 0)); // 6
//	printf("%d\n", strlen(*arr));// err
//	printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//从数组首地址开始6
//	printf("%d\n", strlen(&arr + 1));//随机值
//	printf("%d\n", strlen(&arr[0] + 1));//  从第二个元素开始5
//	return 0;
//}


//int main()
//{
//	char* p = "abcdef";
//	//把常量字符串首字符a的地址放入p中
//	printf("%d\n", sizeof(p)); // 计算指针变量p的大小 4/8
//	printf("%d\n", sizeof(p + 1)); // p+1得到字符b的地址 4/8
//	printf("%d\n", sizeof(*p));//  首字符a的大小  1
//	printf("%d\n", sizeof(p[0]));// arr[0]==*(arr+0)   p[0]==*(p+0) 字符a的大小  1
//	printf("%d\n", sizeof(&p));//  p的地址   4/8
//	printf("%d\n", sizeof(&p + 1));// 地址 4/8
//	printf("%d\n", sizeof(&p[0] + 1));//  字符b的地址 4/8
//	return 0;
//}


//int main()
//{
//	char* p = "abcdef";
//	//把常量字符串首字符a的地址放入p中
//	printf("%d\n", strlen(p)); //   6
//	printf("%d\n", strlen(p + 1)); //   5
//	printf("%d\n", strlen(*p));//  err
//	printf("%d\n", strlen(p[0]));// err
//	printf("%d\n", strlen(&p));//  字符a的地址不确定，故为随机值
//	printf("%d\n", strlen(&p + 1));//   随机值
//	printf("%d\n", strlen(&p[0] + 1));//   5
//	return 0; 
//}


//int main()
//{
//	int a[3][4] = { 0 }; 
//
//	printf("%d\n", sizeof(a)); // 数组总大小 3*4*4=48
//	printf("%d\n", sizeof(a[0][0])); // a[0][0]的大小 4
//	printf("%d\n", sizeof(a[0]));//  第一行（a[0]数组）的大小 4*4=16
//	//a[0]相当于第一行作为一维数组的数组名，sizeof（arr[0]）把数组名单独放在sizeof（）中，计算的是第一行的大小
//	printf("%d\n", sizeof(a[0]+1));//   a[0]表示第一行第一个元素的地址，a[0]+1表示第一行第二个元素地址  4/8
//	printf("%d\n", sizeof(*(a[0]+1)));//  第一行第二个元素a[0][1]大小   4
//	printf("%d\n", sizeof(a + 1));//   第二行a[1]的地址               4/8
//	//a是二维数组数组名，没有sizeof（数组名）或&数组名，所以a是首元素地址
//	//而把二维数组看成一维数组时，二维数组的首元素是第一行。
//	printf("%d\n", sizeof(*(a + 1)));//第二行的大小 16
//	printf("%d\n", sizeof(&a[0] + 1));//  第二行的地址          4/8
//	printf("%d\n", sizeof(*(&a[0] + 1))); //第二行大小  16
//	printf("%d\n", sizeof(*a));   //第一行大小  16
//	printf("%d\n", sizeof(a[3]));//  16
//	return 0;
//}


//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);//ptr 指向数组末
//	printf("%d,%d", *(a + 1), *(ptr - 1));  //ptr-1指向数组末的前一个 //2  5
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
////假设p的值为0x100000，如下表达式的值分别为
////已知Test类型变量大小为20字节
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
//	int* ptr1 = (int*)(&a + 1);//ptr1指向数组末
//	int* ptr2 = (int*)((int)a + 1);//ptr2只移动了一个字节，指向
//	printf("%x,%x", ptr1[-1], *ptr2);// ptr1[-1]==*(ptr1-1)  4   0x02 00 00 00
//	//->01 ->00 00 00 02 00 00 00 03 00 00 00-> 04 00 00 00->
//	//a   ptr2								ptr1[-1]		ptr1
//	//低地址                                                 高地址(小端存储）
//	return 0;
//}


//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//逗号表达式 ，实际上a[3][2]={1，3，5}
//	int* p;
//	p = a[0];//第一行首元素地址
//	printf("%d", p[0]); //1
//	return 0;
//}


//int main()
//{
//	int a[5][5];
//	int(*p)[4];//p是指针，指向数组，数组有4个元素，每个元素类型为int
//	p = a;//p的类型int (*)[4]		a的第一行是5个int元素的数组即int (*)[5]
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//p[4]==*(p+4)  p[4][2]==*(*(p+4)+2)
//	//->[][][][][] [][][][][] [][][][][] [][][][#][] [][]->[*][][]   *=a[4][2]
//	//p
//	//  [][][][] [][][][] [][][][] [][][][] [][]->[#][] [][]->[*][][]    #=p[4][2]
//	//指针-指针得元素个数=-4  
//	//-4的补码为1111 1111 1111 1111 1111 1111 1111 1100=ff ff ff fc 
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
//	//->[w的地址]->[a的地址][a的地址]  a[]
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
//	//->[E的地址]->[N的地址]->[P的地址]->[F的地址]  c[char*]
//	//c			c+1			c+2			c+3
//	//->[c+3的地址]->[c+2的地址]->[c+1的地址(2.c的地址）][c的地址]		cp[char**]
//	//cpp		  1++cpp		2++cpp
//	//[cp的首元素地址] cpp
//}