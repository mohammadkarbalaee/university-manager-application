#ifndef UNTITLED1_DANESH_AMOOZ_H
#define UNTITLED1_DANESH_AMOOZ_H
#include "string"
class danesh_amooz
{
private:
    string esm;
    string famili;
    int code_melli;
    int rooz_tavallod;
    int mah_tavallod;
    int sal_tavallod;
public:
    string getEsm(){
        return esm;
    }
    void setEsm(string esm) {
        danesh_amooz::esm = esm;
    }
    string getFamili(){
        return famili;
    }
    void setFamili(string famili) {
        danesh_amooz::famili = famili;
    }
    int getCodeMelli(){
        return code_melli;
    }
    void setCodeMelli(int codeMelli) {
        code_melli = codeMelli;
    }
    int getRoozTavallod() {
        return rooz_tavallod;
    }
    void setRoozTavallod(int roozTavallod) {
        rooz_tavallod = roozTavallod;
    }
    int getMahTavallod() {
        return mah_tavallod;
    }
    void setMahTavallod(int mahTavallod) {
        mah_tavallod = mahTavallod;
    }
    int getSalTavallod(){
        return sal_tavallod;
    }
    void setSalTavallod(int salTavallod) {
        sal_tavallod = salTavallod;
    }
};
#endif //UNTITLED1_DANESH_AMOOZ_H
