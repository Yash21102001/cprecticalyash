#include <stdio.h>

struct Housedetails
{
    int room_qantity;
    int established_year;
    char city[50];
};

int main()
{
    int house_details;

    printf("Enter the number of House : ");
    scanf("%d", &house_details);

    struct Housedetails e[house_details];

    for (int i = 0; i < house_details; i++)
    {
        printf("Enter details for House %d ...\n", i + 1);

        printf("\nEnter Room Quantity : ");
        scanf("%d", &e[i].room_qantity);

        printf("Enter Established Year : ");
        scanf("%d", &e[i].established_year);

        printf("Enter City : ");
        scanf("%s", &e[i].city);
    }

    printf("\n\n-- House Records --\n");
    for (int i = 0; i < house_details; i++)
    {
        printf("House Detail %d ...\n", i + 1);
        printf("Room Quantity : %d\n", e[i].room_qantity);
        printf("Enter Established Year : %d\n", e[i].established_year);
        printf("City : %s\n", e[i].city);
        printf("\n");
   }
}