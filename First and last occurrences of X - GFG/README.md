# First and last occurrences of X
## Easy
<div class="problem-statement">
                <p><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank"></a></p><div style="margin: 14px 0px !important;" class="row"><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank">             <div class="col-md-12" style="cursor:pointer;background: #EFF8F3 0% 0% no-repeat padding-box; display: flex; align-items: center; position:                 relative; padding: 1.5%; border-radius: 10px; display: inline-block; text-align: center; font-weight: 600; color: #333"> <img src="https://media.geeksforgeeks.org/img-practice/gcs2022thumbnail-1649059370.png" alt="Lamp" width="46" height="40" style="background: transparent 0% 0% no-repeat padding-box;opacity: 1; margin: 0 16px;" class="img-responsive"> Geeks Summer Carnival is LIVE NOW &nbsp; <i class="fa fa-external-link" aria-hidden="true"></i> </div></a></div><p><span style="font-size:18px">Given a sorted array having <strong>N&nbsp;</strong>elements,&nbsp;find the indices&nbsp;of the first and last occurrences of an element <strong>X</strong>&nbsp;in the given array.</span></p>

<p><span style="font-size:18px"><strong>Note:</strong> If the number <strong>X&nbsp;</strong>is not found in the array, return '-1' as an array.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 4 , X = 3
arr[] = { 1, 3, 3, 4 }
<strong>Output:</strong>
1 2
<strong>Explanation:</strong>
For the above array, first occurence
of <strong>X = 3 </strong>is at <strong>index = 1</strong> and last
occurence is at <strong>index = 2</strong>.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 4, X = 5
arr[] = { 1, 2, 3, 4 }
<strong>Output:</strong>
-1
<strong>Explanation: </strong>
As 5 is not present in the array,
so the answer is -1.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Complete the function <strong>firstAndLast</strong><strong>()</strong> that takes the array <strong>arr</strong>, its size <strong>N&nbsp;</strong>and the value <strong>X&nbsp;</strong>as input parameters and returns a list of integers containing the indices of first and last occurence of&nbsp;<strong>X.</strong></span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(log(N))<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:&nbsp;</strong><br>
1 &lt;= N &lt;= 10^5&nbsp;</span></p>

<p><span style="font-size:18px">0 &lt;= arr[i], X &lt;= 10<sup>9</sup></span></p>
 <p></p>
            </div>