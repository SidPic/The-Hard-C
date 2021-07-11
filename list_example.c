#include <stdio.h>
#include <stdlib.h>

#define SHORT_LIST_NAMES
#include "list.h"

void main()
{
    List list;
    List list2;
    baseinit (&list2);
    inita(&list, L"YGUMS", LIST_STR_END);
    insert(&list, list.tail->next, 'o');
    insert(&list, list.head, 'h');
    insert(&list, list.tail, 'l');
    int arr[] = L" OK It's WORK! ";
    inserta(&list, list.head->next, arr, LIST_STR_END);
    copy(&list, list.head, list.tail, &list2);
    swap (&list, list.head, list.tail);
    int str[290];
    copya (&list, list.head, list.tail, str, str+sizeof(str));
    deletea (&list, list.head, list.tail);

    for (gobegin(&list); gonext(&list);) putchar (getthis(&list)->value);
    puts("\n");
    for (goend(&list); goprev(&list);) putchar (getthis(&list)->value);
    puts("");
    for (gobegin(&list2); gonext(&list2);) putchar (getthis(&list2)->value);
    puts("\n");
    for (goend(&list2); goprev(&list2);) putchar (getthis(&list2)->value);
    puts("");
    for (int *ptr = str; *ptr ; putchar(*ptr++));
    gotail(&list2);
    printf ("%d", getpos(&list2));

    puts("");
}
