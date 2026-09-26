// class Solution {
// public:
//     string largestOddNumber(string num) {
//           int value = stoi(num);
//           int max = -1;
//           int n;
//           for(int i=0 ; i<num.size();i++){
//             n = value%10;
//             if(n%2!=0 && n>max){
//                 max = n;
//             }
//             value = value/10;
             
//           }
//           if(max == -1) {
//             return "";
//           }
//           else{
//             return to_string(max);
//           }
        
//     }
// };


class Solution {
public:
    string largestOddNumber(string num) {
        for (int i = num.size() - 1; i >= 0; i--) {
            if ((num[i] - '0') % 2 == 1) {
                return num.substr(0, i + 1);
            }
        }
        return "";
    }
};
