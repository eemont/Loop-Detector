# Loop-Detector

## Members :

<li>Emmanuel Montoya</li>
<li>Rouni Assaf</li>


## Description :

A wildlife monitoring system tracks animals using GPS data. Each animal's movements
are logged as a series of coordinates with paths they traveled. Your task is to determine if
any animal has returned to the same location.


A series of coordinates can be considered as nodes and paths traversed between them
as edges. Returning to the same location implies detection of a cycle in the path
traversed.


Problem Statement: Given the movement data of an animal in the form of coordinates
determine if there's a loop (cycle) in its path.


Input: The number of recorded coordinates 𝑛 and 𝑛 pairs of coordinates.
Output: "Loop detected" if a cycle exists, otherwise "No loop detected"

## How to Run code:

Run <code>./run.sh</code> command 

> If permissions denied: 
>> error code : "zsh: permission denied: ./run.sh"

>Run
>> chmod +x run.sh

If that also doesn't work, run code in online compiler.

## Testing Program Input/Output:

### Sample 1:

<code>Enter the number of recorded coordinates:</code>

<code>7</code>

<code>Enter the coordinate pairs:</code>

<code>0 1</code>

<code>1 2</code>

<code>2 3</code>

<code>3 4</code>

<code>4 5</code>

<code>5 2</code>

<code>4 6</code>

<code>Loop Detected</code>

### Sample 2:

<code>Enter the number of recorded coordinates:</code>

<code>5</code>

<code>Enter the coordinate pairs:</code>

<code>0 1</code>

<code>1 2</code>

<code>2 3</code>

<code>3 4</code>

<code>4 5</code>

<code>No Loop Detected</code>


 

