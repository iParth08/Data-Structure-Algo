# Character Array and Strings

## Basic Concepts
- char stores single character
- string is like 1-D character Arrays
- 

    ```C++
        char ch = 'S';
        char ch_arr[10];
        //ch_arr = "Shwet"; --> can not be modified

        cin >> ch_arr; // saved as {S,h,w,e,t,\0} \0 is used as a terminator
        cout << ch_arr;  
        
        cin.getline(ch_arr, 20, '$');
        cout << ch_arr;  
    ```
## Problems
