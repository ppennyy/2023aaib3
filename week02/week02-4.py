class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        d = {}
        for c in s:
            if c in d:
                d[c] = d[c] + 1
            else:
                d[c] = 1
        print(d)

        for c in t:
            if c not in d: # ���M�S�X�{�L, �ӧ�F, ���F, �N�O��
                return c # ���h�X�Ӫ��r��
            if d[c] == 0: # �r���Υ��F, ������, �N�O��
                return c # ���h�X�Ӫ��r���F
            else:
                d[c] = d[c] - 1 # �N²�檺�1

        return "" # �o��S�g�]�S���Y, �]���D�ثO�Ҥ@�w�b�e���N��쵪�פF
