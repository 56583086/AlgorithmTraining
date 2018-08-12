#include <iostream>
#include <string>
using namespace std;

//����һ��Ԫ�طŵ������
void LeftShiftOne(string &str,int n){
    char first = str[0]; //�����һ��Ԫ��
    for(int i=1;i<n;i++){
        str[i-1] = str[i];
    }
    str[n-1] = first;
}

//��ת�����ַ��� ʱ�临�Ӷ�O(mn),�ռ临�Ӷ�O(1)
void LeftRotateString(string &s ,int n, int m){
    while(m--){
        LeftShiftOne(s,n);
    }
}

int main()
{
    string s = "abcdef";
    LeftRotateString(s,s.size(),3);
    cout<<s<<endl;
    return 0;
}
