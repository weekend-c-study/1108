#include<stdio.h>
int main()
{
	int arr[100][100];
	//Ű����κ��� �����ϳ� �Է¹���

	int n;
	scanf_s("%d", &n);
	//n*n ������ 1���� ���������� ������ ����
	int c = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			//arr[i][j] = j + 1 + 3 * i;
			arr[i][j] = c++;
		}
	}


	//���
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%2d ", arr[i][j]);
		}
		printf("\n");//�ٹٲ�
	}

	return 0;
}

/*
#include<stdio.h>
#define n 2
#define ���� main
#define �ݺ��ض� for

int ����()
{
	
	//�迭����(����)�ÿ� �ε�����ȣ�� ����� ���
	int arr[n][3] = {0};

	//��¹�
	�ݺ��ض�(int i = 0; i < 2; i++) {
		�ݺ��ض�(int j = 0; j < 3; j++)
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
	//�Է����ּ���
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



	//��¹�
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
	//2�����迭�� 1�����迭�� �����Դϴ�.
	//1�����迭�̸��� ������ݴϴ�. arr[0], arr[1] 

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
	//�������迭 2�����迭�̻�...
	int arr[2][3] = { {1,2,3}, {4,5,6} };
	//2�����迭 (����3��¥��1�����迭 * 2��)
	//2��3�� �迭�Դϴ�.
	//int arr1[2][3][4];//
	printf("tot size: %d byte\n", sizeof(arr));//int(4byte)*2*3=24byte
	//

	int arr2[2][3] = { 1,2,3,4,5,6};
	int arr3[2][3] = { 1,2,3,4,5};

	int ar[] = {10,20,30};
	int arr4[][2] = { 1,2,3,4,5,6 };
	//2�����迭�� ǥ���Ҷ� �� �ʿ��������� �ϳ��� �����ǰ���
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
	//int** dptr=arr; //�߸��� ǥ��
	int(*p)[3]=arr; //2�����迭�� ��������
	//�Ķ���Ϳ��� ǥ���� ���� int a[][3]

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
	// int�迭
	// a== &a[0]

	int* ptr1 = &n1;
	int* ptr2 = &n2;
	int* ptr3 = &n3;

	//int* arr[] = {ptr1, ptr2, ptr3};
	int* arr[] = { &n1, &n2, &n3 };

	// int������ �迭


	// ptr1 == arr[0]  : 
	int** tptr1 = &ptr1;
	int** tptr2 = &arr[0];
	//

	printf("%p %p", arr, &arr[0]);

	// int*������ �迭�̸��� int**�����͸� �����ϰ��ֽ��ϴ�.
	//�̱������� �迭�� ������ Ÿ����?
	//�����������Դϴ�.
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
	//int* dptr=&arr[0];//�߸���ǥ��


	return 0;
}
//*/

/*
//#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() 
{
	//char* str;//�����ͺ���
	char str[5];//
	//�迭�̸���ü�� ù��°�޸� �ּҸ� �����ϰ��ִ�
	//�迭�̸��� ������
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
	char arr[] = {'a', 'b', 'c'};//���ڹ迭
	char arr2[] = { 'a', 'b', 'c' ,'\0'};//���ڿ�
	char arr3[] = "abc";//�������¹��ڿ�

	char* str = arr3;

	char* str2 = "abc";//������¹��ڿ�

	printf("%s\n", str);

	arr3[0] = 'A';
	printf("%s\n", arr3);

	str2[1] = 'B';//�����Ϸ����� ���̰� �����Ѵ�.
	//printf("%s\n", str2);

	return 0;
}
//*/

/*
#include<stdio.h>
void display(double a[])
{
	//double a[] �迭�� �ƴմϴ�.
	//�Ķ���Ϳ��� ����ϴ� �迭�� ������Ÿ���� ǥ�����̴�.
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
//���������� �Լ��Ķ���� ������
//�������� ���� int* ar ==> int ar[]
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
	//�����Ϳ���� ������ (intŸ���ΰ��)4byte��ū ����
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
	//�����ʹ� �ּ�ü�谡 int�� ���������.
	//&�����̸� : ������ �����ּ�(������)
	//�����͸� ����Ͽ� �޸𸮿� ���ٰ���
	//����������� ����
	printf("n:%d , *ptr: %d\n", n, *ptr);

	void* vPtr=&n;
	//��� �޸��ּ�(������) ���尡��
	//�ٷλ���Ҽ��� ����...�аų� ������ ������ ����������.
	//ĳ������ ���ؼ� ��밡��
	printf("n:%d , *vPtr: %d\n", n, *((int*)vPtr));

	return 0;
}
//*/

/*
#include<stdio.h>
//����Լ�
void recursive(int num) 
{
	//Ż��(�Լ�����)����
	if (num <= 0) {
		return;// �Լ�����
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
	//���α׷� ���۽� ���������..���������� ����
	//������ ���� inc()�Լ� �������ٰ���
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
	//�̸��� �Ȱ��� ������ �����ϸ�
	//���� : ���� �������� ����� ������ ã�´�
	//������ ���������� ã���ϴ�.
	return 0;
}
void disp() 
{
	int a = 200;
}

//*/

/*
#include<stdio.h>
void add(int val);//�Լ��Ǽ���
int n;
//��������
//default �ʱ�ȭ(0)
//���α׷� ��ü�������� ���ٰ���

int main() 
{
	//int num;//��������
	printf("%d\n", n);
	add(10);//�Լ��� ȣ��
	printf("%d\n", n);
	n++;
	printf("%d\n", n);
	return 0;
}
//�Լ��� ����
void add(int val) 
{
	n += val;// n = n+val;
}
//*/

