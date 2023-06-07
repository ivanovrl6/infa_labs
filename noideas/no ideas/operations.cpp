#include "operations.h"

void multiply(array<float, 2>^ A, array<float, 2>^ B, array<float, 2>^ C) {
	if (A->GetLength(1) != B->GetLength(0))
		throw "Умножение матриц допустимо при равенстве строк второй матрицы и столбцов первой";
	int rows = A->GetLength(0);
	int cols = B->GetLength(1);
	int rows_B_cols_A = A->GetLength(1);
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			C[i, j] = 0;
			for (int k = 0; k < rows_B_cols_A; k++) {
				C[i, j] += A[i, k] * B[k, j];
			}
		}
	}
}

void identity_mat(array<float, 2>^ E) {
	int  n = E->GetLength(0), m = E->GetLength(1);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			E[i, j] = float(i == j);
		}
	}
}

void move_mat(float dx, float dy, array<float, 2>^ T) {
	identity_mat(T);
	T[0, 2] = dx;
	T[1, 2] = dy;
}

void scale_mat(float kx, float ky, array<float, 2>^ S) {
	identity_mat(S);
	S[0, 0] = kx;
	S[1, 1] = ky;
}

void scale_mat(PointF c, float kx, float ky, array<float, 2>^ S) {
	scale_mat(kx, ky, S);
	PointF scaled_c = apply(c, S);
	S[0, 2] = c.X - scaled_c.X;
	S[1, 2] = c.Y - scaled_c.Y;
}

void rotate_mat(float phi, array<float, 2>^ R) {
	identity_mat(R);
	R[0, 0] = cos(phi);
	R[1, 1] = R[0, 0];
	R[0, 1] = sin(phi);
	R[1, 0] = -R[0, 1];
}

void rotate_mat(PointF c, float phi, array<float, 2>^ R) {
	rotate_mat(phi, R);
	PointF rotated_c = apply(c, R);
	R[0, 2] = c.X - rotated_c.X;
	R[1, 2] = c.Y - rotated_c.Y;
}

PointF apply(PointF p, array<float, 2>^ M)
{
	return PointF(p.X * M[0, 0] + p.Y * M[0, 1] + M[0, 2], p.X * M[1, 0] + p.Y * M[1, 1] + M[1, 2]);
}

