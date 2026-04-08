//roman to integer
#include<iostream>
using namespace std;

string s(int num)
{
    if(num >= 1000)
    return "M";
    else if(500 <= num && num < 1000)
    return "D";
    else if(100 <= num && num < 500)
    return "C";
    else if(50 <= num && num < 100)
    return "L";
    else if(10 <= num && num < 50)
    return "X";
    else if(5 <= num && num < 10)
    return "V";
    else if(1 <= num && num < 5)
    return "I";
}

string intToRom(int num)
{
    string result = "";

    while(num > 0)
    {
        if(num!= 4 && num != 9)
            {
                if(num >= 1000)
                {
                    result += s(1000);
                    num -= 1000;
                }
                else if(500 <= num && num< 1000)
                {
                    result += s(500);
                    num -= 500;
                }
                else if(100 <= num && num< 500)
                {
                    result += s(100);
                    num -= 100;
                }
                else if(50 <= num && num< 100)
                {
                    result += s(50);
                    num -= 50;
                }
                else if(10 <= num && num< 50)
                {
                    result += s(10);
                    num -= 10;
                }
                else if(5 <= num && num< 10)
                {
                    result += s(5);
                    num -= 5;
                }
                else if (1 <= num && num< 5)
                {
                    result += s(1);
                    num -= 1;
                }
            }
    }
    return result;
};

int main()
{
    int n;
    cin >>n;
    cout << intToRom(n);
}