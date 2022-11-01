//2022.11.01
//�ⷨһ�������ⷨ
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        for (int i = 0; i < magazine.length(); i++) {
            for (int j = 0; j < ransomNote.length(); j++) {
                if (magazine[i] == ransomNote[j])
                    ransomNote.erase(ransomNote.begin() + j);
            }
        }
        if (ransomNote.length() > 0)
            return false;
        return true;

    }
};

//�ⷨ������ϣ�ⷨ����magazineΪ��׼
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int record[26] = { 0 };
        if (ransomNote.size() > magazine.size()) {
            return false;
        }
        for (int i = 0; i < magazine.size(); i++) {
            record[magazine[i] - 'a']++;
        }
        for (int i = 0; i < ransomNote.size(); i++) {
            record[ransomNote[i] - 'a']--;
            if (record[ransomNote[i] - 'a'] < 0)
                return false;
        }
        return true;

    }
};

//�ⷨ������ϣ�ⷨ����ransomNoteΪ����
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int record[26] = { 0 };
        if (ransomNote.size() > magazine.size()) {
            return false;
        }
        for (int i = 0; i < magazine.size(); i++) {
            record[magazine[i] - 'a']++;
        }
        for (int i = 0; i < ransomNote.size(); i++) {
            record[ransomNote[i] - 'a']--;
            if (record[ransomNote[i] - 'a'] < 0)
                return false;
        }
        return true;

    }
};