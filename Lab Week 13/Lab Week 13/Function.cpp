#include"Function.h"

// Function to check the Vowel
bool isVowel(char ch)
{
    ch = toupper(ch);
    return (ch == 'A' || ch == 'E' || ch == 'I' ||
        ch == 'O' || ch == 'U');
}

// to count total number of vowel from 0 to n
int countVovels(string str, int n)
{
    if (n == 1)
        return isVowel(str[n - 1]);

    return countVovels(str, n - 1) + isVowel(str[n - 1]);
}

// to count sum of the squares of the number from 0 to num
int sumSquares(int num)
{
    if (num == 0)
        return 0;
    else
        return (num * num) + sumSquares(num - 1);
}

// to count sum in the array
int sumArray( int arr[] , int size)
{
    if (size == 0)
        return 0;

    return arr[size - 1] + sumArray(arr, size - 1);
}

// to check whether the string is palindrome
bool palindrome(string str, int e, int s)
{
    if (s > e)
        return true;

    if (str[s] != str[e - 1])
        return false;
    
    return (str[s] == str[e - 1] && palindrome(str, e - 1, s + 1));
}

int Findmin(int arr[], int size)
{
    if (size == 1)
        return arr[0];

    return min(arr[size - 1], Findmin(arr, size - 1));
}

int Findmax(int arr[], int size)
{
    if (size == 1)
        return arr[0];

    return max(arr[size - 1], Findmax(arr, size - 1));
}

bool isAsc(int i)
{
    int rem = i % 10;    // remainder
    int quo = i / 10;    // quotient

    if (rem == i)
        return true;
    else if (rem <= (quo % 10))
        return false;
    else
        return true && isAsc(quo);
}

int reverseNum(int num)
{
    static int sum = 0;
    int remainder = 0;
    if (num > 0)
    {
        remainder = num % 10;
        sum = sum * 10 + remainder;
        reverseNum(num / 10);
    }
        return sum;
}

int sumDigits(int num)
{
    int digit = num % 10;
    if (digit == num)
        return num;

    return digit + sumDigits(num / 10);

}

double power(int x, int y)
{
    if (y == 0)
        return 1;
    else if (y == 1)
        return x;
    else if (y > 1)
        return x * power(x, y - 1);
    else
        return 1 / power(x, -y);
}

int ackermann(int m, int n)
{
    if (m == 0) {
        return n + 1;
    }
    else if ((m > 0) && (n == 0)) { 
        return ackermann(m - 1, 1);
    }

    return ackermann(m - 1, ackermann(m, n - 1));

    
}

int numWays(int c, int k)
{
    if (k == 0 || k == c)
        return 1;
    
    return numWays(c - 1, k - 1) + numWays(c - 1, k);
}

void printRow(int numLine)
{
    
}

void displayPattern(int line)
{
    
        

}