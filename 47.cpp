/*-Queue is define inside <queue> headerfile.
- There are mainly five types of queue:
1) Simple queue (linear queue):

2) Circular queue:
    The last position is connected back to the first to make a circle.
    - It prevents wastage of space in a linear queue.
3) Priority queue: 
    Elements are based on priority, not just an order.
    -Higher priority elements are dequeued before lower ones.
4) Double ended queue(Dequeue):
    Insertion and deletion can happen at both ends(front and rear)
    (i) Input restricted queue
    (ii) Output restricted queue

Searching:
Search element one by one. 
They are of mainly two types:
 1) Linear Search:
    Search element one by one:
    Complexity:  O(n).
    
Algorithm:
(1) Start from 
(2) Find the smallest element in the unsorted part of the array.
(3) Swap it with the first element of the unsorted part.
(4) Move the boundary of the sorted. 
    
 2) Bubble Sort:
 Algo:
 (i) Start from the first element
 (ii) Compare each pair of adjacent elements.
 (iii) If the left element is greater , swap them.
 (iv) Repeat the process for all elements.
 (v) After each pass, the largest element bubbles to the end.
 (vi) Continue for n-1 passes or until no swaps are needed.
 -Time complexity:
 Best Case: 0(n);
 Worst Case: 0(n^2);
 Avg Case: O(n^2);

 3) Insertion Sort:
 Algo:
 Insertion sort is a simple comparison-based sorting algorithm.
 It build the final sorted array one element at a time, just like how you sort card in your hand.
 Algo:
 (i) Start from the second element(index 1).
 (ii) Compare it with the elements before it.
 (iii) Shift the larger elements one position to the right.
 (iv) Insert the current element at its correct position.

 Complexity:
1) Best case : O(n);
2) Avg Case : O(n^2);
3) Worst Case : 0(n^2);

4) Merge Sort:
Merge Sort is a device and conquer algorithm that:
 -Divides the input array into two halves
 -Recursively sorts them 
 -Merges the sorted halves to produce the final sorted array.

Algo:
(i) Divide the array into two halves until each subarray has 1 element.
(ii) Conquer by recursively sorting the subarrays.
(iii) Combine by merging two sorted arrays into one.

Time Complexity: 
Best: O(n log n);
Avg: o(n log n);
Worst: 0(n log n);

Space Complexity: 
    O(n) in  any every case: 
    

5) Tree:
    Tree data structure is a hierarchical structure that consists of nodes connected by edges. It is a widely used
    abstract data type that simulates a hierarchical tree structure, with root value and subtrees of children. 
    
Node: Each element in a tree us called a node, it contains a value or data.
Root: The topmost node in a tree is called the root. 
      It is the only node that has no parent.
Edge: The connection between two nodes is called an edge.
Child: A node that is directly connected to another node which moving away from the root is called child.
Parent: A node that has one or more child nodes is called a parent.
Leaf: A node that does not have any child is called a leaf or terminal node.
Subtree: A subtree consists of a node and all of its descendants.
Depth: The depth of a node is the number of edges from the root to the node.
       -depth of E is 2.
       -depth of H is 3.
       -depth of J is 4.
Height: The height of a node is the number of edges on the longest path from the node to a leaf.
       -In the given tree height is 4.
Level: The level of a node is the number of edges on the path from the root to the node.
       -A is level 0.
       -B, C is level 1.
       -D, E, F, G is level 2.
       -H is level 3.
       -I, J is level 4.       
Binary Tree:
        A type of tree where each node has at most two children.
Balanced Tree: 
        A type of tree where each node has at most two children.
Tree Traversing: 
There are mainly two type of traversing in a tree:
    1) DFS: Depth-first search it explores as far as possible along each branch before backtracking.
    2) BFS: Breadth  first search explores neighbors before moving to the next level, 
            typically using queue.
Binary Search Tree(BST):
     A binary tree where each node has a value, and the left subtree of a node contains only nodes with values
     less than the node's value, and the right subtree contains only nodes with value greater than the node's value.
 In DFS they are of three type:
    1) Pre-order traversal 
    2) In-order traversal
    3) Post-order traversal 
Properties of Binary Tree:
- Maximum node at level L = 2^L
- Maximum nodes in a tree of height H is 2^H-1.

6)n Map:
In C++ STL , a map is a container that stores element in key-value pairs. It is part of the Standard Template Library
(STL) and is based on self-balancing binary search trees(also known as Red-Black Trees).
 Properties:
    - It stores valuein key-value pairs.
    - Each key is unique.
    - Automatically stores key in sorted(ascending) order.
    - Define inside header file <map>

    Complexity:
    Insertion: O(log n)
    Deletion: O(log n)
    Access: O(log n)
    Search: O(log n)
    Traversal: O(n)
    #Functions:
    1) Insert( {key, value});
    2) Erase(k), k is easy
    3) Find(k)
    4) Clear(), remove all elements
    5) Size(), return number of elements
    6) Empty(), check if map is empty.

Unordered_map:
    -It is an associative container that stores elements as key-value pairs.
    -Unlike map, it does not maintain any order of keys.
    -It uses a hash table for fast access.
    -Keys must be unique.
    -It define inside <unordered_map> header file.
    Complexity:
        Insertion: O(1)
        Deletion: O(1)
        Access: O(1)
        Search: O(1)

        -Some time when all keys collide and end up in a single bucket in this case complexity will be O(n).
        
Graph:
A graph is a non-linear data structure consisting of nodes and edges.
Real life examples:
1) Social Networks
2) Google maps
3) Network topologies 

Main types of graph:
1) Undirected
2) Directed
3) Weighted
4) Cyclic

Representation of Graph:
1) Adjacency Matrix:
A 2D matrix array of size V x V, where V is the number of vertices.
        -matrix[i][j] = 1: indicates an edge exists between vertex i and j.
        -matrix[i][j] = 0: indicates no edge exists between vertex i and j.

2) Adjacency List:


*/
