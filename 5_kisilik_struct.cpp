#include <stdio.h>

#define MAX_USERS 5

typedef struct {
    char name[50];
    char surname[50];
    int number;
    int age;
    char address[100];
} User;

int main() {
    User users[MAX_USERS];

    // Kullanıcı bilgilerini al
    for (int i = 0; i < MAX_USERS; i++) {
        printf("Kullanici %d bilgileri:\n", i+1);
        printf("Ad: ");
        scanf("%s", users[i].name);
        printf("Soyad: ");
        scanf("%s", users[i].surname);
        printf("Numara: ");
        scanf("%d", &users[i].number);
        printf("Yas: ");
        scanf("%d", &users[i].age);
        printf("Adres: ");
        scanf("%s", users[i].address);
    }

    // Kullanıcı bilgilerini ekrana yazdır
    printf("\nKullanici bilgileri:\n");
    for (int i = 0; i < MAX_USERS; i++) {
        printf("Kullanici %d:\n", i+1);
        printf("Ad: %s\n", users[i].name);
        printf("Soyad: %s\n", users[i].surname);
        printf("Numara: %d\n", users[i].number);
        printf("Yas: %d\n", users[i].age);
        printf("Adres: %s\n", users[i].address);
        printf("\n");
    }

    return 0;
}
