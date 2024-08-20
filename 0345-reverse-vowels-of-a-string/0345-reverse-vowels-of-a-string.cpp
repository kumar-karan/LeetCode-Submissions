class Solution {
public:
    string reverseVowels(string s) 
    {
        int size = s.size();
        string vowel = "";
        for(auto x: s)
        {
            if(x == 'a' ||x == 'e' ||x == 'i' ||x == 'o' ||x == 'u' ||
                x == 'A' ||x == 'E' ||x == 'I' ||x == 'O' ||x == 'U')
            {
                vowel.push_back(x);
            }
        }

        // reverse(vowel.begin(), vowel.end());
        for(int i=0; i<size; i++)
        {
            char x = s[i];
            if(x == 'a' ||x == 'e' ||x == 'i' ||x == 'o' ||x == 'u' ||
                x == 'A' ||x == 'E' ||x == 'I' ||x == 'O' ||x == 'U')
            {
                int ch = vowel.back();
                vowel.pop_back();
                s[i] = ch;
            }
            
        }

        return s;
    }
};