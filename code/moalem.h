#ifndef UNTITLED1_MOALEM_H
#define UNTITLED1_MOALEM_H
#include "string"
using namespace std;
class moalem
{
private:
    string esm;
    string famili;
    int code_melli;
    int rooz_tavallod;
    int mah_tavallod;
    int sal_tavallod;
public:
    const string &getEsm() const {
        return esm;
    }
    void setEsm(const string &esm) {
        moalem::esm = esm;
    }
    const string &getFamili() const {
        return famili;
    }
    void setFamili(const string &famili) {
        moalem::famili = famili;
    }
    int getCodeMelli() const {
        return code_melli;
    }
    void setCodeMelli(int codeMelli) {
        code_melli = codeMelli;
    }
    int getRoozTavallod() const {
        return rooz_tavallod;
    }
    void setRoozTavallod(int roozTavallod) {
        rooz_tavallod = roozTavallod;
    }
    int getMahTavallod() const {
        return mah_tavallod;
    }
    void setMahTavallod(int mahTavallod) {
        mah_tavallod = mahTavallod;
    }
    int getSalTavallod() const {
        return sal_tavallod;
    }
    void setSalTavallod(int salTavallod) {
        sal_tavallod = salTavallod;
    }
};
#endif //UNTITLED1_MOALEM_H