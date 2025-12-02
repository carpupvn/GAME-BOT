//Ban quyen bot thuoc ve "Nguyen Phuoc" - CarPup
#include <bits/stdc++.h>
#include "random.h"
#include <string>
#include <synchapi.h>
using namespace myRandom;
using namespace std;

int main() {
    string username;
    cout << " Vui long nhap username: ";
    getline(cin,username);
    string PhienBan = "1.17.021225", pass = "05122010", TacGia = "NguyenPhuoc";
    int HuCL = 1000, HuTX = 1000, coin = 100;
    cout << "\n---GAME BOT---------------------------------------";
    cout << "\n Phien ban hien tai: " << PhienBan;
    cout << "\n He dieu hanh duoc ho tro: Window";
    cout << "\n So game duoc ho tro: 4";
    cout << "\n Su dung 'help' de xem danh sach lenh duoc ho tro";
    cout << "\n So coin hien tai: " << coin;
    cout << "\n Lien he ho tro: 0936974180";
    cout << "\n Phat hien bat ky loi nao xin lien he sdt ho tro.";
    cout << "\n Cam on " << username << " da su dung bot!";
    cout << "\n Tac gia: " << TacGia;
    cout << "\n--------------------------------------------------";
ChuKy:
    string a = "";
    cout << "\n\n Nhap lenh: ";
    cin >> a;
    while (false) {
        Loi:
        cout << "\n---Phat hien loi--------------------------------------";
        cout << "\n Lenh ban nhap khong dung cu phap!";
        cout << "\n Su dung 'help' de xem danh sach lenh duoc ho tro.";
        cout << "\n Vui long nhap lai lenh!";
        cout << "\n------------------------------------------------------";
        goto ChuKy;
    }
    if (a == "exit") {
        cout << "\n";
        for (int i = 4; i!= 0; i--) {
            cout << "\rChuong trinh se tat sau: " << i-1 << " ";
            Sleep(1000);
        }
        cout << "\rChuong trinh da tat!       ";
        return 0;
    } else if (a == "game") {
        string b;
        cin >> b;
        if (b == "chanle") {
            string c, KetQuaChu;
            int d, KetQuaSo, dice1, dice2, dice3;
            cin >> c >> d;
            if ((d >= coin) || (d < 1)) goto Loi;
            dice1 = Dice();
            dice2 = Dice();
            dice3 = Dice();
            KetQuaSo = dice1 + dice2 + dice3;
            if ((c == "chan") && (KetQuaSo%2 == 0)) {
                if ((dice1 == dice2) && (dice1 == dice3)) {
                    KetQuaChu = "\nNo hu! Ban da thang lon!";
                    coin += d*80/100 + HuCL*20/100;
                    HuCL -= HuCL*20/100;
                } else {
                    KetQuaChu = "\nBan da thang!";
                    coin += d*80/100;
                }
            } else if ((c == "chan") && (KetQuaSo%2 == 1)) {
                if ((dice1 == dice2) && (dice1 == dice3)) {
                    KetQuaChu = "Truot hu! Ban da thua!";
                    coin -= d;
                    HuCL += d;
                } else {
                    KetQuaChu = "Ban da thua!";
                    coin -= d;
                    HuCL += d;
                }
            } else if ((c == "le") && (KetQuaSo%2 == 0)) {
                if ((dice1 == dice2) && (dice1 == dice3)) {
                    KetQuaChu = "Truot hu! Ban da thua!";
                    coin -= d;
                    HuCL += d;
                } else {
                    KetQuaChu = "Ban da thua!";
                    coin -= d;
                    HuCL += d;
                }
            } else if ((c == "le") && (KetQuaSo%2 == 1)) {
                if ((dice1 == dice2) && (dice1 == dice3)) {
                    KetQuaChu = "No hu! Ban da thang lon!";
                    coin += d*80/100 + HuCL*20/100;
                    HuCL -= HuCL*20/100;
                } else {
                    KetQuaChu = "Ban da thang!";
                    coin += d*80/100;
                }
            } else goto Loi;
            cout << "\n---Ket Qua Tro Choi-------------------------------";
            cout << "\n Xuc sac 1: " << dice1;
            cout << "\n Xuc sac 2: " << dice2;
            cout << "\n Xuc sac 3: " << dice3;
            cout << "\n Ket qua: " << KetQuaSo;
            if (KetQuaSo %2 == 0) cout << " -> chan";
            else cout << " -> le";
            cout << "\n Ket qua cua ban: " << c;
            cout << "\n -> " << KetQuaChu;
            cout << "\n So coin hien tai: " << coin;
            cout << "\n So coin trong hu chanle: " << HuCL;
            cout << "\n--------------------------------------------------";
            goto ChuKy;
        } else if (b == "taixiu") {
            string c;
            int d, KetQuaSo, dice1, dice2, dice3;
            string KetQuaChu;
            cin >> c >> d;
            if ((d >= coin) || (d < 1)) goto Loi;
            dice1 = Dice();
            dice2 = Dice();
            dice3 = Dice();
            KetQuaSo = dice1 + dice2 + dice3;
            if ((c == "tai") && (KetQuaSo >= 11)) {
                if ((dice1 == dice2) && (dice1 == dice3)) {
                    KetQuaChu = "No hu! Ban da thang lon!";
                    coin += d*80/100 + HuCL*20/100;
                    HuTX -= HuTX*20/100;
                } else {
                    KetQuaChu = "Ban da thang!";
                    coin += d*80/100;
                }
            } else if ((c == "tai") && (KetQuaSo <= 10)) {
                if ((dice1 == dice2) && (dice1 == dice3)) {
                    KetQuaChu = "Truot hu! Ban da thua!";
                    coin -= d;
                    HuTX += d;
                } else {
                    KetQuaChu = "an da thua!";
                    coin -= d;
                    HuTX += d;
                }
            } else if ((c == "xiu") && (KetQuaSo >= 11)) {
                if ((dice1 == dice2) && (dice1 == dice3)) {
                    KetQuaChu = "Truot hu! Ban da thua!";
                    coin -= d;
                    HuTX += d;
                } else {
                    KetQuaChu = "Ban da thua!";
                    coin -= d;
                    HuTX += d;
                }
            } else if ((c == "xiu") && (KetQuaSo <= 10)) {
                if ((dice1 == dice2) && (dice1 == dice3)) {
                    KetQuaChu = "No hu! Ban da thang lon!";
                    coin += d*80/100 + HuCL*20/100;
                    HuTX -= HuTX*20/100;
                } else {
                    KetQuaChu = "Ban da thang!";
                    coin += d*80/100;
                }
            } else goto Loi;
            cout << "\n";
            for (int i = 61; i != 0 ; i--) {
                cout << "\r Thoi gian con lai: " << i-1 << " ";
                Sleep(1000);
            }
            cout << "\r---Ket Qua Tro Choi-------------------------------";
            cout << "\n Xuc sac 1: " << dice1;
            cout << "\n Xuc sac 2: " << dice2;
            cout << "\n Xuc sac 3: " << dice3;
            cout << "\n Ket qua: " << KetQuaSo;
            if (KetQuaSo >= 11) cout << " -> tai";
            else cout << " -> xiu";
            cout << "\n Ket qua cua ban: " << c;
            cout << "\n -> " << KetQuaChu;
            cout << "\n So coin hien tai: " << coin;
            cout << "\n So coin trong hu taixiu: " << HuTX;
            cout << "\n--------------------------------------------------";
            goto ChuKy;
        } else if (b == "baucua") {
            int SoThang = 0, d;
            string c, KetQuaChu, DiceBC1, DiceBC2, DiceBC3;
            cin >> c >> d;
            if ((d >= coin) || (d < 1)) goto Loi;
            DiceBC1 = RanStrList("bau", "cua", "tom", "ca", "nai", "ga");
            DiceBC2 = RanStrList("bau", "cua", "tom", "ca", "nai", "ga");
            DiceBC3 = RanStrList("bau", "cua", "tom", "ca", "nai", "ga");
            if ((c != "bau") && (c != "cua") && (c != "tom") && (c != "ca") && (c != "nai") && (c != "ga")) goto Loi;
            if (c == DiceBC1) {
                SoThang += 1;
            }
            if (c == DiceBC2) {
                SoThang += 1;
            }
            if (c == DiceBC3) {
                SoThang += 1;
            }
            if (SoThang == 0) {
                KetQuaChu = "Ban da thua!";
                coin -= d;
            } else {
                KetQuaChu = "Ban da thang!";
                coin += d*SoThang;
            }
            cout << "\n";
            for (int i = 61; i != 0 ; i--) {
                cout << "\r Thoi gian con lai: " << i-1 << " ";
                Sleep(1000);
            }
            cout << "\r---Ket Qua Tro Choi-------------------------------";
            cout << "\n Ket qua 1: " << DiceBC1;
            cout << "\n Ket qua 2: " << DiceBC2;
            cout << "\n Ket qua 3: " << DiceBC3;
            cout << "\n Ket qua cua ban: " << c;
            cout << "\n -> " << KetQuaChu;
            cout << "\n So lan thang: " << SoThang;
            cout << "\n So coin hien tai: " << coin;
            cout << "\n--------------------------------------------------";
            goto ChuKy;
        } else if (b == "keobuabao") {
            string c, KetQuaKBB, KetQuaChu;
            int d;
            cin >> c >> d;
            if ((c != "keo") && (c != "bua") && (c != "bao")) goto Loi;
            if ((d >= coin) || (d < 1)) goto Loi;
            KetQuaKBB = RanStrList("keo", "bua", "bao");
            if (c == KetQuaKBB) {
                KetQuaChu = "Ban da thang!";
                coin += d;
            } else {
                KetQuaChu = "Ban da thua!";
                coin -= d;
            }
            cout << "\n---Ket Qua Tro Choi-------------------------------";
            cout << "\n Ket qua keobuabao: " << KetQuaKBB;
            cout << "\n Ket qua cua ban: " << c;
            cout << "\n -> " << KetQuaChu;
            cout << "\n So coin hien tai: " << coin;
            cout << "\n--------------------------------------------------";
            goto ChuKy;
        } else goto Loi;
    } else if (a == "reset") {
        coin = 100;
        HuCL = 500;
        HuTX = 500;
        cout << "\n---Da sua he thong--------------------------------";
        cout << "\n So coin hien tai: " << coin;
        cout << "\n So coin trong hu chanle: " << HuCL;
        cout << "\n So coin trong hu taixiu: " << HuTX;
        cout << "\n--------------------------------------------------";
        goto ChuKy;
    } else if (a == "hack") {
        cout << "\n Vui long nhap mat khau de su dung: ";
        string b;
        cin >> b;
        if (b == pass) {
            coin = 1000000;
            HuCL = 5000000;
            HuTX = 5000000;
            cout << "\n---Da sua he thong--------------------------------";
            cout << "\n So coin hien tai: " << coin;
            cout << "\n So coin trong hu chanle: " << HuCL;
            cout << "\n So coin trong hu taixiu: " << HuTX;
            cout << "\n *Vui long khong lam dung lenh admin!*";
            cout << "\n--------------------------------------------------";
            goto ChuKy;
        } else {
            cout << "\nMat khau sai!";
            goto ChuKy;
        }
    } else if (a == "mycard") {
        string userrate;
        if (coin >= 1000000) userrate = "Kim cuong";
        else if (coin >= 100000) userrate = "Vang";
        else if (coin >= 10000) userrate = "Bac";
        else if (coin >= 1000) userrate = "Dong";
        else if (coin >= 100) userrate = "Go";
        else userrate = "Khong xep loai";
        cout << "\n---Nguoi choi-------------------------------------";
        cout << "\n Ten nguoi choi: " << username;
        cout << "\n So coin hien tai: " << coin;
        cout << "\n Danh gia nguoi choi: " << userrate;
        cout << "\n--------------------------------------------------";
        goto ChuKy;
    } else if (a == "botinfo") {
        cout << "\n ---INFO------------------------------------------";
        cout << "\n Bot thuoc so huu cua ca nhan: " << TacGia;
        cout << "\n So dien thoai lien he (Zalo): 0936974180";
        cout << "\n Du an bot duoc bat dau tu ngay: 29/11/2025";
        cout << "\n Phien ban hien tai: " << PhienBan;
        cout << "\n--------------------------------------------------";
        goto ChuKy;
    } else if (a == "help") {
        cout << "\n---Danh sach cac lenh duoc ho tro-----------------";
        cout << "\n help: Xem danh sach cac lenh duoc ho tro";
        cout << "\n reset: Reset coin va hu";
        cout << "\n gamehelp: Xem danh sach cac game duoc ho tro";
        cout << "\n mycard: Xem so coin hien tai";
        cout << "\n botinfo: Xem thong tin bot";
        cout << "\n banquyen: Xem ban quyen bot";
        cout << "\n *Cac lenh admin se khong duoc hien thi o day*";
        cout << "\n *Nhap lenh vui long khong viet hoa va bo dau*";
        cout << "\n--------------------------------------------------";
        goto ChuKy;
    } else if (a == "banquyen") {
        cout << "\n---Ban quyen bot----------------------------------";
        cout << "\n Copyright belongs to: NguyenPhuoc";
        cout << "\n--------------------------------------------------";
    } else if (a == "gamehelp") {
        cout << "\n---Danh sach cac tro choi co the choi-------------";
        cout << "\n chanle: Cuoc chan/le -> Cu phap: game chanle [chan/le] <so coin>";
        cout << "\n taixiu: Cuoc tai/xiu -> Cu phap: game taixiu [tai/xiu] <so coin>";
        cout << "\n baucua: Cuoc bau/cua/tom/ca/nai/ga -> Cu phap: game bau cua [bau/cua/tom/ca/nai/ga] <so coin>";
        cout << "\n keobuabao: Cuoc keo/bua/bao -> Cu phap: game keobuabao [keo/bua/bao] <so coin>";
        cout << "\n--------------------------------------------------";
        goto ChuKy;
    } else if (a == "buff") {
        cout << "\n Vui long nhap mat khau de su dung: ";
        string b;
        cin >> b;
        if (b == pass) {
            cout << "\n Vui long nhap so tien muon nang: ";
            int c;
            cin >> c;
            coin += c;
            cout << "\n---Da sua he thong--------------------------------";
            cout << "\n So coin hien tai: " << coin;
            cout << "\n *Vui long khong lam dung lenh admin!*";
            cout << "\n--------------------------------------------------";
            goto ChuKy;
        } else {
            cout << "\nMat khau sai!";
            goto ChuKy;
        }
    } else if (a == "adminhelp") {
        cout << "\n Vui long nhap mat khau de su dung: ";
        string b;
        cin >> b;
        if (b == pass) {
            cout << "\n---Danh sach cac lenh admin duoc ho tro-----------";
            cout << "\n adminhelp: Xem danh sach cac lenh duoc ho tro cho admin";
            cout << "\n buff: Nang coin";
            cout << "\n nerf: Giam coin";
            cout << "\n hack: Nang coin va hu cac game len gia tri nhat dinh";
            cout << "\n *Vui long khong lam dung lenh admin!*";
            cout << "\n--------------------------------------------------";
            goto ChuKy;
        } else {
            cout << "\n Mat khau sai!";
            goto ChuKy;
        }
    } else if (a == "nerf") {
        cout << "\n Vui long nhap mat khau de su dung: ";
        string b;
        cin >> b;
        if (b == pass) {
            cout << "\n Vui long nhap so tien muon giam: ";
            int c;
            cin >> c;
            coin -= c;
            cout << "\n---Da sua he thong--------------------------------";
            cout << "\n So coin hien tai: " << coin;
            cout << "\n *Vui long khong lam dung lenh admin!*";
            cout << "\n--------------------------------------------------";
            goto ChuKy;
        } else {
            cout << "\nMat khau sai!";
            goto ChuKy;
        }
    } else goto Loi;
}
