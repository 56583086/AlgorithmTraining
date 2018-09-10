#include <iostream>
#include <string>

using namespace std;

//������չ��
int LongestPalindrome(const string& s){
    int i,j,mmax,c;
    if(s.size() < 1){
        return 0;
    }
    mmax = 0;

    //iΪ���ĵ�����λ��
    for(i =0;i<s.size();++i){
        //���ĳ���Ϊ����
        for(j=0;(i-j >=0) && (i+j < s.size());++j){
            if(s[i-j] != s[i+j]){
                break;
            }
            c = j*2+1;
        }
        if(c>mmax){
            mmax = c;
        }
        //���ĳ���Ϊż�� leel
        for(j =0;(i-j>=0) && (i+j+1 < s.size());++j){
            if(s[i-j] != s[i+j+1]){
                break;
            }
            c = j*2+2;
        }
        if(c>mmax){
            mmax = c;
        }
    }
    return mmax;
}

int main()
{
    string s = "hello";
    string ss = "leelevel";
    cout<<LongestPalindrome(s)<<endl;
    cout<<LongestPalindrome(ss)<<endl;
    return 0;
}
