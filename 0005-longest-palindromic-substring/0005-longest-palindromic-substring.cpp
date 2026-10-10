class Solution {
public:
    string longestPalindrome(string s) {

        int max_length = 0;

        
        string max_string = "";

       for (int center = 0; center < s.length(); center++){
            int l = center;
            int r = center;

            bool condition = true;

            int count = 0;

            while (condition){
               if (s[l] == s[r]){

                    if (r - l + 1 > max_length){
                        max_length = r - l;
                        max_string = s.substr(l, r - l + 1);
                    }


                    r += 1;
                    l -= 1;


               } else {
                    condition = false;
               }

               if (l < 0){
                condition = false;
               } 

               if (r > s.length()){
                condition = false;
               }
            }

            condition = true;

             l = center;
             r = center + 1;
            while (condition){
               if (s[l] == s[r]){

                    if (r - l + 1 > max_length){
                        max_length = r - l;
                        max_string = s.substr(l, r - l + 1);
                    }


                        r += 1;
                        l -= 1;


               } else {
                    condition = false;
               }

               if (l < 0){
                condition = false;
               } 

               if (r > s.length()){
                condition = false;
               }
            }
       }

       return max_string; 
    }
};