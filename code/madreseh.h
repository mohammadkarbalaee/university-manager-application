#ifndef UNTITLED1_MADRESEH_H
#define UNTITLED1_MADRESEH_H
class madreseh
{
private:
    string esm;
    int code_madreseh;
public:
    string getEsm(){
        return esm;
    }
    void setEsm(string esm){
        madreseh::esm = esm;
    }
    int getCodeMadreseh(){
        return code_madreseh;
    }
    void setCodeMadreseh(int codeMadreseh){
        code_madreseh = codeMadreseh;
    }
    kelas kelasha[10];
};
#endif //UNTITLED1_MADRESEH_H
