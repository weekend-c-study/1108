#include<stdio.h>
int main()
{
	int arr[100][100];
	//키보드로부터 정수하나 입력받자

	int n;
	scanf_s("%d", &n);
	//n*n 구조에 1부터 순차적으로 데이터 삽입
	int c = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			//arr[i][j] = j + 1 + 3 * i;
			arr[i][j] = c++;
		}
	}


	//출력
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%2d ", arr[i][j]);
		}
		printf("\n");//줄바꿈
	}

	return 0;
}

/*
#include<stdio.h>
#define n 2
#define 메인 main
#define 반복해라 for

int 메인()
{
	
	//배열정의(선언)시에 인덱스번호는 상수만 허용
	int arr[n][3] = {0};

	//출력문
	반복해라(int i = 0; i < 2; i++) {
		반복해라(int j = 0; j < 3; j++)
		{
			printf("%d  ", arr[i][j]);
		}
		puts("");
	}

	return 0;
}
//*/

/*
#include<stdio.h>
int main() 
{
	int arr[2][3] = {0};
	//입력해주세요
	//arr[0][0] = 1;// 0+1
	//arr[0][1] = 2;// 1+1
	//arr[0][2] = 3;// 2+1
	int c = 1;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			//arr[i][j] = j + 1 + 3 * i;
			arr[i][j] = c++;
		}
	}
	//arr[1][0] = 4;// 0+1+3
	//arr[1][1] = 5;// 1+1+3
	//arr[1][2] = 6;// 2+1+3
	//for (int j = 0; j < 3; j++) {
	//	arr[1][j] = j + 1 +3*1;
	//}



	//출력문
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++)
		{
			printf("%d  ", arr[i][j]);
		}
		puts("");
	}

	return 0;

}
//*/


/*
#include<stdio.h>
int main()
{
	int arr[2][3] = { 1,2,3,4,5,6 };
	//2차원배열은 1차원배열의 집합입니다.
	//1차원배열이름을 만들어줍니다. arr[0], arr[1] 

	//arr[0][0]=1, arr[0][1]=2, arr[0][2]=3
	//arr[1][0]=4, arr[1][1]=5, arr[1][2]=6

	//printf("%d\n", arr[0][0]);
	//printf("%d\n", arr[0][1]);
	//printf("%d\n", arr[0][2]);
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++)
		{
			printf("%d  ", arr[i][j]);
		}
		puts("");
	}


	//printf("%d\n", arr[1][0]);
	//printf("%d\n", arr[1][1]);
	//printf("%d\n", arr[1][2]);



	return 0;
}
//*/

/*
#include<stdio.h>
int main()
{
	//다차원배열 2차원배열이상...
	int arr[2][3] = { {1,2,3}, {4,5,6} };
	//2차원배열 (정수3개짜리1차원배열 * 2개)
	//2행3열 배열입니다.
	//int arr1[2][3][4];//
	printf("tot size: %d byte\n", sizeof(arr));//int(4byte)*2*3=24byte
	//

	int arr2[2][3] = { 1,2,3,4,5,6};
	int arr3[2][3] = { 1,2,3,4,5};

	int ar[] = {10,20,30};
	int arr4[][2] = { 1,2,3,4,5,6 };
	//2차원배열을 표현할때 꼭 필요한정보중 하나는 열개의개수
	int trr[][2][2] = 
		{ 
			{ {1,2}, {4,5} }, 
			{ {1,2}, {4,5} } 
		};
	int trr2[][2][2] = { 1,2,3,4,5,6,7,8 };

	return 0;
}
//*/

/*
#include<stdio.h>
int main() 
{
	int arr[2][3];
	//int** dptr=arr; //잘못된 표현
	int(*p)[3]=arr; //2차원배열의 포인터형
	//파라미터에서 표현만 가능 int a[][3]

	int a[3];
	int* ptr = a;

	return 0;
}
//*/

/*
#include<stdio.h>
int main()
{
	int n1 = 10, n2 = 20, n3 = 30;
	int a[] = { n1,n2,n3 };
	// int배열
	// a== &a[0]

	int* ptr1 = &n1;
	int* ptr2 = &n2;
	int* ptr3 = &n3;

	//int* arr[] = {ptr1, ptr2, ptr3};
	int* arr[] = { &n1, &n2, &n3 };

	// int포인터 배열


	// ptr1 == arr[0]  : 
	int** tptr1 = &ptr1;
	int** tptr2 = &arr[0];
	//

	printf("%p %p", arr, &arr[0]);

	// int*포인터 배열이름은 int**포인터를 저장하고있습니다.
	//싱글포인터 배열의 포인터 타입은?
	//더블포인터입니다.
	int** ppp = arr;


	for (int i = 0; i < 3; i++) {
		printf("%d %d %d\n", *(arr[i]), *(*(arr + i)), *(*(ppp+i)));
	}


	return 0;
}
//*/

/*
#include<stdio.h>
int main()
{

	int n = 10;

	int* ptr=&n;
	
	int** dptr= &ptr;

	int*** tptr= &dptr;

	printf("%d\n", *ptr);
	printf("%d\n", **dptr);
	printf("%d\n", ***tptr);

	return 0;
}

//*/

/*
#include<stdio.h>
int main()
{
	int n1 = 10, n2 = 20, n3 = 30;
	//int arr1[3] = {n1, n2, n3};
	int* arr[3] = { &n1, &n2, &n3 };

	//int* ptr1=&n1;
	int* ptr=arr[0];//==&n1
	printf("%p\n", arr[0]); //&n1;
	printf("%d\n", *arr[0]); //&n1;
	//int* dptr=&arr[0];//잘못된표현


	return 0;
}
//*/

/*
//#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() 
{
	//char* str;//포인터변수
	char str[5];//
	//배열이름자체가 첫번째메모리 주소를 저장하고있다
	//배열이름은 포인터
	//scanf("%s", str);
	scanf_s("%s", str, sizeof(str));

	printf("%s\n", str);

	return 0;
}
//*/

/*
#include<stdio.h>
int main()
{
	char arr[] = {'a', 'b', 'c'};//문자배열
	char arr2[] = { 'a', 'b', 'c' ,'\0'};//문자열
	char arr3[] = "abc";//변수형태문자열

	char* str = arr3;

	char* str2 = "abc";//상수형태문자열

	printf("%s\n", str);

	arr3[0] = 'A';
	printf("%s\n", arr3);

	str2[1] = 'B';//컴파일러마다 차이가 존재한다.
	//printf("%s\n", str2);

	return 0;
}
//*/

/*
#include<stdio.h>
void display(double a[])
{
	//double a[] 배열이 아닙니다.
	//파라미터에서 허용하는 배열의 포인터타입의 표현식이다.
	// double* a;
	//int size = sizeof(a)/sizeof(double); // 4/8
	//printf("a size : %d\n", size); // 0
	for (int i = 0; i < 3; i++) 
	{
		printf("%.2f\n", a[i]);
	}
}

int main()
{
	double ar[] = { 1.1, 2.2, 3.3 };
	int size = sizeof(ar) / sizeof(double);//24/8
	printf("ar size : %d\n", size);//3
	display(ar);

	return 0;
}

//*/


/*
#include<stdio.h>

void disp(int* ar, int t);
//예외적으로 함수파라미터 변수는
//포인터형 선언 int* ar ==> int ar[]
void disp2(int ar[], int t) {
	for (int i = 0; i < t; i++)
	{
		printf("%d %d \n", *(ar + i), ar[i]);
	}
}
int main()
{
	int arr[] = { 10,20,30,40,50 };
	int size = sizeof(arr) / sizeof(int);
	disp(arr, size);
	return 0;
}

void disp(int* ar, int t) 
{
	for (int i = 0; i < t; i++)
	{
		printf("%d %d \n", *(ar + i), ar[i]);
	}
}
//*/

/*
#include<stdio.h>
int main()
{
	int arr[3] = { 10,20,30 };
	printf("%p \n", arr + 0);
	//포인터연산시 단위단 (int타입인경우)4byte만큰 변경
	printf("%p \n", arr + 1);
	
	printf("%p \n", arr + 2);

	printf("%d %d \n", *(arr + 0) , arr[0]);
	printf("%d %d \n", *(arr + 1) , arr[1]);
	printf("%d %d \n", *(arr + 2) , arr[2]);

	return 0;
}
//*/

/*
#include<stdio.h>
int main() 
{
	int n=10;
	int* ptr= &n;
	char c;
	char* pc = &c;
	double d;
	double* pd= &d;
	//포인터는 주소체계가 int로 만들어졌다.
	//&변수이름 : 변수의 시작주소(포인터)
	//포인터를 사용하여 메모리에 접근가능
	//지역상관없이 접근
	printf("n:%d , *ptr: %d\n", n, *ptr);

	void* vPtr=&n;
	//모든 메모리주소(포인터) 저장가능
	//바로사용할수는 없다...읽거나 저장할 사이즈 정보가없다.
	//캐스팅을 통해서 사용가능
	printf("n:%d , *vPtr: %d\n", n, *((int*)vPtr));

	return 0;
}
//*/

/*
#include<stdio.h>
//재귀함수
void recursive(int num) 
{
	//탈출(함수종료)조건
	if (num <= 0) {
		return;// 함수종료
	}
	printf("%d\n", num);
	recursive(num-1);
}

int main()
{
	recursive(3);
	puts("--------");
	int i = 3;
	while (1) 
	{
		if (i <= 0) 
		{
			break;
		}
		printf("%d\n", i);
		i--;
	}
	return 0;
}
//*/


/*
#include<stdio.h>
void inc() 
{
	//프로그램 시작시 만들어져서..끝낼때까지 유지
	//접근은 제한 inc()함수 내부접근가능
	static int num1;
	int num2 = 0;
	num1++; num2++;
	printf("%d %d\n", num1, num2);
}
int main() 
{
	inc();
	inc();
	inc();
	//num1++; //static 
	return 0;
}
//*/

/*
#include<stdio.h>
int a=10;
int main() 
{
	int a = 100;
	printf("%d\n", a);
	//이름이 똑같은 변수가 존재하면
	//내부 : 제일 가까운곳에 선언된 변수를 찾는다
	//없으면 윗영역에서 찾습니다.
	return 0;
}
void disp() 
{
	int a = 200;
}

//*/

/*
#include<stdio.h>
void add(int val);//함수의선언
int n;
//전역변수
//default 초기화(0)
//프로그램 전체영역에서 접근가능

int main() 
{
	//int num;//지역변수
	printf("%d\n", n);
	add(10);//함수의 호출
	printf("%d\n", n);
	n++;
	printf("%d\n", n);
	return 0;
}
//함수의 정의
void add(int val) 
{
	n += val;// n = n+val;
}
//*/

