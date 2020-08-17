International Morse Code defines a standard encoding where each letter is mapped to a series of dots and dashes, as follows: "a" maps to ".-", "b" maps to "-...", "c" maps to "-.-.", and so on.

For convenience, the full table for the 26 letters of the English alphabet is given below:

[".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
Now, given a list of words, each word can be written as a concatenation of the Morse code of each letter. For example, "cba" can be written as "-.-..--...", (which is the concatenation "-.-." + "-..." + ".-"). We'll call such a concatenation, the transformation of a word.

Return the number of different transformations among all words we have.

Example:
Input: words = ["gin", "zen", "gig", "msg"]
Output: 2
Explanation: 
The transformation of each word is:
"gin" -> "--...-."
"zen" -> "--...-."
"gig" -> "--...--."
"msg" -> "--...--."

There are 2 different transformations, "--...-." and "--...--.".
Note:

The length of words will be at most 100.
Each words[i] will have length in range [1, 12].
words[i] will only consist of lowercase letters.

=====================================

https://leetcode.com/problems/unique-morse-code-words/

=====================================

AC 3��(Ver2���ϥ�set�`�ٰO����BVer3�Ntable�אּ�@��}�C�٥h���t�O���骺�ɶ�)

Runtime: 8 ms, faster than 19.95% of C++ online submissions for Unique Morse Code Words.
Memory Usage: 10.6 MB, less than 7.69% of C++ online submissions for Unique Morse Code Words.

Runtime: 8 ms, faster than 19.95% of C++ online submissions for Unique Morse Code Words.
Memory Usage: 9 MB, less than 76.92% of C++ online submissions for Unique Morse Code Words

Runtime: 4 ms, faster than 83.81% of C++ online submissions for Unique Morse Code Words.
Memory Usage: 9 MB, less than 76.92% of C++ online submissions for Unique Morse Code Words.