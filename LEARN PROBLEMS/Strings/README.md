# Character Array and Strings

## Basic Concepts
- char stores single character
- string is like 1-D character Arrays 

    ```C++
        char ch = 'S';
        char ch_arr[10];
        //ch_arr = "Shwet"; --> can not be modified like strings

        cin >> ch_arr; // saved as {S,h,w,e,t,\0} \0 is used as a terminator
        cout << ch_arr;  

        cin.getline(ch_arr, 20, '$');
        cout << ch_arr;  
    ```
- **Basic Features of String and Char Array**
  
    ```C++
    //Character array
    int len = strlen(str);
    int isEqual = strcmp(s1, s2); // 0 for equal, 


    //string
    int len = str.length();

    ```
## Problems

1. **Reverse Vowels in a String** | [LeetCode](https://leetcode.com/problems/reverse-vowels-of-a-string/)
   - *Apply two pointers*
   - Ignorance is bliss
  
  ```C++
        //not (st <= en)
    while(st < en){

        if(isVowel(str[st]) && isVowel(str[en])){
            // cout << "swapp :" << str[st] << str[en] <<endl;
            swap(str[st], str[en]);
            st++;
            en--;
        } 

        // cout << "cursor :" << str[st] << str[en] <<endl;
        if(!isVowel(str[st])){
            st++;
        } 
        if(!isVowel(str[en])){
          en--;  
        } 
    }
  ```
2. **Check if Palindrome** |  [CodeStudio](https://www.codingninjas.com/studio/problems/check-if-the-string-is-a-palindrome_1062633)
3. **Valid Palindrome** | [LeetCode](https://leetcode.com/problems/valid-palindrome/)
   - Find Space Complexity O(1) approach
4. **Reverse Words in a string** | [**Premium**]
   - *Window technique ?*
5. **Most Frequent Char in a String** | [GeeksForGeeks](https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1)
    - *Generate a Frequency array*
    - *Hashing Like ??*

6. **Remove all occurences of a substring** | [LeetCode](https://leetcode.com/problems/remove-all-occurrences-of-a-substring/)
   
   ```C++
   //STL CAN SAVE EFFORTS

        while(s.length() !=0 && s.find(part) < s.length()){
            s.erase(s.find(part), part.length());
        }

   ```

7. **String Compression** | [LeetCode](https://leetcode.com/problems/string-compression/)
8. **Permutation in String** | [LeetCode](https://leetcode.com/problems/permutation-in-string/)
   
   ```C++
   // Technique 05. SLIDING WINDOW

        //Initiate window
        int j = 0;
        int windowSize = s1.length();
        int keep[26] = {0};

        while(j < windowSize && j < s2.length()){
            int idx = s2[j] - 'a';
            keep[idx]++;
            j++;
        }

        //check if first window succeeded
        if(isMatch(count, keep))
            return 1;

        //Slide the window, from j onwards
        while(j < s2.length()){

            //add next char
            int nIdx = s2[j] - 'a';
            keep[nIdx]++;

            //remove old char
            int rIdx = s2[j-windowSize] - 'a';
            keep[rIdx]--;

            j++;

            //check if permutation found
            if(isMatch(count, keep))
                return 1;

        }
   ```
9.  **Remove all adjacent duplicates** | [LeetCode](https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/)
10. **Replace Space with strings [in-place]** | [CodeStudio](https://www.codingninjas.com/studio/problems/replace-spaces_1172172)
11. 









