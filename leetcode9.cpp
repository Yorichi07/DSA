// Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

// In other words, return true if one of s1's permutations is the substring of s2.\

class Solution {
private:
    bool checkEqual(int c1[26],int c2[26]){
        for(int i=0;i<26;i++){
            if(c1[i]!=c2[i]){
                return 0;
            }
        }   
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {
        
        //character count array
        int count1[26]={0};
        for(int i=0;i<s1.length();i++){
            int index=s1[i]-'a';
            count1[index]++;
        }

        //traverse s2 string in window of size s1 length and compare
        int i=0;
        int windowSize=s1.length();
        int count2[26]={0};     //stores count of characters inside window

        //running for 1st window
        while(i<windowSize && i<s2.length()){
            int index=s2[i]-'a';
            count2[index]++;
            i++;
        }

        if(checkEqual(count1,count2)){
            return 1;
        }

        //aage ki windows ke lie
        while(i<s2.length()){
            char newChar=s2[i];
            int index= newChar - 'a';
            count2[index]++;

            char oldChar=s2[i-windowSize];
            index= oldChar - 'a';
            count2[index]--;

            i++;

            if(checkEqual(count1,count2)){
                return 1;
            }
        }
        return 0;
    }
};