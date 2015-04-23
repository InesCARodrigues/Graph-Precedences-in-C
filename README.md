#Graph-Precedences-in-C

<b>Hi!</b>
I'll start posting on my github some code I've been doing this semester at the Department of Informatics Engineering (DEI) of the University of Coimbra (Portugal).

This was my first weekly problem for the course of <b>Advanced Programming Laboratory</b>. 

The objective was to solve the following problem in less than 1 sec.

<h2>Input</h2>

The first line contains three integers: the number of topics (m), the number of precedences (n) and the maximum number of topics that Jocas can study in a single day. Then, n lines follow. Each line has two integers, a and b, where a is the topic that must be studied before topic b.

<h2>Output</h2>

For each test case, print the maximum number of topics that Jocas has to study in a single day and the number of days that he will be desperate, in a single line.

<h2>Constraints</h2>

    1 ≤ n ≤ 300 000
    1 ≤ m ≤ 5 000 
    
    


<h1>Example</h1>

<b>Example input:</b>

    10 10 2
    0 1
    0 2
    1 3
    2 5
    3 5
    3 4
    6 7
    7 8
    7 9
    9 8

<b>Example output:</b>

    3 2
