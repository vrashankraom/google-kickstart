Problem
Avery has an array of N positive integers. The i-th integer of the array is Ai.

A contiguous subarray is an m-countdown if it is of length m and contains the integers m, m-1, m-2, ..., 2, 1 in that order. For example, [3, 2, 1] is a 3-countdown.

Can you help Avery count the number of K-countdowns in her array?

Input
The first line of the input gives the number of test cases, T. T test cases follow. Each test case begins with a line containing the integers N and K. The second line contains N integers. The i-th integer is Ai.

Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the number of K-countdowns in her array.

Limits
Time limit: 20 seconds per test set.
Memory limit: 1GB.
1 ≤ T ≤ 100.
2 ≤ K ≤ N.
1 ≤ Ai ≤ 2 × 105, for all i.

Test set 1
2 ≤ N ≤ 1000.

Test set 2
2 ≤ N ≤ 2 × 105 for at most 10 test cases.
For the remaining cases, 2 ≤ N ≤ 1000.

Sample

Input
 	
Output
 
3
12 3
1 2 3 7 9 3 2 1 8 3 2 1
4 2
101 100 99 98
9 6
100 7 6 5 4 3 2 1 100

  
Case #1: 2
Case #2: 0
Case #3: 1

  
/*
#include<stdio.h>
int main()
{
    int n,f,k=0,lim;
    scanf("%d",&n);
   int a[n];
    int c=n;
    int m=0;
    while(n)
    {
        int num,i,count=0;
        scanf("%d",&num);
        
        int arr[num];
        scanf("%d",&lim);
        
        
        for(i=0;i<num;i++)
            scanf("%d",&arr[i]);

        for(i=0;i<num;i++)
        {   
           if(arr[i]==lim )
           {   
             int y=lim;
              
              int p=i;
              while(y)
              {
                   
                 if(arr[p++]!=y)
                     break;
                  --y;  
                
              }
              if(y==0)
                 count++;
           }
           
        }
        a[m++]=count;
        n--;
    }

    for(f=0;f<c;f++)
        printf("Case #%d: %d\n",f+1,a[f]);
    return 0;
}
*/
