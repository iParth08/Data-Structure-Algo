# Sorting Algorithms
Sorting refers to arranging data in order like ascending or descending.  
These algorithms do this efficiently with minimum use of memory and less **time complexity.**

## 1. Selection Sort

In every interation through array, it finds minimum value in rest array and swap it with right place of order.  
Its a stable algorithm as it preserve the order of occurence of repeating elements.  


*Number of rounds :*   Number of elements - 1   
*Space Complexity :*    O(1)         
*Time Complexity :*     O(n^2)    
> Best Case, Worst Case : O(n^2)  

**Best Suited for :**  Less number of elements  

---
***Algorithm***  

> Step 1 : Repeat step 2 - 4, (size-1) number of times.  
> Step 2 : For index **I**, find minimum value from the array.  
> Step 3 : Swap it with index **I** element.   
> Step 4 : Increment **I** by 1 and operate on unsorted part of array.  
> Step 5 : Exit.  

---

## 2. Bubble Sort


In every round, it compares two neighbour elements, and swap if prior is greater than later (for ascending order, reverse is true for descending), carrying greater element to right.  
 
Its a stable algorithm as it preserve the order of occurence of repeating elements.  


*Number of rounds :*   Number of elements - 1   
*Space Complexity :*    O(1)     
*Time Complexity :*     O(n^2)  

> Best Case : O(n)  
> Worst Case : O(n^2)  
>
> Bubble Sort **OPTIMIZED** code in repository.

**Best Suited for :**  Almost sorted arrays, find any sort error in sorted arrays.

---
***Algorithm***  

> Step 1 : Set **I = 0**  and iterate steps 2-4 till *SIZE-1* times.  
> Step 2 : Set *SWAPPED = false* and then repeat step 3 for *J=0* till *SIZE-I-1*.  
> Step 3 : If (arr[J] > arr[J+1]), Swap it and set *SWAPPED = true*. Else move on.   
> Step 4 : If *(SWAPPED = false)*, array is already sorted, go to step 5.  
> Step 5 : Exit.  

---

## 3. Insertion Sort


In every round, it compares next element against previously sorted elements, and insert the element directly after smaller element, by shifting greater element to right.  
 
Its a stable algorithm as it preserve the order of occurence of repeating elements.  
It is a very adaptive algorithm, after every round array becomes more sorted.


*Number of rounds :*   Number of elements - 1 
*Space Complexity :*    O(1)         
*Time Complexity :*     O(n^2)    
> Best Case : O(n)  
> Worst Case : O(n^2)  

**Best Suited for :**  Very adaptive algorithm. Partially sorted array, less crowded.

---
***Algorithm***  

> Step 1 : Consider **0th** element be sorted, iterate  step 2-4 for arr[1] to arr[SIZE].  
> Step 2 : Compare current element *ELM = arr[I]* against precedessors *arr[J]*.  
> Step 3 : If *(arr[J] > arr[I])*, shift elements to right. Else break the cycle.   
> Step 4 : Set *arr[J+1] = ELM*. 
> Step 5 : Exit.  

---

### RESOURCES

- [Selection Sort : GeeksforGeeks](https://www.geeksforgeeks.org/selection-sort/)
- [Bubble Sort : GeeksforGeeks](https://www.geeksforgeeks.org/bubble-sort/)
- [Insertion Sort : GeeksforGeeks](https://www.geeksforgeeks.org/insertion-sort/)

***Video Lectures***

- [Selection Sort : Love Babbar](https://youtu.be/UdO2NeHB46c?t=576)
- [Bubble Sort : Apna College](https://youtu.be/xcPFUCh0jT0?t=8)
- [Insertion Sort : Love Babbar](https://youtu.be/7kIVfVY6Axk?t=981)

### Signature

***Shwet Prakash***
