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

## Samples :

### Sample 1:
Input : 7


[(0, 1), (1, 2), (2, 3), (3, 4), (4, 5), (5, 2), (4, 6)]

Output : Loop detected

### Sample 2:


Input : 6


[(0, 1), (1, 2), (2, 3), (3, 4), (4, 5)]


Output : No loop detected
