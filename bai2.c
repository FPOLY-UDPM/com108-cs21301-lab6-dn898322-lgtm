/******************************************************************************
 * Họ và tên: [Nguyễn Tấn Dương]
 * MSSV:      [ps47990]
 * Lớp:       [com108-cs21301]
 *****************************************************************************/

//  BÀI 2: TÌM GIÁ TRỊ LỚN NHẤT VÀ NHỎ NHẤT TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình giá trị nhỏ nhất và lớn nhất của mảng

#include <stdio.h>
#define MAX 100
int main() {
    int n, arr[MAX];
    int max, min;

    // Nhập số phần tử của mảng
    printf("Nhap so phan tu cua mang (n <= %d): ", MAX);
    scanf("%d", &n);

    // Nhập các phần tử của mảng
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Khởi tạo giá trị lớn nhất và nhỏ nhất
    max = arr[0];
    min = arr[0];

    // Tìm giá trị lớn nhất và nhỏ nhất trong mảng
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Xuất kết quả
    printf("Gia tri lon nhat trong mang: %d\n", max);
    printf("Gia tri nho nhat trong mang: %d\n", min);

    return 0;
}


