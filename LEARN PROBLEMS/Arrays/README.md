# Problems on Arrays

## Problems

1. **Reverse an Array** | [CodeStudio](https://www.codingninjas.com/studio/problems/reverse-the-array_1262298)
   - *Approach 1 - Swap elements at start-end pointer*
   
   ```C++
      //04. Two Pointers - tracking two end positions
      void twoPointerReverse(vector<int>& arr){
         int s = 0;
         int e = arr.size()-1;

         while(s <= e){
            swap(arr[s], arr[e]);
            s++;
            e--;
         }
      }
      ```
2. **Merge Two Sorted Array into another** 
   - *Think it like merge sort*
  
3. **Move Zeroes to Right** | [LeetCode](https://leetcode.com/problems/move-zeroes/)
   - *Apply Morphism with Selection Sort*
   - Select the desired
   
   ```C++
      void shiftZeroes(vector<int>& arr){
         // Selection of desired
         int nonZeroPos = 0;
         for(int i=0; i<arr.size(); i++){

            if(arr[i] != 0)
                  arr[nonZeroPos++] = arr[i];
         }

         while (nonZeroPos < arr.size()) 
            arr[nonZeroPos++] = 0;
         
      }
   ```  
4. **Merge small sorted into big sorted array** | [LeetCode](https://leetcode.com/problems/merge-sorted-array/)
5. **Rotate an Array** | [LeetCode](https://leetcode.com/problems/rotate-array/description/)
   - *Approach 1 : Take a temp array and perform rotated-placement*
   - *Approach 2 :*
   
6. **Is sorted and rotated array** | [LeetCode](https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/)
   - *Approach 1 : Observe and apply check on its property*


7. **Sum of two arrays** | [CodeStudio](https://www.codingninjas.com/studio/problems/painter-s-partition-problem_1089557)
   - *Approach : Apply two pointers*
   - Engineer all the test cases beforehand and handle them carefully
   - Think about gate logic

8. 