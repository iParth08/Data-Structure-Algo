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

        mid = start + (end-start)/2;
    }

    //not found
    return -1;
  }
  ```

  ## Problems

  1. **First and Last Occurence**  | [CodeStudio](https://www.codingninjas.com/studio/problems/find-duplicate-in-array_1112602)
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
  2. **Peak Index in a Mountain Array** |  [Leetcode](https://leetcode.com/problems/peak-index-in-a-mountain-array/)
   - A mountain has two slopes
   - Slopes are strictly monotonic here
   - if there is no *return* in while loop, **start < end**

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
  
  3. **Pivot Element in a rotated Array** | [AddLink]()
   - A rotated array breaks down into two slopes - graphically
   - Each slope has a distinct feature against start & end
   - apply *Technique 2* to exploit the feature

   ```C++

    while(s<e){
            //rotated slope
            if(arr[mid] >= arr[0]){
                s = mid + 1;
            }
            //init slope
            else if(arr[mid] < arr[size-1]){
                e = mid;
            }

            mid = s+(e-s)/2;
        }

        return e;

   ``` 
  4. **Search in a rotated Array** | [CodeStudio](https://www.codingninjas.com/studio/problems/search-in-rotated-sorted-array_630450) 
   - *Approach I* - Find Pivot and then decide slope (2 step)
   - *Approach II* -
   - *Approach III* -


  5. **Find Square-root** | [LeetCode](https://leetcode.com/problems/sqrtx/)
   - Difine a Search space 
    
    ```C++

    // Technique 3 : Search Space
            long long int intSqrt(int num){
            int start = 0;
            int end = num;
            long long int mid = start + (end-start)/2;
            long long int approxAns = -1, square;

            while(start <= end){
                square = mid*mid; //can exceed int limit, so long long int

                if(square == num)
                    return mid; //perfect sqrt
                else if(square < num){
                    approxAns = mid;
                    start = start+1;
                }
                else{
                    end = mid-1;
                }

                mid = start+(end-start)/2;
            }

            return approxAns;
        }

    ```
  
  6. **Book Allocation** | [CodeStudio](https://www.codingninjas.com/studio/problems/ayush-gives-ninjatest_1097574)
  7. **Painter's Partition Problem** | [CodeStudio](https://www.codingninjas.com/studio/problems/ayush-gives-ninjatest_1097574)
  8. **Aggressive Cow Problem** | [CodeStudio](https://www.codingninjas.com/studio/problems/aggressive-cows_1082559)
   
   ```C++
   // Checking conditions for value selected from SEARCH SPACE
        bool isPossible(int *bookPages, int books, int students, int target){

        int studCount = 1;
        int pagesSum = 0;

        //go through each book
        for(int i=0; i<books; i++){

            if(pagesSum + bookPages[i] <= target){
                pagesSum += bookPages[i];
            }
            else{
                studCount++;
                if(studCount > students || bookPages[i] > target){
                    return false;
                }
                pagesSum = bookPages[i];
            }
        }

        return true;
        }
   ```
  9.  