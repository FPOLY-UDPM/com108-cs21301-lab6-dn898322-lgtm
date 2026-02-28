/******************************************************************************
 * Họ và tên: [Nguyễn Tấn Dương]
 * MSSV:      [ps47990]
 * Lớp:       [com108-cs21301]
 *****************************************************************************/

//  BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả của trung bình tổng các số chia hết cho 3 trong mảng 


#include <stdio.h>
#define MAX 100
int main() {
    int n, arr[MAX];
    int sum = 0, count = 0;
    float average;

    // Nhập số phần tử của mảng
    printf("Nhap so phan tu cua mang (n <= %d): ", MAX);
    scanf("%d", &n);

    // Nhập các phần tử của mảng
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Tính tổng và đếm số phần tử chia hết cho 3
    for (int i = 0; i < n; i++) {
        if (arr[i] % 3 == 0) {
            sum += arr[i];
            count++;
        }
    }

    // Tính trung bình
    if (count > 0) {
        average = (float)sum / count;
        printf("Trung binh tong cac so chia het cho 3 trong mang: %.2f\n", average);
    } else {
        printf("Khong co so nao chia het cho 3 trong mang.\n");
    }

    return 0;
}

