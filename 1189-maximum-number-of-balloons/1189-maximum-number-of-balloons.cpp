class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>a;
        for(int i=0;text[i]!='\0';i++)
        {
            if(text[i]=='b'||text[i]=='a'||text[i]=='l'||text[i]=='o'||text[i]=='n')
            {
                a[text[i]]++;
            }
        }
   return min({a['b'], a['a'], a['l']/2, a['o']/2, a['n']});

    }
};