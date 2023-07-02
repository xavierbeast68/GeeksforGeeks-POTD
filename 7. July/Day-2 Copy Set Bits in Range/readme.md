
<!-- Heading -->
<h1> Copy Set Bits in Range

 </h1>


<p style="color : rgba(255, 255, 255, 0.65);padding-bottom: 0.25rem; padding-top: 0.25rem;    padding-left: 0.625rem; padding-right: 0.625rem; display:inline; font-size: 1.25rem">Easy</p>
</br>

</br>
<!-- Tags -->
<p><b>Problem Tags : </b>
<code>Bit Magic</code>&nbsp;&nbsp;<code>Data Structures</code></p>

</br>

<!-- Problem Statement -->
contests & explore high-paying jobs

Given two numbers **X** and **Y**, and a range **[L, R]** where 1 <= L <= R <= 31. You have to copy the set bits of **'Y'** in the range L to R in **'X'**. Return this modified X.

Note: Range count will be from Right to Left & start from 1.

<!-- line break -->
<p>&nbsp</p>

<!-- example 1 -->
<strong>Example 1:</strong>
<pre>
<strong>Input:</strong> 
X = 44, Y = 3 
L = 1,  R = 5
<strong>Output:</strong> 
47
<strong>Explanation:</strong> 
Binary represenation of 44 and 3 is 1011<u><b>00</u></b> and 0000<b>11</b>. So in the range 1 to 5 there are two set bits of 3 (1st & 2nd position). If those are set in 44 it will become 1011<u><b>11</b></u> which is 47.
</pre>

<!-- example 2 -->
<strong>Example 2:</strong>
<pre>
<strong>Input:</strong> 
X = 16, Y = 2
L = 1,  R = 3
<strong>Output:</strong> 
18
<strong>Explanation:</strong> Binary represenation of 16 and 2 is 100<u>00</u> and <b>10</b>. If the mentioned conditions are applied then 16 will become 100<u><b>10</b></u> which is 18
</pre>


<strong>Your Task:</strong>

You do not need to read input or print anything. Your task is to complete the function **setSetBit()** which takes the numbers X, Y, L and R as input parameters and returns the modified value of X.

**Expected Time Complexity:** O(R - L)

**Expected Space Complexity:** O(1)

<!-- constraints -->
<strong>Constraints:</strong>
- <p><code>1 ≤ X, Y ≤ 10<sup>9</sup></code></p>
- <p><code>1 ≤ L ≤ R ≤ 32</code></p>

<!-- line break -->
<p>&nbsp</p>


<!-- horizontal rule -->
<hr>


<!-- Links -->
<h3>Links :</h3>

- [GeeksforGeeks](https://practice.geeksforgeeks.org/problems/copy-set-bits-in-range0623/1)

<hr>