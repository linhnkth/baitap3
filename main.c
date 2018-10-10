#include <stdio.h>
#include <stdlib.h>

void menu() {
    printf("1. so lon nhat: \n");
    printf("2. so be nhat: \n");
    printf("vui long nhap lua chon (1|2): \n");
}

int main() {
    int luachon;
    int arraynumber;
    printf("nhap so luong phan tu trong mang: \n");
    scanf("%d", &arraynumber);
    if (arraynumber > 10) {
        printf("vuot qua so luong cho phep ");
        exit(1);
    }
    for (int i = 0; i < arraynumber; ++i) {
        printf("nhap cac phan tu %d: \n", i + 1);
        scanf("%d", &arraynumber);
    }
    for (int j = 0; j < arraynumber; ++j) {
        printf("nhap ");
    }

    while (1 == 1) {
        menu();
        scanf("%d", &luachon);
        switch (luachon) {
            case 1:
                printf("so lon nhat findmaxvolue la: ");
                break;
            case 2:
                printf("so be nhat findminvolue la: ");
                break;

        }        menu();

    }


    return 0;
}
