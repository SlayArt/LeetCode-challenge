def main(s):
    res = 0
    dico = {"I":1,"V":5,"X":10,"L":50,"C":100,"D":500,"M":1000}
    for i in range(len(s)-1):
        if dico[s[i]] > dico[s[i+1]]:
            res += dico[s[i]]
        elif dico[s[i]] < dico[s[i+1]]:
            res -= dico[s[i]]
        else:
            res += dico[s[i]]
    res += dico[s[len(s)-1]]
    return res
