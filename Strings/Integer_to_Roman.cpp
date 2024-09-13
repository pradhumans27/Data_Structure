/*The link of the problem is given below :-
https://leetcode.com/problems/integer-to-roman/description/
*/
class Solution {
public:
    string intToRoman(int num) {
        string res = "";
        while(num>=1000)
        {
            res = res+ "M";
            num = num-1000;

        }
        if(num>=900)
        {
            res = res + "CM";
            num = num-900;
        }

        while(num>=500)
        {
            res = res+ "D";
            num = num-500;

        }
        if(num>=400)
        {
            res = res + "CD";
            num = num-400;
        }

         while(num>=100)
        {
            res = res+ "C";
            num = num-100;

        }
        if(num>=90)
        {
            res = res + "XC";
            num = num-90;
        }

          while(num>=50)
        {
            res = res+ "L";
            num = num-50;

        }
        if(num>=40)
        {
            res = res + "XL";
            num = num-40;
        }
          while(num>=10)
        {
            res = res+ "X";
            num = num-10;

        }
        if(num>=9)
        {
            res = res + "IX";
            num = num-9;
        }

          while(num>=5)
        {
            res = res+ "V";
            num = num-5;

        }
        if(num>=4)
        {
            res = res + "IV";
            num = num-4;
        }

        while(num>=1)
        {
            res = res + "I";
            num = num-1;
        }
        return res;
    }
};