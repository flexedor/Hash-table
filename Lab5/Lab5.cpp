// Lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <string>
#pragma warning(disable : 4996)
const int ROZMIAR= 200000;
//#include<bits/stdc++>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std; 
//int x,y;
int hash_two(string first, string second) {
    string rez = first + second;
    int hash = 0;
    int index = rez.length();
    for (int i = 0; i < rez.length(); i++)
    {
        hash = (hash + (int)rez[i]) * 32;
    }

    index = hash % ROZMIAR; //453/100=4 r 53


    return abs(index);

 //  cout << s << endl;
  
}
int Hash(string key)
{
    int hash = 0;
    int index = 0;

    index = key.length();

    for (int i = 0; i < key.length(); i++)
    {
        hash = (hash + (int)key[i]) * 17;
    }

    index = hash % 500; //453/100=4 r 53


    return abs(index);
}
int main()
{
    char comand;
   // char str1[16],str2[16];
    string str1, str2;
    int num;
    int arr[ROZMIAR];
    while (scanf("%s", &comand) != EOF)
    {
        if (comand=='+')
        {
           
            cin >> str1;
            cin >> str2;
            cin >> num;
            
           /* x = Hash(str1);
            y = Hash(str2);*/
            int n = hash_two(str1, str2);
            if (arr[n] < 0)
            {
               
                arr[n] = num;
            }
            else {
                
                arr[n] += num;
            }
            

        }
        else if (comand == '?') {
            cin >> str1;
            cin >> str2;
           // cout << hash_two(str1, str2) << endl;
            int n = hash_two(str1, str2);
            if (arr[n] < 0)
            {
                cout << 0 << endl;

            }
            else {
                cout<< arr[n] << endl;
            }
            
       
        }
    }

}

