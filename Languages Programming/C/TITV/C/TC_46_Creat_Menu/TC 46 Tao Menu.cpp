#include "stdio.h"
int a[100];
int n;
void nhapMang(int x[100], int &n)
{
	printf("Nhap vao so luong phan tu: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap x[%d]: ", i);
		scanf("%d", &x[i]);
	}
}
void xuatMang(int x[100], int n)
{
	printf("Gia tri mang: ");

	for (int i = 0; i < n; i++)
	{
		printf("%d ", x[i]);
	}
}
void themVaocuoiMang(int x[100], int &n, int them)
{
	int size = sizeof(x) / sizeof(x[0]);
	if (n == size)
	{
		printf("Khong the them vao mang!");
	}
	x[n] = them;
	n++;
	// 1 2 3 4 5 ==> n = 5
	// x[n] = x[5] = them = 3 ==> n = 6 // Dia chi bien = n thi them vao 1 don vi roi
}

// Don het gia tri lui ve phia sau
void themVaoTruocMang(int x[100], int &n, int them)
{
	int size = sizeof(x) / sizeof(x[0]);
	if (n == size)
	{
		printf("Khong the them vao mang!");
	}
	n++; // old n = 5 --> new n = 6 (0 1 2 3 4 5)
	for (int i = n - 1; i > 0; i--)
	{
		x[i] = x[i - 1]; // vi tri moi 5 = gia tri dia chi bien cua 4
	}
	x[0] = them;
	// 1 2 3 4 5 --> n = 5
	// _ 1 2 3 4 5 --> n = 6
}
void themvaoVitriK(int x[100], int &n, int them, int k)
{
	int size = sizeof(x) / sizeof(x[0]);
	if (n == size)
	{
		printf("Khong the them vao mang!");
	}
	// n = 5  --> 1 2 3 4 5 --> them=4; k=10 --> 1 2 10(2) 3 4 5
	// n tang len 1 don vi
	// tat ca vi tri sau k se doi ve phia sau if i == k thi gan them vao va gia tri sau doi ve sau 1 don vi
	n++;
	// doi gia tri hien co trong mang
	//  1 2 3 4 5 n=5 --> 1 2 99 3 4 5 n = 6 --> 6 5 4 = i 3
	for (int i = n - 1; i > k; i--)
	{
		x[i] = x[i - 1];
	}
	x[k] = them;
}
int main()
{
	// Goi menu de thuc hien tung phep tinh lien tuc muon kiem thu
	char gt;
	do
	{
		printf("\nMENU (Chon ham muon xu ly)\n");
		printf("1 - Nhap mang\n");
		printf("2 - Xuat mang\n");
		printf("3 - Them phan tu vao cuoi mang\n");
		printf("4 - Them phan tu vao dau mang\n");
		printf("5 - Them phan tu vao vi tri K\n");
		
		printf("X - Thoat!\n");
		//
		printf("Lua chon cua ban la: ");
		scanf(" %c", &gt);
		//
		if (gt == '1')
		{ // Char kieu ky tu 1 la ky tu
			nhapMang(a, n);
		}
		else if (gt == '2')
		{
			xuatMang(a, n);
		}
		else if (gt == '3' || gt == '4' || gt == '5')
		{
		int them;
		printf("\nNhap vao them so bao nhieu = ");
		scanf("%d", &them);

			if (gt == '3')
			{
				themVaocuoiMang(a, n, them);
			}
			else if (gt == '4')
			{
				themVaoTruocMang(a, n, them);
			}
			else if (gt == '5')
			{
				int k;
				printf("\nNhap vao k: ");
				scanf("%d", &k);
				themvaoVitriK(a, n, them, k);
			}
		}
	} while (gt != 'x'); // Lam 1 lan va gt lam cho den khi nao dk sai ngung x!=x sai thoat
}
