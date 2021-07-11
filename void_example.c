#include <stdio.h>
#include <limits.h>
#include "GoatGeometry.h"
#include "void.h"

void main()
{
    /**** With arrays ****/

    // void *arr2;
    // vainitas(int, arr2, 1000000);
    // for (int i = 0; i < 1000000; ++i) vaset(arr2, i, i);
    // for (int i = 0; i < 1000000; ++i) printf("%i\n", vagetas(int, arr2, i));

    /**** With strings arrays ****/

    void *arr;
    vainitas(char*, arr, 10);
    vasetas(char*, arr, 0, "Hello");
    vasetas(char*, arr, 1, "Привет");
    vasetas(char*, arr, 2, "Мир");
    vasetas(char*, arr, 3, "Пока");
    vasetas(char*, arr, 4, "О\'кай");
    vasetas(char*, arr, 5, "World");
    vasetas(char*, arr, 6, "!OK");
    vasetas(char*, arr, 7, "Хелло Шорлд!");
    vasetas(char*, arr, 8, "Prevet Myr!");
    vasetas(char*, arr, 9, "Good by!");
    for (int i = 0; i < 10; ++i) puts(vagetas(char*, arr, i));

    /**** With floating type ****/

    void *fval;
    vinitas(double, fval);
    vset(fval, 12534.22127123);
    printf("%f\n", vgetas(double, fval));

    /**** With integer types ****/

    void *llval;
    vinitas(long long, llval);
    vset(llval, LLONG_MAX);
    printf("%lld\n", vgetas(long long, llval));

    /**** With structures ***/

    typedef struct { int i; double d; char *str; } Something;
    Something s = {INT_MAX, 290.000001, "It works!"};
    void *sval;
    vinitas(Something, sval);
    vset(sval, s);
    printf("%i, %f, %s\n", vgetas(Something, sval).i, vgetas(Something, sval).d, vgetas(Something, sval).str);

    /**** With 2D arrays ****/

    void *d2;
    vainitas(char*, d2, 9);
    for (int i = 0; i < 9; ++i) vasetas(char*, d2, i, (char*)malloc(sizeof(char)*9));

    for (int i = 0; i < 9; ++i)
        for (int j = 0; j < 9; ++j) {
            vgetptras(char*, d2)[i][j] = '.';
        }
    vgetptras(char*, d2)[5][4] = '@';

    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            printf("%c", vgetptras(char*, d2)[i][j]);
        }
        puts("");
    }
}
