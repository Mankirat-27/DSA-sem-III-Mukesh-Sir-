Asking User to Input 10 numbers.

AIM - To display all the possible triplets from the 10 numbers, such that sum of two of them is equal to third number itself (a+b=c).

1) Using for loop to take 10 inputs from the user and storing in array arr[].

2) Since, we have to work on triplets, 3 for loops will be used.

3) Firstly, innermost for loop will be processed for k=0 to k=9 where, i and j will remain 0 and 1 respectively.

4) Again innermost loop will run, i will still remain 0, but this time j will be 1, then j will be 2, then 3,4...,till 9.

5) Till now, i was equal to 0 only, now i will also be incremented till 8.

6) In the innermost loop the condition will be written -> if(arr[i]+arr[j]==arr[k]) then print the triplet.

OUTPUT - All triplets in the form of a + b = c will get printed.
____________________________________________________________________________________________________________________________________________

Asking User to Input any 10 consecutive numbers (Expecting that User accidently misses a number in between anywhere).

AIM - To find out that missing number and display on screen by using binary numbers.

1) Taking 10 consecutive decimal numbers from user and storing in array arr[].

2) Converting each member of the array from decimal to binary (using #include<bitset>) allocating 20 bits to the binary number.

3) Now, if the numbers are consecutive, the last bit of each binary number should be in order 1 0 1 0 1 0 1... and so on.

4) Wherever the user will make a mistake, a change in pattern will be observed as 1 0 1 0 1 1 0 1 0... like this.

5) For this, we convert each binary number into string by type casting and store it into a new array temp[] which contains strings.

6) Accessing last character of each element of the array of strings and comparing with just next element ( temp[i][19] == temp[i+1][19] or not).

7) Wherever the if condition gets satisfied, printing arr[i]+1 will give the missing number.

OUTPUT - Missing number from any 10 consecutive numbers will be displayed.
_______________________________________________________________________________________________________________________________________________

Asking User to Input any Number (num) and it's Power (pow).

AIM - To find power num^pow. Condition --> Loop should run less than value of pow times. 

1) If power is even, finding num's power pow/2, and asking compiler to return ans*ans (Thus running the loop pow/2 times).

2) If power is odd, finding num's power (pow-1)/2, and asking compiler to return ans*ans*num (Thus running the loop (pow-1)/2 times).
__________________________________________________________________________________________________________________________________________________

Asking User to Input the Velocity by which ball is being dropped.

AIM - To find the number of times ball bounces before it stops.
___________________________________________________________________________________________________________________________________________________
