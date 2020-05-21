Problem
Cristobal has an array of N (possibly negative) integers. The i-th integer in his array is Ai. A contiguous non-empty subarray of Cristobal's array is perfect if its total sum is a perfect square. A perfect square is a number that is the product of a non-negative integer with itself. For example, the first five perfect squares are 0, 1, 4, 9 and 16.

How many subarrays are perfect? Two subarrays are different if they start or end at different indices in the array, even if the subarrays contain the same values in the same order.

Input
The first line of the input gives the number of test cases, T. T test cases follow. The first line of each test case contains the integer N. The second line contains N integers describing Cristobal's array. The i-th integer is Ai.

Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the number of perfect subarrays.

Limits
Memory limit: 1GB.
1 ≤ T ≤ 100.
-100 ≤ Ai ≤ 100, for all i.

Test set 1
Time limit: 20 seconds.
1 ≤ N ≤ 1000.

Test set 2
Time limit: 30 seconds.
For up to 5 cases, 1 ≤ N ≤ 105.
For the remaining cases, 1 ≤ N ≤ 1000.

Sample

Input
 	
Output
 
3
3
2 2 6
5
30 30 9 1 30
4
4 0 0 16

  
Case #1: 1
Case #2: 3
Case #3: 9

/*
#include<stdio.h>
#include<math.h>
int main()
{
    long n,f,j,m=0,c;
    scanf("%ld",&n);
    int a[n];
    c=n;
    while(n)
    {
        long num,i,count=0,temp1,sum;
        double temp;
        scanf("%ld",&num);
        long arr[num];
           for(i=0;i<num;i++)
              scanf("%ld",&arr[i]);
           for(i=0;i<num;i++)
           {   sum=0;
               for(j=i;j<num;j++)
               {
                 sum+=arr[j];
                 temp =sqrt(sum);
                 temp1 =sqrt(sum);
                 if(temp==temp1)
                    count++;
               }
           }
        
        a[m++]=count;
        n--;
    }
         
    for(f=0;f<c;f++)
        printf("Case #%ld: %ld\n",f+1,a[f]);
    return 0;
}
*/
