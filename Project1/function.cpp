#include <iostream>
#include <string>
#include <algorithm>
#include"head.h"

using namespace std;

string encryptDecrypt(string toEncrypt) {
    char key = 'K'; // ����ѡ��һ����Կ
    string output = toEncrypt;

    for (int i = 0; i < toEncrypt.size(); i++)
        output[i] = toEncrypt[i] ^ key;

    return output;
}

// �ȽϺ��������ڰ���ĸ˳�������ַ���
bool compare(string a, string b) {
    return a < b;
}
