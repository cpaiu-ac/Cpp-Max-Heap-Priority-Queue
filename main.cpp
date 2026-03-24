#include <iostream>
#include <string>
#include <cstring>
using namespace std;
#define MAX 100
void inserare(char A[MAX], int &n , int x){
    A[n+1] = x;
    n++;
    int fiu = n;
    int parinte = n / 2;
    while(parinte >= 1 && A[parinte] < A[fiu])
    {
        swap(A[parinte], A[fiu]);
        fiu = parinte;
        parinte = parinte / 2;
    }
}

void stergere(char A[MAX], int &n)
{
    if (n == 0) cout << "heap gol ! " << endl;
    else {
        int ret_val = A[1];
        A[1] = A[n];
        n--;
        int parinte = 1;
        int fiu = 2;
        while(fiu <= n)
        {
            if(fiu + 1 <= n && A[fiu] < A[fiu+1]) fiu++;
            if(A[fiu] > A[parinte])
            {
                swap(A[parinte], A[fiu]);
                parinte = fiu;
                fiu = fiu * 2;
            }
            else fiu = n + 1;
        }
    }
}

void susjos(char A[MAX], int n)
{
    for(int i = 2; i < n; i++)
        {int temp = i - 1;
        inserare(A, temp, A[i]);}
}

void retro(char A[MAX], int n, int i)
{
    int parinte = i;
    int fiu = 2 * i;
    while(fiu <= n)
    {
        if(fiu + 1 <= n && A[fiu] < A[fiu+1]) fiu++;
        if(A[fiu] > A[parinte])
        {
            swap(A[parinte], A[fiu]);
            parinte = fiu;
            fiu = fiu * 2;
        }
        else fiu = n + 1;
    }
}

void jossus(char A[MAX], int n)
{
    for(int i = n/2; i > 1; i--)
        retro(A, n, i);
}

int main()
{
    char A[] = {20, 14, 13, 10, 8};
    int n = 5;
    inserare(A, n, 6);
    stergere(A,n);
    susjos(A, n);
    jossus(A, n);
}