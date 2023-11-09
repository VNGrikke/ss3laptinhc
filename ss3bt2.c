#include <stdio.h>

int main() {
    int age, stt;
    char name[10] = "ABCDEFGHIK";
    char email[10] = "abcdefghik";
    age = 16;

    printf("               		    DANH SACH SINH VIEN\n");
    printf("--------------------------------------------------------------------------\n");
    printf("|  STT  | Ho va ten    | Tuoi | So dien thoai | 		Email            |\n");
    printf("--------------------------------------------------------------------------\n");

    for (stt = 1; stt <= 10; stt++) {
        age = age + 1;
        printf("|   %d   | Nguyen Van %c |  %d  |  090448848%d   | %snv@rikkeiacademy.com |\n", stt, name[stt-1], age, stt, email);
        printf("-------------------------------------------------------------------------\n");
    }

    return 0;
}
