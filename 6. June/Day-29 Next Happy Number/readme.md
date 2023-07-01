
<!-- Heading -->
<h1> Next Happy Number
 </h1>


<p style="color : rgba(255, 255, 255, 0.65);padding-bottom: 0.25rem; padding-top: 0.25rem;    padding-left: 0.625rem; padding-right: 0.625rem; display:inline; font-size: 1.25rem">Hard</p>
</br>

</br>
<!-- Tags -->
<p><b>Problem Tags : </b>
<code>Recursion</code>&nbsp;&nbsp;<code>Algorithms</code></p>

</br>

<!-- Problem Statement -->
For a given non-negative integer **N**, find the next smallest Happy Number. A number is called **Happy** if it leads to 1 after a sequence of steps. Wherein at each step the number is replaced by the sum of squares of its digits that is, if we start with Happy Number and keep replacing it with sum of squares of its digits, we reach 1 at some point.

<!-- line break -->
<p>&nbsp</p>

<!-- example 1 -->
<strong>Example 1:</strong>
<pre>
<strong>Input:</strong> 
N = 8
<strong>Output:</strong> 
10
<strong>Explanation:</strong> 
Next happy number after 8 is 10 since
1*1 + 0*0 = 1
</pre>

<!-- example 2 -->
<strong>Example 2:</strong>
<pre>
<strong>Input:</strong> 
N = 10
<strong>Output:</strong> 
13
<strong>Explanation:</strong> 
After 10, 13 is the smallest happy number because 1*1 + 3*3 = 10, so we replace 13 by 10 and 1*1 + 0*0 = 1.
</pre>


<strong>Your Task:</strong>

You don't need to read input or print anything. Your task is to complete the function **nextHappy()** which takes an integer N as input parameters and returns an integer, next Happy number after N.

**Expected Time Complexity:** O(Nlog10N)

**Expected Space Complexity:** O(1)

<!-- constraints -->
<strong>Constraints:</strong>
- <p><code>1<=N<=10<sup>5</sup></code></p>

<!-- line break -->
<p>&nbsp</p>


<!-- horizontal rule -->
<hr>


<!-- Links -->
<h3>Links :</h3>

- [GeeksforGeeks](https://practice.geeksforgeeks.org/problems/next-happy-number4538/1)

<hr>