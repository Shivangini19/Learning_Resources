class Solution {
public:
    int strStr(string haystack, string needle) {
        
        for (int i=0;i<haystack.size();i++)
        {
            if (haystack[i]==needle[0]) 
            {               
                int k=0;
                for (int j=0;j<=needle.size();j++)
                {
                    if (k==needle.size())return i;
                    if (haystack[j+i]!=needle[k])break;
                    k++;
                }
            }
        }
     return -1;   
    }
};
