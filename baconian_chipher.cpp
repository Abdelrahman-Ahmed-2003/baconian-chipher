// FCAI – Programming 1 – 2022 - Assignment 2
// Program Name: xxxxxx.cpp
// Program Description: solve baconian chipher
// Last Modification Date: 20/03/2022
// Author1 and ID and Group: Abdelrahman Ahmed Adel  ID : 20210194
// Teaching Assistant: xxxxx xxxxx
// Purpose:solve baconian chipher

#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main() {
    string word  , bin1 ,  z , str1 ;
    /* word is input which taken from user.
     bin1 is binary os word.
     str1 is decipher.
     code is cipher.*/
    int num , x = 4 , bin2 = 0;
    cout <<"if you want to cipher word entre 1 or you want to decipher word entre 2 \n";
    cin>>num;
    if (num == 1) {
        cout<<"entre word with capital letter \n";
        cin >> word;
        for (int i = 0; i < word.length(); i++) {
            string code;
            word[i] = char(word[i] - 65);
            //convert string to binary to a or b.
            bin1 = bitset<5>(word[i]).to_string();
            for (int j = 0; j < bin1.length(); j++) {
                z = bin1[j];
                if (z == "0")
                    code += "a";
                else
                    code += "b";
            }
            cout << code << " ";
        }
    }


    else{
        cout<<"entre word without any spaces \n";
        cin >> word;
        //convert a or b to binary to string without spaces.
        for (int k = 0; k < word.length(); k++) {
            z = word[k];
            if (z == "a")
                bin2 += 0;
            else if (z == "b")
                bin2 += (pow(2 , x));
            x -= 1;
            if (x == -1){
                x = 4;
                str1 += char(bin2 + 65);
                bin2 = 0;
            }
        }
        cout<< str1 <<endl;
    }
}