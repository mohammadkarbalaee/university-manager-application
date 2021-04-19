#include <iostream>
#include "stdio.h"
#include "string"
#include "moalem.h"
#include "danesh_amooz.h"
#include "kelas.h"
#include "madreseh.h"
using namespace std;

const int tedad_daneshamooz = 30;
const int tedad_class = 10;

madreseh gereftan_etelaat_madreseh();
void neshan_dadan_etelaat_class(kelas kelas);
void neshan_dadan_hame_etelaat(madreseh inn_madreseh);
void moratab_sazi(int tedad_madares, int *code_hame_marares);
void nemayesh_menu_asli();
void yek(int tedad_madares, madreseh *madares);
void dovvomi(int tedad_madares,madreseh *madares, int *code_hame_marares);
void sevvomi(int tedad_madares,madreseh *madares);
void panjomi(int tedad_madares,madreseh *madares);
void chaharomi(int tedad_madares, madreseh *madares);
void shishomi(int tedad_madares,madreseh *madares);
void haftomi(int tedad_madares, madreseh *madares);
void nohomi(int tedad_madares,madreseh *madares);
void thaghir_esm_kelas(int tedad_madares,madreseh *madares, string reshteh, int code_kelas);
void thaghir_code_kelas(int tedad_madares,madreseh *madares, int code_kelas, int code_jadid_kelas);
void thaghir_esm_daneshamooz(int tedad_madares, madreseh *madares, int code_melli,  string reshteh);
void thaghir_famili_daneshamooz(int tedad_madares,madreseh *madares, int code_melli, string reshteh);
void thaghir_tarikh_tavallod_daneshamooz(int tedad_madares,madreseh *madares, int code_melli);
void thaghir_code_melli_daneshamooz(int tedad_madares,madreseh *madares, int code_melli, int code_melli_jadid);
void thaghir_daneshamooz(int tedad_madares,madreseh *madares, int code_melli, string reshteh,int entekhab_daneshamooz);
void thaghir_esm_moalem(int tedad_madares,madreseh *madares, int code_melli, string reshteh);
void thaghir_famili_moalem(int tedad_madares,madreseh *madares, int code_melli, string reshteh);
void thaghir_tarikh_tavallod_moalem(int tedad_madares,madreseh *madares, int code_melli);
void thaghir_code_melli_moalem(int tedad_madares,madreseh *madares, int code_melli, int code_melli_jadid);
void thaghir_moalem(int tedad_madares,madreseh *madares, int code_melli, string reshteh,int entekhab_daneshamooz);
void thaghir_esm_madreseh(int tedad_madares, madreseh *madares, int code, string reshteh);
void thaghir_code_madreseh(int tedad_madares, madreseh *madares, int code, int code_jadid);
void thaghir_madreseh(int tedad_madares, madreseh *madares, int code, int entekhan_madreseh, string reshteh,int code_jadid);
void dahomi(int tedad_madares,madreseh *madares);
void hashtomi(int tedad_madares, madreseh *madares);
int andaze(int adad);
bool dorosti_code_melli(int code_melli);
bool dorosti_esm(string esm, string famili);
danesh_amooz sabt_etelaat_danesh_amooz();
moalem sabt_etelaat_moalem();
kelas sabt_etelaat_kelas();

int main(){
    int tedad_madares = 0;
    printf("chand ta madreseh ro mikhai vared konid?\n");
    scanf("%d",&tedad_madares);
    madreseh madares[tedad_madares];
    int code_hame_marares[tedad_madares];
    string movaghat;
    int entekhab = 0;
    nemayesh_menu_asli();
    while (entekhab != 11){
        scanf("%d",&entekhab);
        switch (entekhab) {
            case 1: yek(tedad_madares, madares); break;
            case 2: dovvomi(tedad_madares, madares, code_hame_marares); break;
            case 3: sevvomi(tedad_madares, madares); break;
            case 4: chaharomi(tedad_madares, madares); break;
            case 5: panjomi(tedad_madares, madares); break;
            case 6: shishomi(tedad_madares, madares); break;
            case 7: haftomi(tedad_madares, madares); break;
            case 8: hashtomi(tedad_madares, madares); break;
            case 9: nohomi(tedad_madares, madares); break;
            case 10: dahomi(tedad_madares, madares); break;
            default:
                printf("movffagh bashid,khoda negajdar shoma%n");
                break;
        }
    }
    return 0;
}

void dahomi(int tedad_madares,madreseh *madares) {
    int code = 0;
    int code_melli = 0;
    int entekhab_kelas = 0;
    int entekhan_madreseh = 0;
    string reshteh = 0;
    int code_jadid = 0;
    int code_kelas = 0;
    int code_jadid_kelas = 0;
    int entekhab_daneshamooz = 0;
    cout << "code madreseh ii ke mikhain taghirat bedid ra vared konid\n";
    cin >> code;
    cout << "ghasd ghir yek kelas ra darid?[1 bale 0 kheir]\n";
    cin >> entekhab_kelas;
    if (code == 1){
        cout << "code kelasi ke mikhahid taghirat dahid vared konid\n";
        cin >> code_kelas;
        printf("che chiz ra taghir midahid?\n"
               "1:esm\n"
               "2:code_kelas\n"
               "3:daneshamoozha\n"
               "4:moalem_kelas\n"
               );
        cin >> entekhab_kelas;
        if (entekhab_kelas == 1){
            thaghir_esm_kelas(tedad_madares, madares, reshteh, code_kelas);
        }
        else if (entekhab_kelas == 2){
            thaghir_code_kelas(tedad_madares, madares, code_kelas, code_jadid_kelas);
        }
        else if (entekhab_kelas == 3){
            thaghir_daneshamooz(tedad_madares, madares, code_melli, reshteh, entekhab_daneshamooz);
        }
        else{
            thaghir_moalem(tedad_madares, madares, code_melli, reshteh, entekhab_daneshamooz);
        }
    }
    else{
        thaghir_madreseh(tedad_madares, madares, code, entekhan_madreseh, reshteh, code_jadid);
    }
}
void thaghir_madreseh(int tedad_madares, madreseh *madares, int code, int entekhan_madreseh, string reshteh,int code_jadid) {
    printf("che chiz ra mikhahid taghir dahid?\n"
           "1:esm\n"
           "2:code madreseh\n"
           );
    cin >> entekhan_madreseh;
    if (entekhan_madreseh == 1){
        thaghir_esm_madreseh(tedad_madares, madares, code, reshteh);
    }
    else{
        thaghir_code_madreseh(tedad_madares, madares, code, code_jadid);
    }
}
void thaghir_code_madreseh(int tedad_madares,madreseh *madares, int code, int code_jadid) {
    cout << "code jadid madreseh ra vared konid\n";
    cin >> code_jadid;
    for (int i = 0; i < tedad_madares; ++i){
        if (code == madares[i].getCodeMadreseh())
        {
            madares[i].setCodeMadreseh(code_jadid);
        }
    }
}
void thaghir_esm_madreseh(int tedad_madares,  madreseh *madares, int code, string reshteh) {
    cout << "esm jadid madreseh ra vared konid\n";
    cin >> reshteh;
    for (int i = 0; i < tedad_madares; ++i){
        if (code == madares[i].getCodeMadreseh()){
            madares[i].setEsm(reshteh);
        }
    }
}
void thaghir_moalem(int tedad_madares,  madreseh *madares, int code_melli, string reshteh,int entekhab_daneshamooz) {
    int code_melli_jadid = 0;
    cout << "code melli moalem ra vared konid\n";
    cin >> code_melli;
    printf("che chiz ra mikhahid taghir dahid?\n"
           "1:esm\n"
           "2:famili\n"
           "3:tarikh tavallod\n"
           "4:code melli\n"
    );
    cin >> entekhab_daneshamooz;
    if (entekhab_daneshamooz == 1){
        thaghir_esm_moalem(tedad_madares, madares, code_melli, reshteh);
    }
    else if (entekhab_daneshamooz == 2){
        thaghir_famili_moalem(tedad_madares, madares, code_melli, reshteh);
    }
    else if (entekhab_daneshamooz == 3){
        thaghir_tarikh_tavallod_moalem(tedad_madares, madares, code_melli);
    }
    else{
        thaghir_code_melli_moalem(tedad_madares, madares, code_melli, code_melli_jadid);
    }
}
void thaghir_code_melli_moalem(int tedad_madares, madreseh *madares, int code_melli, int code_melli_jadid) {
    cout << "code melli jadid ra vared konid\n";
    cin >> code_melli_jadid;
    for (int i = 0; i < tedad_madares; ++i)
    {
        for (int j = 0; j < tedad_class; ++j)
        {
            if (code_melli == madares[i].kelasha[j].moalem_kelas.getCodeMelli())
            {
                madares[i].kelasha[j].moalem_kelas.setCodeMelli(code_melli_jadid);
            }
        }
    }
}
void thaghir_tarikh_tavallod_moalem(int tedad_madares,  madreseh *madares, int code_melli) {
    int rooz = 0;
    int mah = 0;
    int sal = 0;
    cout << "ebteda sal bad mah bad rooz ra vered konid\n";
    cin >> sal >> mah >> rooz;
    for (int i = 0; i < tedad_madares; ++i){
        for (int j = 0; j < tedad_class; ++j){
            if (code_melli == madares[i].kelasha[j].moalem_kelas.getCodeMelli()){
                madares[i].kelasha[j].moalem_kelas.setRoozTavallod(rooz);
                madares[i].kelasha[j].moalem_kelas.setMahTavallod(mah);
                madares[i].kelasha[j].moalem_kelas.setSalTavallod(sal);
            }
        }
    }
}
void thaghir_famili_moalem(int tedad_madares,madreseh *madares, int code_melli,string reshteh) {
    cout << "famili jadid ra vared konid\n";
    cin >> reshteh;
    for (int i = 0; i < tedad_madares; ++i){
        for (int j = 0; j < tedad_class; ++j){
            if (code_melli == madares[i].kelasha[j].moalem_kelas.getCodeMelli()){
                madares[i].kelasha[j].moalem_kelas.setFamili(reshteh);
            }
        }
    }
}
void thaghir_esm_moalem(int tedad_madares,madreseh *madares, int code_melli, string reshteh) {
    cout << "esm jadid ra vared konid\n";
    cin >> reshteh;
    for (int i = 0; i < tedad_madares; ++i){
        for (int j = 0; j < tedad_class; ++j){
            if (code_melli == madares[i].kelasha[j].moalem_kelas.getCodeMelli()){
                madares[i].kelasha[j].moalem_kelas.setEsm(reshteh);
            }
        }
    }
}
void thaghir_daneshamooz(int tedad_madares,madreseh *madares, int code_melli, string reshteh,int entekhab_daneshamooz) {
    int code_melli_jadid = 0;
    cout << "code melli danesh amooz ra vared konid\n";
    cin >> code_melli;
    printf("che chiz ra mikhahid taghir dahid?\n"
           "1:esm\n"
           "2:famili\n"
           "3:tarikh tavallod\n"
           "4:code melli\n"
    );
    cin >> entekhab_daneshamooz;
    if (entekhab_daneshamooz == 1){
        thaghir_esm_daneshamooz(tedad_madares, madares, code_melli, reshteh);
    }
    else if (entekhab_daneshamooz == 2){
        thaghir_famili_daneshamooz(tedad_madares, madares, code_melli, reshteh);
    }
    else if (entekhab_daneshamooz == 3){
        thaghir_tarikh_tavallod_daneshamooz(tedad_madares, madares, code_melli);
    }
    else{
        thaghir_code_melli_daneshamooz(tedad_madares, madares, code_melli, code_melli_jadid);
    }
}
void thaghir_code_melli_daneshamooz(int tedad_madares,madreseh *madares, int code_melli, int code_melli_jadid) {
    cout << "code melli jadid ra vared konid\n";
    cin >> code_melli_jadid;
    for (int i = 0; i < tedad_madares; ++i){
        for (int j = 0; j < tedad_class; ++j){
            if (code_melli == madares[i].kelasha[j].moalem_kelas.getCodeMelli()){
                madares[i].kelasha[j].moalem_kelas.setCodeMelli(code_melli_jadid);
            }
        }
    }
}
void thaghir_tarikh_tavallod_daneshamooz(int tedad_madares,madreseh *madares, int code_melli) {
    int rooz = 0;
    int mah = 0;
    int sal = 0;
    cout << "ebteda rooz bad mah bad sal ra vared konid\n";
    cin >> sal >> mah >> rooz;
    for (int i = 0; i < tedad_madares; ++i){
        for (int j = 0; j < tedad_class; ++j){
            for (int k = 0; k < tedad_daneshamooz; ++k){
                if (code_melli == madares[i].kelasha[j].daneshamoozha[k].getCodeMelli()){
                    madares[i].kelasha[j].daneshamoozha[k].setRoozTavallod(rooz);
                    madares[i].kelasha[j].daneshamoozha[k].setMahTavallod(mah);
                    madares[i].kelasha[j].daneshamoozha[k].setSalTavallod(sal);
                }
            }
        }
    }
}
void thaghir_famili_daneshamooz(int tedad_madares,madreseh *madares, int code_melli, string reshteh) {
    cout << "famili jadid ra vared konid\n";
    cin >> reshteh;
    for (int i = 0; i < tedad_madares; ++i){
        for (int j = 0; j < tedad_class; ++j){
            for (int k = 0; k < tedad_daneshamooz; ++k){
                if (code_melli == madares[i].kelasha[j].daneshamoozha[k].getCodeMelli()){
                    madares[i].kelasha[j].daneshamoozha[k].setFamili(reshteh);
                }
            }
        }
    }
}
void thaghir_esm_daneshamooz(int tedad_madares,madreseh *madares, int code_melli, string reshteh) {
    cout << "esm jadid ra vared konid\n";
    cin >> reshteh;
    for (int i = 0; i < tedad_madares; ++i){
        for (int j = 0; j < tedad_class; ++j){
            for (int k = 0; k < tedad_daneshamooz; ++k){
                if (code_melli == madares[i].kelasha[j].daneshamoozha[k].getCodeMelli()){
                    madares[i].kelasha[j].daneshamoozha[k].setEsm(reshteh);
                }
            }
        }
    }
}
void thaghir_code_kelas(int tedad_madares,madreseh *madares, int code_kelas, int code_jadid_kelas) {
    cout << "code jadid kelas chist?\n";
    cin >> code_jadid_kelas;
    for (int i = 0; i < tedad_madares; ++i){
        for (int j = 0; j < tedad_class; ++j){
            if (code_kelas == madares[i].kelasha[j].getCodeKelas()){
                madares[i].kelasha[j].setCodeKelas(code_jadid_kelas);
            }
        }
    }
}
void thaghir_esm_kelas(int tedad_madares,madreseh *madares, string reshteh, int code_kelas) {
    cout << "esm jadid kelas ra vared konid\n";
    cin >> reshteh;
    for (int i = 0; i < tedad_madares; ++i){
        for (int j = 0; j < tedad_class; ++j){
            if (code_kelas == madares[i].kelasha[j].getCodeKelas()){
                madares[i].kelasha[j].setEsm(reshteh);
            }
        }
    }
}
void nohomi(int tedad_madares,madreseh *madares) {
    int rooz = 0;
    int mah = 0;
    int sal = 0;
    cout << "ebteda sal bad mad bad rooz ra vared konid\n";
    cin >> sal >> mah >> rooz;
    for (int i = 0; i < tedad_madares; ++i){
        for (int j = 0; j < tedad_class; ++j){
            for (int k = 0; k < tedad_daneshamooz; ++k){
                if (madares[i].kelasha[j].daneshamoozha[k].getRoozTavallod() == rooz && madares[i].kelasha[j].daneshamoozha[k].getMahTavallod() == mah && madares[i].kelasha[j].daneshamoozha[k].getSalTavallod() == sal)
                {
                    cout << madares[i].kelasha[j].daneshamoozha[k].getEsm() << " " << madares[i].kelasha[j].daneshamoozha[k].getFamili() << endl;
                }
            }
        }
    }
}
void hashtomi(int tedad_madares, madreseh *madares) {
    for (int i = 0; i < tedad_madares; ++i){
        for (int j = 0; j < tedad_class; ++j){
            for (int k = 0; k < tedad_daneshamooz; ++k){
                cout << madares[i].kelasha[j].daneshamoozha[k].getEsm() << " " << madares[i].kelasha[j].daneshamoozha[k].getFamili() << endl;
                cout << madares[i].kelasha[j].daneshamoozha[k].getCodeMelli() << endl;
            }
        }
    }
}
void haftomi(int tedad_madares,madreseh *madares) {
    int code = 0;
    cout << "code madreseh ra vared konid\n";
    cin >> code;
    for (int i = 0; i < tedad_madares; ++i){
        if (madares[i].getCodeMadreseh() == code){
            for (int j = 0; j < tedad_class; ++j){
                cout << madares[i].kelasha[j].moalem_kelas.getEsm() << " " << madares[i].kelasha[j].moalem_kelas.getFamili() << endl;
                cout << madares[i].kelasha[j].moalem_kelas.getCodeMelli() << endl;
            }
        }
    }
}
void shishomi(int tedad_madares,madreseh *madares) {
    int code = 0;
    string esm;
    string famili;
    printf("ebteda esm va sepas famili danesh amooz ra vared konid\n");
    cin >> esm >> famili;
    for (int i = 0; i < tedad_madares; ++i){
        for (int j = 0; j < tedad_class; ++j){
            for (int k = 0; k < tedad_daneshamooz; ++k){
                if (madares[i].kelasha[j].daneshamoozha[k].getEsm() == esm && madares[i].kelasha[j].daneshamoozha[k].getFamili() == famili){
                    cout << madares[i].getEsm() << endl;
                    cout << madares[i].kelasha[j].moalem_kelas.getEsm() << " " << madares[i].kelasha[j].moalem_kelas.getFamili() << endl;
                }
            }
        }
    }
}
void chaharomi(int tedad_madares,madreseh *madares) {
    int code = 0;
    printf("code melli moalem ra vared konid\n");
    scanf("%d",&code);
    for (int i = 0; i < tedad_madares; ++i){
        for (int j = 0; j < tedad_class; ++j){
            if (madares[i].kelasha[j].moalem_kelas.getCodeMelli() == code)
            {
                cout << madares[i].getEsm() << endl;
            }
        }
    }
}
void panjomi(int tedad_madares, madreseh *madares) {
    int code_madreseh = 0;
    printf("code madreseh'i ke mikhain hazf beshavad ra vared konid\n");
    scanf("%d",&code_madreseh);
    int madreseh_hadaf = 0;
    for (int i = 0; i < tedad_madares; ++i){
        if (code_madreseh == madares[i].getCodeMadreseh()){
            madreseh_hadaf = i;
            break;
        }
    }
    madares[madreseh_hadaf].setCodeMadreseh(0);
}
void sevvomi(int tedad_madares,madreseh *madares) {
    int code_kelas = 0;
    printf("code kelas ra vared konid\n");
    scanf("%d",&code_kelas);
    for (int j = 0; j < tedad_madares; ++j){
        if (code_kelas == madares[j].getCodeMadreseh()){
            neshan_dadan_hame_etelaat(madares[j]);
        }
    }
}
void dovvomi(int tedad_madares,madreseh *madares, int *code_hame_marares) {
    for (int i = 0; i < tedad_madares; ++i){
        code_hame_marares[i] = madares[i].getCodeMadreseh();
    }
    moratab_sazi(tedad_madares, code_hame_marares);
    for (int i = 0; i < tedad_madares; ++i){
        if (code_hame_marares[i] == 0){
            continue;
        }
        for (int j = 0; j < tedad_madares; ++j){
            if (code_hame_marares[i] == madares[j].getCodeMadreseh()){
                neshan_dadan_hame_etelaat(madares[j]);
            }
        }
    }
}
void yek(int tedad_madares,madreseh *madares) {
    for (int i = 0; i < tedad_madares; ++i){
        printf("madreseh shomare %d",i + 1);
        madares[i] = gereftan_etelaat_madreseh();
    }
}
void nemayesh_menu_asli() {
    cout << "che kari mikhai anjam bedi?\n";
    cout << "1:dadan etelaat madreseh\n";
    cout << "2:neshan dadan etelaat\n";
    cout << "3:neshan dadan etelaat madreseh bar asas code vorodi\n";
    cout << "4:serch moalem_kelas\n";
    cout << "5:hazf\n";
    cout << "6:serch daneshamoozha\n";
    cout << "7:neshan dadan moaleman yek madreseh\n";
    cout << "8:neshan dadan code melli va esm danesh amooz ha\n";
    cout << "9:serch bar asas tarikh tavallod\n";
    cout << "10:taghir dade ha \n";
    cout << "11:khoroj\n";
}
void moratab_sazi(int tedad_madares, int *code_hame_marares) {
    int shakhes;
    int mogheiat_monaseb;
    for (int i = 1; i < tedad_madares; i++){
        shakhes = code_hame_marares[i];
        for (mogheiat_monaseb = i - 1; mogheiat_monaseb >= 0 && shakhes < code_hame_marares[mogheiat_monaseb]; mogheiat_monaseb--){
            code_hame_marares[mogheiat_monaseb + 1] = code_hame_marares[mogheiat_monaseb];
        }
        code_hame_marares[mogheiat_monaseb + 1] = shakhes;
    }
}
void neshan_dadan_etelaat_class(kelas kelas){
    printf("esm kelas: %s\n",kelas.getEsm().c_str());
    printf("code_kelas: %d\n",kelas.getCodeKelas());
    printf("esm moalem_kelas : %s %s\n",kelas.moalem_kelas.getEsm().c_str(),kelas.moalem_kelas.getFamili().c_str());
    printf("code melli moalem_kelas : %d\n",kelas.moalem_kelas.getCodeMelli());
    printf("tarikh tavallod moalem_kelas's : %d/%d/%d\n",kelas.moalem_kelas.getSalTavallod(),kelas.moalem_kelas.getMahTavallod(),kelas.moalem_kelas.getRoozTavallod());
    for (int i = 0; i < tedad_daneshamooz; ++i){
        printf("student: %d\n",i + 1);
        printf("esm danesh amooz: %s %s\n",kelas.daneshamoozha[i].getEsm().c_str(),kelas.daneshamoozha[i].getFamili().c_str());
        printf("code melli danesh amooz: %d\n",kelas.daneshamoozha[i].getCodeMelli());
        printf("tarikh tavallod danesh amooz: %d/%d/%d\n",kelas.daneshamoozha[i].getSalTavallod(),kelas.daneshamoozha[i].getMahTavallod(),kelas.daneshamoozha[i].getRoozTavallod());
    }
}
void neshan_dadan_hame_etelaat(madreseh inn_madreseh){
    printf("************************\n");
    printf("esm madreseh: %s\n",inn_madreseh.getEsm().c_str());

    cout << "code madresh: " << inn_madreseh.getCodeMadreseh() << endl;
    for (int i = 0; i < tedad_class; ++i){
        printf("class number %d\n",i + 1);
        neshan_dadan_etelaat_class(inn_madreseh.kelasha[i]);
    }
}
int andaze(int adad)
{
    int andaze = 0;
    while (adad > 0){
        adad = adad / 10;
        andaze++;
    }
    return andaze;
}
bool dorosti_code_melli(int code_melli)
{
    if (andaze(code_melli) == 10){
        return true;
    }
    else{
        return false;
    }
}
bool dorosti_esm(string esm, string famili){
    bool dorosti_esm = true;
    bool dorosti_famili = true;
    for (int i = 0; i < esm.length(); ++i){
        if (!((esm[i] >= 65 && esm[i] <= 90) || (esm[i] >= 97 && esm[i] <= 122))){
            dorosti_esm = false;
        }
    }
    for (int i = 0; i < famili.length(); ++i){
        if (!((famili[i] >= 65 && famili[i] <= 90) || (famili[i] >= 97 && famili[i] <= 122))){
            dorosti_famili = false;
        }
    }
    return dorosti_esm && dorosti_famili;
}
danesh_amooz sabt_etelaat_danesh_amooz()
{
    danesh_amooz daneshAmooz;
    string tempstr;
    string tempstr1;
    int tempnum;
    cout << "esm danesh amooz ra vared konid" << endl;
    cin >> tempstr;
    cout << "famili danesh amooz ra vared konid" << endl;
    cin >> tempstr1;
    if (!dorosti_esm(tempstr, tempstr1)){
        printf("vorodi nadorost\ndanesh amooz sabt nashod\n");
        danesh_amooz daneshAmoozKhali;
        return daneshAmoozKhali;
    }
    daneshAmooz.setEsm(tempstr);
    daneshAmooz.setFamili(tempstr1);
    cout << "code melli danesh amooz ra vared konid" << endl;
    cin >> tempnum;
    if (!dorosti_code_melli(tempnum)){
        printf("vorodi nadorost\ndanesh amooz sabt nashod\n");
        danesh_amooz daneshAmoozKhali;
        return daneshAmoozKhali;
    }
    daneshAmooz.setCodeMelli(tempnum);
    cout << "rooz tavallod danesh amooz ra vared konid" << endl;
    cin >> tempnum;
    daneshAmooz.setRoozTavallod(tempnum);
    cout << "mah tavallod danesh amooz ra vared konid" << endl;
    cin >> tempnum;
    daneshAmooz.setMahTavallod(tempnum);
    cout << "sal tavallod danesh amooz ra vard konid" << endl;
    cin >> tempnum;
    daneshAmooz.setSalTavallod(tempnum);
    return daneshAmooz;
}
moalem sabt_etelaat_moalem()
{
    moalem amoozgar;
    string tempstr;
    string tempstr1;
    int tempnum;
    cout << "esm amoozgar ra vared konid" << endl;
    cin >> tempstr;
    cout << "famili amoozgar ra vared konid" << endl;
    cin >> tempstr1;
    if (!dorosti_esm(tempstr, tempstr1)){
        printf("vorodi nadorost\nmoalem sabt nashod\n");
        moalem moalemKhali;
        return moalemKhali;
    }
    amoozgar.setEsm(tempstr);
    amoozgar.setFamili(tempstr1);
    cout << "code melli moalem ra vared konid" << endl;
    cin >> tempnum;
    if (!dorosti_code_melli(tempnum)){
        printf("vorodi nadorost\nmoalem sabt nashod\n");
        moalem moalemKhali;
        return moalemKhali;
    }
    amoozgar.setCodeMelli(tempnum);
    cin >> tempnum;
    cout << "rooz tavallod moalem ra vared konid" << endl;
    amoozgar.setRoozTavallod(tempnum);
    cout << "mah tavallod moalem ra vared konid" << endl;
    cin >> tempnum;
    amoozgar.setMahTavallod(tempnum);
    cout << "sal tavallod moalem ra vared konid" << endl;
    cin >> tempnum;
    amoozgar.setSalTavallod(tempnum);
    return amoozgar;
}
kelas sabt_etelaat_kelas(){
    kelas kelass;
    string tempstr;
    int tempnum;
    cout << "esm kelass ra vared konid" << endl;
    cin >> tempstr;
    kelass.setEsm(tempstr);
    cout << "code kelas ra vared konid" << endl;
    cin >> tempnum;
    kelass.setCodeKelas(tempnum);
    danesh_amooz students;
    moalem moalem_kelas = sabt_etelaat_moalem();
    kelass.moalem_kelas = moalem_kelas;
    for (int i = 0; i < tedad_daneshamooz; ++i){
        cout << "danesh amooz shomare " << i + 1 << endl;
        students = sabt_etelaat_danesh_amooz();
        kelass.daneshamoozha[i] = students;
    }
    return kelass;
}
madreseh gereftan_etelaat_madreseh(){
    madreseh inn_madreseh;
    string tempstr;
    int tempnum;
    cout << "esm madreseh ra vared konid" << endl;
    cin >> tempstr;
    inn_madreseh.setEsm(tempstr);
    cout << "code madreseh ra vared konid" << endl;
    cin >> tempnum;
    inn_madreseh.setCodeMadreseh(tempnum);
    kelas schoolClasses;
    for (int j = 0; j < tedad_class; ++j){
        cout << "kelas shomare " << j + 1 << endl << endl;
        schoolClasses = sabt_etelaat_kelas();
        inn_madreseh.kelasha[j] = schoolClasses;
    }
    return inn_madreseh;
}