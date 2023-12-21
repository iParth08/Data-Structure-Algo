# Problems with Binary Search

## Intro to Concept
- Binary Search is applicable only on monotonic functions
- Arrays should be sorted
  
  **Base Code :: O(logN)**
  ```C++
  //suppose, Array is sorted in Non-decreasing order

  int binarySearch(int *arr, int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

    while(start <= end){

        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    //not found
    return -1
  }
  ```

  ## Problems

  1. *First and Last Occurence*  | [CodeStudio](https://www.codingninjas.com/studio/problems/find-duplicate-in-array_1112602)
    ```C++
    // Technique 02 :: [MORPHISM] - Modification in Base

    int lastOcc;

    while(start <= end){
        if(arr[mid] == key){
            //once found, move in direction to get more
            lastOcc = mid;
            start = mid + 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
         mid = start + (end - start)/2;
    }

    return lastOcc;
    ```
  2. *Peak Index in a Mountain Array* |  [Leetcode](https://leetcode.com/problems/peak-index-in-a-mountain-array/)
   - A mountain has two slopes
   - Slopes are strictly monotonic here
   - **Apply Technique 2**

   ```C++
   // Technique 2 : [Morphism] -- modify array as two slopes
    while(start < end){

            //increasing slope
            if(arr[mid] < arr[mid+1]){
                start = mid+1;
            }
            //decreasing slope
            else{
                end = mid;
            } 

            mid = start + (end - start)/2;
        }
   ``` 
  
  3. *Pivot Element in a rotated Array* | 