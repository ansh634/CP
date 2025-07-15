class Solution {
public:
    bool isValid(string word) {
        if (word.size()<3){return false;}
        int vowels=0;
        int consonents=0;
        for (char ch :word){
            if (!isalnum(ch)){return false;}
            if (isalpha(ch)){
                char lower=tolower(ch);
                if (lower=='a'||lower=='e'||lower=='i'||lower=='o'||lower=='u'){
                    vowels++;
                }
                else{consonents++;}
            }
        }
        return(vowels>0&&consonents>0);
    }
};