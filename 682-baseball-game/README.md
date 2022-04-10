<h2><a href="https://leetcode.com/problems/baseball-game/">682. Baseball Game</a></h2><h3>Easy</h3><hr><div><p>You are keeping score for a baseball game with strange rules. The game consists of several rounds, where the scores of past rounds may affect future rounds' scores.</p>

<p>At the beginning of the game, you start with an empty record. You are given a list of strings <code style="">ops</code>, where <code style="">ops[i]</code> is the <code style="">i<sup>th</sup></code> operation you must apply to the record and is one of the following:</p>

<ol>
	<li>An integer <code style="">x</code> - Record a new score of <code style="">x</code>.</li>
	<li><code style="">"+"</code> - Record a new score that is the sum of the previous two scores. It is guaranteed there will always be two previous scores.</li>
	<li><code style="">"D"</code> - Record a new score that is double the previous score. It is guaranteed there will always be a previous score.</li>
	<li><code style="">"C"</code> - Invalidate the previous score, removing it from the record. It is guaranteed there will always be a previous score.</li>
</ol>

<p>Return <em>the sum of all the scores on the record</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style=""><strong>Input:</strong> ops = ["5","2","C","D","+"]
<strong>Output:</strong> 30
<strong>Explanation:</strong>
"5" - Add 5 to the record, record is now [5].
"2" - Add 2 to the record, record is now [5, 2].
"C" - Invalidate and remove the previous score, record is now [5].
"D" - Add 2 * 5 = 10 to the record, record is now [5, 10].
"+" - Add 5 + 10 = 15 to the record, record is now [5, 10, 15].
The total sum is 5 + 10 + 15 = 30.
</pre>

<p><strong>Example 2:</strong></p>

<pre style=""><strong>Input:</strong> ops = ["5","-2","4","C","D","9","+","+"]
<strong>Output:</strong> 27
<strong>Explanation:</strong>
"5" - Add 5 to the record, record is now [5].
"-2" - Add -2 to the record, record is now [5, -2].
"4" - Add 4 to the record, record is now [5, -2, 4].
"C" - Invalidate and remove the previous score, record is now [5, -2].
"D" - Add 2 * -2 = -4 to the record, record is now [5, -2, -4].
"9" - Add 9 to the record, record is now [5, -2, -4, 9].
"+" - Add -4 + 9 = 5 to the record, record is now [5, -2, -4, 9, 5].
"+" - Add 9 + 5 = 14 to the record, record is now [5, -2, -4, 9, 5, 14].
The total sum is 5 + -2 + -4 + 9 + 5 + 14 = 27.
</pre>

<p><strong>Example 3:</strong></p>

<pre style=""><strong>Input:</strong> ops = ["1"]
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="">1 &lt;= ops.length &lt;= 1000</code></li>
	<li><code style="">ops[i]</code> is <code style="">"C"</code>, <code style="">"D"</code>, <code style="">"+"</code>, or a string representing an integer in the range <code style="">[-3 * 10<sup>4</sup>, 3 * 10<sup>4</sup>]</code>.</li>
	<li>For operation <code style="">"+"</code>, there will always be at least two previous scores on the record.</li>
	<li>For operations <code style="">"C"</code> and <code style="">"D"</code>, there will always be at least one previous score on the record.</li>
</ul>
</div>