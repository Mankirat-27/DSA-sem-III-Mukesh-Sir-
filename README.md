Asking User to Input 10 numbers.

AIM - To display all the possible triplets from the 10 numbers, such that sum of two of them is equal to third number itself (a+b=c).

1) Using for loop to take 10 inputs from the user and storing in array arr[].

2) Since, we have to work on triplets, 3 for loops will be used.

3) Firstly, innermost for loop will be processed for k=0 to k=9 where, i and j will remain 0 and 1 respectively.

4) Again innermost loop will run, i will still remain 0, but this time j will be 1, then j will be 2, then 3,4...,till 9.

5) Till now, i was equal to 0 only, now i will also be incremented till 8.

6) In the innermost loop the condition will be written -> if(arr[i]+arr[j]==arr[k]) then print the triplet.

OUTPUT - All triplets in the form of a + b = c will get printed.
