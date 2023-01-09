#include "stdio.h"
int a[100], b[100], c[100];
int n1, n2, n3;
void nhapMang(int x[100], int &n)
{
	do
	{
		printf("Nhap vao so luong phan tu: ");
		scanf("%d", &n);
	} while (n < 1);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap x[%d]: ", i);
		scanf("%d", &x[i]);
	}
}
void xuatMang(int x[100], int n)
{
	printf("\nGia tri mang: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", x[i]);
	}
}
// 1 5 4 7 8 (n=5) --> 1 (so lan doi cho nhau nhieu nhat 4 lan --> lan thu 0 1 2 3
void sapXepTangDan(int x[100], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (x[i] > x[j])
			{ // Neu gia tri dau tien x[i] lon thi thay the gia tri x[j]
				int temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
		}
	}
}
// Tron mang a[] va mang b[] vao mang c[] --> n cua c[] vi cong 2 mang lai
void tronMang(int x1[100], int n_x1, int x2[100], int n_x2, int x3[100], int &n_x3)
{
	n_x3 = n_x1 + n_x2;
	int i1 = 0;
	int i2 = 0;
	int i3 = 0;
	while (i3 < n_x3)
	{
		if (i1 >= n_x1)
		{
			x3[i3] = x2[i2];
			i2++;
		}
		else if (i2 >= n_x2)
		{
			x3[i3] = x1[i1];
			i1++;
		}
		else if (x1[i1] < x2[i2])
		{
			x3[i3] = x1[i1];
			i1++;
		}
		else
		{
			x3[i3] = x2[i2];
			i2++;
		}
		i3++;
	}
}
int main()
{
	nhapMang(a, n1);
	xuatMang(a, n1);
	sapXepTangDan(a, n1);
	xuatMang(a, n1);
	printf("\n---------");

	nhapMang(b, n2);
	xuatMang(b, n2);
	sapXepTangDan(b, n2);
	xuatMang(b, n2);
	printf("\n---------");

	tronMang(a, n1, b, n2, c, n3);
	xuatMang(c, n3);
}
