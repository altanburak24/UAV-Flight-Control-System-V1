#include <iostream>
using namespace std;

void motordurumu(int komut) {
    if (komut == 1) {
        cout <<"motorlara guc verildi"<<" " <<"komut basarili" <<endl;
    }
    else{
        cout <<"motorlar durduruldu";
    }
    

}
void irtifakontrol() {
    int sayi;
    cout <<"hedef yuksekligi giriniz = " << endl;
    cin >> sayi ;

    for(int i = 0 ; i <= sayi; i ++) {
        cout <<" yukseklik = " << i << "metre "<< endl;
    if(i == sayi) {
        cout <<"hedef yukseklik olan"<<"  " << i <<"metreye ulasildi"<< endl;


    }
    }

}
void bataryaseviyesi() {
    int a;
    cout <<"batarya seviyesi giriniz = " << endl;
    cin >> a;
    if (a < 20 ) {
        cout <<"batarya seviyesi dusuk "<<endl;
    }
    else{
        cout<<" batarya seviyesi normal duzeyde" << endl;

    }
    
}
int main() {
    int komut;
    cout <<"ihayi baslatmak icin 1 e basiniz = "<<endl;
    cin >> komut;


    motordurumu(komut);
    if(komut == 1) {
        irtifakontrol();
        bataryaseviyesi();
    }
    return 0;
}
