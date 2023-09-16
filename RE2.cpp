#include <bits/stdc++.h>
using namespace std;
string key = "ISPCLUB";
char encrypt_flag[36] = {36, 58, 62, 42, 15, 1, 4, 50, 103, 34, 38, 19, 44, 114, 60, 12, 34, 38, 120, 49, 59, 22, 39, 96, 28, 62, 102, 52, 122, 33, 35, 112, 19, 106, 63};
string encrypt(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        s[i] ^= key[i % 7];
    }
    return s;
}
int main()
{
    for(int i = 0; i < 36; i++){
    	encrypt_flag[i] ^= key[i%7];
		printf("%c", encrypt_flag[i]);
	}
}
