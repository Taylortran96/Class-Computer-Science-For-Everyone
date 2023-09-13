// Nối hai danh sách liên kết đơn
#include <stdio.h>
#include <stdlib.h>

// Khởi tạo node
struct node
{
    int data;
    struct node *next;
};

struct node *even = NULL;
struct node *odd = NULL;
struct node *list = NULL;

// tao danh sach lien ket
void insert(int data)
{
    // Cấp phát bộ nhớ cho node mới dùng malloc;
    struct node *link = (struct node *)malloc(sizeof(struct node));
    struct node *current;

    link->data = data;
    link->next = NULL;

    if (data % 2 == 0)
    {
        if (even == NULL)
        {
            even = link;
            return;
        }
        else
        {
            current = even;

            while (current->next != NULL)
                current = current->next;

            // chen link vao phan cuoi cua list
            current->next = link;
        }
    }
    else
    {
        if (odd == NULL)
        {
            odd = link;
            return;
        }
        else
        {
            current = odd;

            while (current->next != NULL)
                current = current->next;

            // chen link vao phan cuoi cua list
            current->next = link;
        }
    }
}

void display(struct node *head)
{
    struct node *ptr = head;

    printf("[head] =>");

    while (ptr != NULL)
    {
        printf(" %d =>", ptr->data);
        ptr = ptr->next;
    }

    printf(" [null]\n");
}

void combine()
{
    struct node *link;

    list = even;
    link = list;

    while (link->next != NULL)
    {
        link = link->next;
    }

    link->next = odd;
}
// In ra màn hình
int main()
{
    int i;

    for (i = 1; i <= 10; i++)
        insert(i);

    printf("Danh sach chan: ");
    display(even);

    printf("Danh sach le: ");
    display(odd);

    combine();

    printf("Sau khi noi: \n");
    display(list);

    return 0;
}
