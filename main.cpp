//Ban quyen bot thuoc ve "Nguyen Phuoc" - CarPup
#include <bits/stdc++.h>
#include "random.h"
#include <string>
#include "time.h"
using namespace myRandom;
using namespace std;

int main() {
    bool jumped = false;
    string username;
    cout << " Vui long nhap username: ";
    getline(cin,username);
    string PhienBan = "2.0.171225", pass = "cudem1981", TacGia = "NguyenPhuoc";
    long long HuCL = 5000000, HuTX = 5000000, coin = 100000;
    cout << "\n---GAME BOT---------------------------------------";
    cout << "\n Phien ban hien tai: " << PhienBan;
    cout << "\n So game duoc ho tro: 8";
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
            if (jumped) {
            cout << "\n---Phat hien loi----------------------------------";
            cout << "\n Lenh ban nhap khong dung cu phap!";
            cout << "\n Su dung 'help' de xem danh sach lenh duoc ho tro.";
            cout << "\n Vui long nhap lai lenh!";
            cout << "\n--------------------------------------------------";
            jumped = false;
            goto ChuKy;
    }
    }
    if (a == "exit") {
        cout << "\n";
        for (int i = 4; i!= 0; i--) {
            cout << "\rChuong trinh se tat sau: " << i-1 << " ";
            wait(1s);
        }
        cout << "\rChuong trinh da tat!       ";
        return 0;
    } else if (a == "game") {
        string b;
        cin >> b;
        if (b == "chanle") {
            string c, KetQuaChu;
            long long d, KetQuaSo, dice1, dice2, dice3;
            cin >> c >> d;
            if ((d >= coin) || (d < 1)) {
                jumped = true;
                cin.ignore(1000, '\n');
                goto Loi;
            }
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
            } else {
                jumped = true;
                cin.ignore(1000, '\n');
                goto Loi;
            }
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
            long long d, KetQuaSo, dice1, dice2, dice3;
            string KetQuaChu;
            cin >> c >> d;
            if ((d >= coin) || (d < 1)) {
                jumped = true;
                cin.ignore(1000, '\n');
                goto Loi;
            }
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
            } else {
                jumped = true;
                cin.ignore(1000, '\n');
                goto Loi;
            }
            cout << "\n";
            for (int i = 61; i != 0 ; i--) {
                cout << "\r Thoi gian con lai: " << i-1 << " ";
                wait(1s);
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
            int SoThang = 0;
            long long d;
            string c, KetQuaChu, DiceBC1, DiceBC2, DiceBC3;
            cin >> c >> d;
            if ((d >= coin) || (d < 1)) {
                jumped = true;
                cin.ignore(1000, '\n');
                goto Loi;
            }
            DiceBC1 = RanStrList("bau", "cua", "tom", "ca", "nai", "ga");
            DiceBC2 = RanStrList("bau", "cua", "tom", "ca", "nai", "ga");
            DiceBC3 = RanStrList("bau", "cua", "tom", "ca", "nai", "ga");
            if ((c != "bau") && (c != "cua") && (c != "tom") && (c != "ca") && (c != "nai") && (c != "ga")) {
                jumped = true;
                cin.ignore(1000, '\n');
            }
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
                wait(1s);
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
            long long d;
            cin >> c >> d;
            if ((c != "keo") && (c != "bua") && (c != "bao")) {
                jumped = true;
                cin.ignore(1000, '\n');
                goto Loi;
            }
            if ((d >= coin) || (d < 1)) {
                jumped = true;
                cin.ignore(1000, '\n');
                goto Loi;
            }
            KetQuaKBB = RanStrList("keo", "bua", "bao");
            if ((c == "keo" && KetQuaKBB == "bao") || (c == "bua" && KetQuaKBB == "keo") || (c == "bao" && KetQuaKBB == "bua")) {
                KetQuaChu = "Ban da thang!";
                coin += d;
            } else if (c == KetQuaKBB) {
                KetQuaChu = "Hoa";
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
        } else if (b == "vongquay") {
            long long c;
            cin >> c;
            string KetQuaVQ;
            if ((c >= coin) || (c < 1)) {
                jumped = true;
                cin.ignore(1000, '\n');
                goto Loi;
            }
            KetQuaVQ = RanStrList("+100", "x2", "-50", "Jackpot", "Mat het", "Hoan tien");
            coin -= c;
            if (KetQuaVQ == "+100") {
                coin += c + 100;
            } else if (KetQuaVQ == "x2") {
                coin += c * 3;
            } else if (KetQuaVQ == "-50") {
                coin += c - 50;
            } else if (KetQuaVQ == "Jackpot") {
                coin += c * 11;
            } else if (KetQuaVQ == "Mat het") {
                coin = 0;
            } else {
                coin += c;
            }
            cout << "\n---Ket Qua Tro Choi-------------------------------";
            cout << "\n Ket qua vong quay: " << KetQuaVQ;
            cout << "\n So tien dat cuoc: " << c;
            cout << "\n So coin hien tai: " << coin;
            cout << "\n--------------------------------------------------";
            goto ChuKy;
        } else if (b == "vongquaymaimoi") {
            string KetQuaVQMM;
            KetQuaVQMM = RanStrList("A", "B", "C", "D", "E", "G", "H", "I","K", "L", "M", "N", "O", "P", "Q", "R", "S","T", "U", "V", "X", "Y");
            int PTKetQuaVQMM;
            PTKetQuaVQMM = RanInt(0,100);
            cout << "\n";
            for (int i = 4; i != 0; i--) {
                cout << "\r Thoi gian con lai: " << i - 1 << " ";
                wait(1s);
            }
            cout << "\r---Du Doan Ten Nguoi Yeu Tuong Lai----------------";
            cout << "\n Nguoi can mai moi: " << username;
            cout << "\n Ket qua vong quay mai moi: " << KetQuaVQMM;
            cout << "\n Do phu hop: " << PTKetQuaVQMM << "%";
            cout << "\n Chuc ban som co nguoi yeu!";
            cout << "\n--------------------------------------------------";
            goto ChuKy;
            } else if (b == "doanso") {
                long long c, d;
                cin >> c >> d;
                if ((c < 0) || (c > d)) {
                    jumped = true;
                    cin.ignore(1000, '\n');
                    goto Loi;
                }
                long long KetQuaDS;
                KetQuaDS = RanInt(c, d);
                int SoLan = 0;
                DoanSo:
                SoLan++;
                int e;
                cout << "\n Nhap so du doan: ";
                cin >> e;
                if (e == -1) {
                    cout << "\n Da thoat tro choi!";
                    goto ChuKy;
                }else if (e > KetQuaDS) {
                    cout << "\n---Ket Qua Tro Choi-------------------------------";
                    cout << "\n So ban nhap lon hon ket qua he thong random";
                    cout << "\n Vui long thu lai";
                    cout << "\n--------------------------------------------------";
                    goto DoanSo;
                } else if (e < KetQuaDS) {
                    cout << "\n---Ket Qua Tro Choi-------------------------------";
                    cout << "\n So ban nhap nho hon ket qua he thong random";
                    cout << "\n Vui long thu lai";
                    cout << "\n--------------------------------------------------";
                    goto DoanSo;
                } else if (e = KetQuaDS) {
                    cout << "\n---Ket Qua Tro Choi-------------------------------";
                    cout << "\n Chuc mung ban da doan trung so!";
                    cout << "\n Ket qua: " << KetQuaDS;
                    cout << "\n Ban da doan trung sau " << SoLan << " lan doan";
                    cout << "\n--------------------------------------------------";
                    goto ChuKy;
                } else {
                    jumped = true;
                    cin.ignore(1000, '\n');
                    goto Loi;
                }
            } else if (b == "boitinhyeu") {
                string c, d;
                cout << "\n---Boi Tinh Yeu-----------------------------------";
                cout << "\n Nhap ten nguoi 1: ";
                cin.ignore();
                getline(cin,c);
                cout << "\n Nhap ten nguoi 2: ";
                getline(cin,d);
                int KetQuaBTY = RanInt(0,100);
                cout << "\n";
                for (int i = 6; i != 0; i--) {
                    cout << "\r Thoi gian con lai: " << i-1;
                    wait(1s);
                }
                cout << "\r---Ket Qua Boi Tinh Yeu---------------------------";
                cout << "\n Ket qua giua " << c << " & " << d << " la: " << KetQuaBTY << "%";
                cout << "\n--------------------------------------------------";
                goto ChuKy;
            } else if (b == "huongdan") {
            string c;
            cin >> c;
            if (c == "chanle") {
                cout << "\n---Huong dan game---------------------------------";
                cout << "\n Cu phap: game chanle [chan/le] <so coin>";
                cout << "\n -> Cuoc chan/le kem so coin";
                cout << "\n He thong random 3 xuc sac va tinh tong";
                cout << "\n Neu tong chan -> Ket qua chan";
                cout << "\n Neu tong le -> Ket qua le";
                cout << "\n Neu ket qua cuoc trung ket qua may dua ra -> Ban thang";
                cout << "\n Neu khong -> Ban thua";
                cout << "\n Neu xuc sac ra 3 so giong nhau -> Jackpot";
                cout << "\n Con thac mac vui long lien he: 0936974180(Zalo)";
                cout << "\n--------------------------------------------------";
            } else if (c == "taixiu") {
                cout << "\n---Huong dan game---------------------------------";
                cout << "\n Cu phap: game taixiu [tai/xiu] <so coin>";
                cout << "\n -> Cuoc tai/xiu kem so coin";
                cout << "\n He thong random 3 xuc sac va tinh tong";
                cout << "\n Neu tong >10 -> Ket qua tai";
                cout << "\n Neu tong <= 10> -> Ket qua xiu";
                cout << "\n Neu ket qua cuoc trung ket qua may dua ra -> Ban thang";
                cout << "\n Neu khong -> Ban thua";
                cout << "\n Neu xuc sac ra 3 so giong nhau -> Jackpot";
                cout << "\n Con thac mac vui long lien he: 0936974180(Zalo)";
                cout << "\n--------------------------------------------------";
            } else if (c == "baucua") {
                cout << "\n---Huong dan game---------------------------------";
                cout << "\n Cu phap: game baucua [bau/cua/tom/ca/nai/ga] <so coin>";
                cout << "\n -> Cuoc bau/cua/tom/ca/nai/ga kem so coin";
                cout << "\n He thong random 3 lan ra cac ket qua: bau/cua/ tom/ca/nai/ga";
                cout << "\n Neu ket qua cuoc trung ket qua may dua ra -> Ban thang";
                cout << "\n Neu khong -> Ban thua";
                cout << "\n Hien he thong chi cho phep dat cuoc 1 con 1 lan";
                cout << "\n Con thac mac vui long lien he: 0936974180(Zalo)";
                cout << "\n--------------------------------------------------";
            } else if (c == "keobuabao") {
                cout << "\n---Huong dan game---------------------------------";
                cout << "\n Cu phap: game keobuabao [keo/bua/bao] <so coin>";
                cout << "\n -> Cuoc keo/bua/bao kem so coin";
                cout << "\n He thong random 1 trong cac ket qua: keo/bua/bao";
                cout << "\n Quy tac tro choi nhu tro keo bua bao";
                cout << "\n Con thac mac vui long lien he: 0936974180(Zalo)";
                cout << "\n--------------------------------------------------";
            } else if (c == "vongquay") {
                cout << "\n---Huong dan game---------------------------------";
                cout << "\n Cu phap: game vongquay <so coin>";
                cout << "\n -> Cuoc so coin";
                cout << "\n He thong random 1 trong cac ket qua: +100/x2/-50/Jackpot/Mat het/Hoan tien";
                cout << "\n So coin ban dat cuoc duoc xu li theo ke qua ban quay ra";
                cout << "\n Con thac mac vui long lien he: 0936974180(Zalo)";
                cout << "\n--------------------------------------------------";
            } else if (c == "vongquaymaimoi") {
                cout << "\n---Huong dan game---------------------------------";
                cout << "\n Cu phap: game vongquaymaimoi";
                cout << "\n -> Du doan ten nguoi yeu tuong lai";
                cout << "\n He thong random chu cai viet hoa va muc do phu hop";
                cout << "\n Chu cai hien ra la ten nguoi yeu tuong lai cua ban";
                cout << "\n Con thac mac vui long lien he: 0936974180(Zalo)";
                cout << "\n--------------------------------------------------";
            } else if (c == "doanso") {
                cout << "\n---Huong dan game---------------------------------";
                cout << "\n Cu phap: game doanso <so nho nhat> <so lon nhat>";
                cout << "\n -> Doan so he thong random";
                cout << "\n He thong random ket qua trong khoang ban nhap";
                cout << "\n Ban se doan den khi dung so";
                cout << "\n Neu muon ngung choi, nhap '-1'";
                cout << "\n Con thac mac vui long lien he: 0936974180(Zalo)";
                cout << "\n--------------------------------------------------";
            } else if (c == "boitinhyeu") {
                cout << "\n---Huong dan game---------------------------------";
                cout << "\n Cu phap: game boitinhyeu";
                cout << "\n -> Nhap lan luot ten nguoi thu nhat và nguoi thu hai";
                cout << "\n He thong se random muc do phu hop cua 2 nguoi";
                cout << "\n Con thac mac vui long lien he: 0936974180(Zalo)";
                cout << "\n--------------------------------------------------";
            } else {
                jumped = true;
                cin.ignore(1000,'\n');
                goto Loi;
            }
            goto ChuKy;
        } else {
            jumped = true;
            cin.ignore(1000, '\n');
            goto Loi;
        }
    } else if (a == "reset") {
        coin = 100;
        HuCL = 500;
        HuTX = 500;
        cout << "\n---Da Sua He Thong--------------------------------";
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
            cout << "\n---Da Sua He Thong--------------------------------";
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
        cout << "\n---Danh Sach Cac Lenh Duoc Ho Tro-----------------";
        cout << "\n help: Xem danh sach cac lenh duoc ho tro";
        cout << "\n reset: Reset coin va hu";
        cout << "\n gamehelp: Xem danh sach cac game duoc ho tro";
        cout << "\n mycard: Xem so coin hien tai";
        cout << "\n botinfo: Xem thong tin bot";
        cout << "\n banquyen: Xem ban quyen bot";
        cout << "\n thayten <username>: Thay username";
        cout << "\n *Cac lenh admin se khong duoc hien thi o day*";
        cout << "\n *Nhap lenh vui long khong viet hoa va bo dau*";
        cout << "\n--------------------------------------------------";
        goto ChuKy;
    } else if (a == "banquyen") {
        cout << "\n---Ban Quyen Bot----------------------------------";
        cout << "\n Copyright belongs to: NguyenPhuoc";
        cout << "\n--------------------------------------------------";
        goto ChuKy;
    } else if (a == "gamehelp") {
        cout << "\n---Danh Sach Cac Tro Choi Co The Choi-------------";
        cout << "\n chanle: Cuoc chan/le -> Cu phap: game chanle [chan/le] <so coin>";
        cout << "\n taixiu: Cuoc tai/xiu -> Cu phap: game taixiu [tai/xiu] <so coin>";
        cout << "\n baucua: Cuoc bau/cua/tom/ca/nai/ga -> Cu phap: game bau cua [bau/cua/tom/ca/nai/ga] <so coin>";
        cout << "\n keobuabao: Cuoc keo/bua/bao -> Cu phap: game keobuabao [keo/bua/bao] <so coin>";
        cout << "\n vongquay: Quay ngau nhien giai thuong -> Cu phap: game vongquay <so coin>";
        cout << "\n vongquaymaimoi: Tim ngau nhien ten nguoi yeu tuong lai -> Cu phap: game vongquaymaimoi";
        cout << "\n boitinhyeu: Tim muc do phu hop cua 2 nguoi -> Cu phap: game boitinhyeu";
        cout << "\n huongdan: Huong dan chi tiet tung game -> Cu phap: game huongdan [chanle/baucua/taixiu/keobuabao/vongquay]";
        cout << "\n *Vui long khong dat cuoc so tien khong co";
        cout << "\n--------------------------------------------------";
        goto ChuKy;
    } else if (a == "buff") {
        cout << "\n Vui long nhap mat khau de su dung: ";
        string b;
        cin >> b;
        if (b == pass) {
            cout << "\n Vui long nhap so tien muon nang: ";
            long long c;
            cin >> c;
            if (c < 0) {
                jumped = true;
                cin.ignore(1000, '\n');
            } else {
            coin += c;
            cout << "\n---Da Sua He Thong--------------------------------";
            cout << "\n So coin hien tai: " << coin;
            cout << "\n *Vui long khong lam dung lenh admin!*";
            cout << "\n--------------------------------------------------";
            goto ChuKy;
            }
        } else {
            cout << "\nMat khau sai!";
            goto ChuKy;
        }
    } else if (a == "adminhelp") {
        cout << "\n Vui long nhap mat khau de su dung: ";
        string b;
        cin >> b;
        if (b == pass) {
            cout << "\n---Danh Sach Cac Lenh ADMIN Duoc Ho Tro-----------";
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
            long long c;
            cin >> c;
            if (c > coin) {
                jumped = true;
                cin.ignore(1000, '\n');
            } else {
            coin -= c;
            cout << "\n---Da Sua He Thong--------------------------------";
            cout << "\n So coin hien tai: " << coin;
            cout << "\n *Vui long khong lam dung lenh admin!*";
            cout << "\n--------------------------------------------------";
            goto ChuKy;
            }
        } else {
            cout << "\nMat khau sai!";
            goto ChuKy;
        }
    } else if (a == "thayten") {
        string b;
        getline(cin,b);
        username = b;
        cout << "\n---Da Sua He Thong--------------------------------";
        cout << "\n Username moi cua ban: " << username;
        cout << "\n--------------------------------------------------";
        goto ChuKy;
    } else {
        jumped = true;
        cin.ignore(1000, '\n');
    }
    goto Loi;
}
