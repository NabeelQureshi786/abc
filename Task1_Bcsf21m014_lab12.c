//#include<stdio.h>
//#pragma warning (disable:4996)
//#define size 2
//int isSkewSymmetric(int mat[][size]);
//int main()
//{
//	int mat[size][size];
//	printf("Enter your matrix ");
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j< size; j++)
//		{
//			scanf("%d",&mat[i][j]);
//		}
//	}
//	int result=isSkewSymmetric(mat);
//	if (result == 1)
//	{
//		printf("Skew symertric\n");
//	}
//	else
//	{
//		printf("Not skew");
//	}
//}
//int isSkewSymmetric(int mat[][size])
//{
//	int matrix2[size][size];
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			matrix2[i][j] = mat[i][j];
//		}
//	}
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			matrix2[i][j] *= -1;
//			printf("Vlue matrix 2 is %d", matrix2[i][j]);
//		}
//	}
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = i; j < size; j++)
//		{
//			mat[i][j] = mat[j][i];
//			
//		}
//	}
//	int flag = 0;
//	for (int i = 0; i < size&&flag!=1; i++)
//	{
//		for (int j = 0; j < size&&flag!=1; j++)
//		{
//			if (mat[i][j] != matrix2[i][j])
//			{
//				flag = 1;
//			}
//		}
//	}
//	if (flag == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}