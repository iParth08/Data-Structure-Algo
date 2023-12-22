## Searching Algorithm

Ways to search for an element in data-structure efficiently with minimum use of memory and less **time complexity.**

## 1. Linear Search

Tranverse through each and every entry until desired element is found. Else return -1.

*Applies on :* Anywhere, no prequiste  
*Time complexity :* O(n)  
**Best Suited :** Unsorted, less entry 

---
***Algorithm***  

> Step 1: Let *INDEX* = 0.  
> Step 2: Repeat Step 3, 4 while *INDEX < SIZE*.  
> Step 3: If (Element at INDEX = KEY) then return INDEX.  
> Step 4: INDEX = INDEX + 1.  
> Step 5: Return -1.  

---

## 2. Binary Search

Binary Search is a searching algorithm used in a 
sorted array by repeatedly dividing the search 
interval in half and comparing mid-term to desired 
key.  

*Applies on :*  Sorted monotonic function  
*Time complexity :* O(log n)  
**Best Suited :** Sorted Array, Can hand large entry.  

---

***Algorithm***  

> Step 1:   Start with *MID* index of array.  
> Step 2:   While(START <= MID), repeat Step 3 to 6.  
> Step 3:   If (search key = *MID* element), return *MID*  
> Step 4:   Else if (key > *MID* element), set *START = MID+1* and narrow search to upper half of array.  
> Step 5:   Otherwise, *set END = MID-1*, and narrow search to lower half of array.   
> Step 6:   Update *MID = (START + END)/2*.  
> Step 7:   Return -1, in case element not found.  

---
**Resource to learn**  

- [Binary Search Video Explaination](https://youtu.be/YJeoQBevNVo)

### Signature
***Shwet Prakash***
