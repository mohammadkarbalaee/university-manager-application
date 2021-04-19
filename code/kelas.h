#ifndef UNTITLED1_KELAS_H
#define UNTITLED1_KELAS_H
#include "string"
class kelas
{
private:
    string esm;
    int code_kelas;
public:
    string getEsm(){
        return esm;
    }
    void setEsm(string esm) {
        kelas::esm = esm;
    }
    int getCodeKelas(){
        return code_kelas;
    }
    void setCodeKelas(int codeKelas) {
        code_kelas = codeKelas;
    }
    danesh_amooz daneshamoozha[30];
    moalem moalem_kelas;
};
#endif //UNTITLED1_KELAS_H
