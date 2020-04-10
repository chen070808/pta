#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
//int main()
//{
//    char s[101];
//    char stack[101];
//    int top = -1;
//    while (gets_s(s))
//    {
//        if (s[0] == '.') break;
//        int len = strlen(s);
//        for (int i = 0; i < len; i++)
//        {
//            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
//            {
//                stack[++top] = s[i];
//            }
//            else if (s[i] == '/' && s[i + 1] == '*' && i + 1 < len)
//            {
//                i++;
//                s[++top] = '<';
//            }
//            if (s[i] == ')')
//            {
//                if (s[top] == '(')
//                {
//                    top--;
//                }
//                else {
//                    printf("NO\n?-%c", s[i]);
//                    return 0;
//                }
//            }
//            else if (s[i] == ']')
//            {
//                if (s[top] == '[')
//                {
//                    top--;
//                }
//                else {
//                    printf("NO\n?-%c", s[i]);
//                    return 0;
//                }
//            }
//            else if (s[i] == '}')
//            {
//                if (s[top] == '{')
//                {
//                    top--;
//                }
//                else {
//                    printf("NO\n?-%c", s[i]);
//                    return 0;
//                }
//            }
//            else if (s[i] == '*' || s[i + 1] == '/')
//            {
//                if (s[i] == '*' && s[i + 1] == '/' && i + 1 < len)
//                {
//                    i++;
//                    if (stack[top] == '<')
//                    {
//                        top--;
//                    }
//                    else {
//                        printf("NO\n?-*/");
//                        return 0;
//                    }
//                }
//                else {
//                    printf("NO\n/*-?");
//                    return 0;
//                }
//            }
//        }
//    }
//    if (top == -1)
//    {
//        printf("YES\n");
//    }
//    else
//    {
//        if (stack[top] == '<')
//        {
//            printf("NO\n/*-?");
//        }
//        else
//            printf("NO\n%c-?", stack[top]);
//    }
//    return 0;
//}