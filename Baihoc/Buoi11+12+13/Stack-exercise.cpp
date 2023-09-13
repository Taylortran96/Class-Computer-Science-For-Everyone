// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.

// Example 1:

// Input: s = "()"
// Output: true
// Example 2:

// Input: s = "()[]{}"
// Output: true
// Example 3:

// Input: s = "(]"
// Output: false

// Constraints:

// 1 <= s.length <= 104
// s consists of parentheses only '()[]{}'.

#include <iostream>
#include <math.h>
#include <stack>
#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    bool inValid(string s)
    {
        stack<char> st;

        for (int i = 0; i < s.size(); i++)
        {
            switch (s[i])
            {
            case '(':
            case '[':
            case '{':
                st.push(s[i]);
                break;

            case ')';
            if(st.empty() || st.top != '('){
                return false;
            }
            st.pop();
            break;
            
            case '}';
            if(st.empty() || st.top != '{}'){
                return false;
            }
            st.pop();
            break;


            case ']';
            if(st.empty() || st.top != '['){
                return false;
            }
            st.pop();
            break;

        }
        }
        if(st.empty())
            return true;
        else 
            return false;
    }
};

        // Gặp mở ngoặc thì cho vào stack
        //  Đóng ngoặc thì check vs đỉnh stack xem có cùng 1 cấp k?
        //  Có -- đưa dấu đó ra khỏi stack
        //  Sau khi duyệt chuỗi, stack rỗng là dấu ngoặc đúng - Stack không rỗng là dấu ngoặc sai