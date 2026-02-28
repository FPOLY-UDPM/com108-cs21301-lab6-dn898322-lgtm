/******************************************************************************
 * Họ và tên: [Nguyễn Tấn Dương]
 * MSSV:      [ps47990]
 * Lớp:       [com108-cs21301]
 *****************************************************************************/

//  BÀI 4: TÍNH BÌNH PHƯƠNG CÁC PHẦN TỬ TRONG MẢNG 2 CHIỀU 
//  Input: Nhập vào từ bàn phím 1 ma trận các số nguyên. Mảng gồm n hàng, m cột 
//  Output: Xuất ra màn hình ma trận bình phương 

#include <stdio.h>
#define MAX 100 
int main() {
    int n, m, matrix[MAX][MAX], squaredMatrix[MAX][MAX];

    // Nhập số hàng và số cột của ma trận
    printf("Nhap so hang (n <= %d): ", MAX);
    scanf("%d", &n);
    printf("Nhap so cot (m <= %d): ", MAX);
    scanf("%d", &m);

    // Nhập các phần tử của ma trận
    printf("Nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Tính bình phương các phần tử trong ma trận
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            squaredMatrix[i][j] = matrix[i][j] * matrix[i][j];
        }
    }

    // Xuất ma trận bình phương
    printf("Ma tran binh phuong:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", squaredMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
