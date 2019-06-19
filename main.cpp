
/// Assignment 3, individual
/// Problem 2 page 828
/// Date: Nov 18th 2018
///input:array
///output:reversed order array
/// reversing all the letters between two bounds indexes in an array

#include <iostream>
#include <cstring>
#include <string>
#include <bits/stdc++.h>

using namespace std;
void switching ( char arr1[],int a, int b);
void reversed (string word);
int main()
{
    char arr[6]={'A','B','C','D','E'};
    cout << arr << endl;
    switching(arr,1,4);
    cout << arr << endl;
    string arr2(arr);
    reversed(arr2);
    cout << arr2 << endl;
    return 0;
}
// this function takes the word as a char array and a starting point
// and an ending point to the switching process
// author : Ahmed Mohammed Abdulwahab
// Date : 18th November 2018
// input : char array, starting point , ending point
// output: switched version of the word
void switching ( char arr1[],int a, int b)
{
    if (a>=b)
        return;
    swap (arr1[a],arr1[b]);
    switching(arr1, a+1, b-1);
}
// this function takes the word as a string and changes it to a char array
// and sends it to the switching function to switch the whole word
// author : Ahmed Mohammed Abdulwahab
// Date : 18th November 2018
// input : string word to be reversed
// output: reversed version of the word
void reversed (string word)
{
    int x = word.length();
    int y = 0;
    char word1[x+1];
    strcpy(word1,word.c_str());
    switching(word1,y,x);
}
