# FIRST INDEX OF NUMBER

Given an array of length N and an integer x, you need to find and return the first index of integer x present in the array. Return -1 if it is not present in the array.
First index means, the index of first occurrence of x in the input array.
Do this recursively. Indexing in the array starts from 0.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x
Output Format :
first index or -1
Constraints :
1 <= N <= 10^3
Sample Input :
4
9 8 10 8
8
Sample Output :
1

##############################SOLUTIONS###################################

int index(int* arr, int n, int x, int index0)
{
    if (index0 == n) {
        return -1;
    }
    if (arr[index0] == x) {
        return index0;
    }

    return index(arr, n, x, index0 + 1);
}
int firstIndex(int input[], int size, int x)
{
    if (input[0] == x) {
        return 0;
    }
    return index(input, size, x, 1);
}